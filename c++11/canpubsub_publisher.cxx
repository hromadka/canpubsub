/*
 * sort out (c) Copyright TBD
 */

#include <iostream>

#include <dds/pub/ddspub.hpp>
#include <rti/util/util.hpp>  // for sleep()
#include <rti/config/Logger.hpp>  // for logging
// Or simply include <dds/dds.hpp> 

#include "canpubsub.hpp"
#include "application.hpp"  // Argument parsing

using namespace application;

std::string simdata[10];


void populateSimData() {
  simdata[0] = "can0  698   [4]  73 00 00 00";
  simdata[1] = "can0  740   [8]  74 00 00 00 00 00 00 00";
  simdata[2] = "can0  4A7   [5]  75 00 00 00 00";
  simdata[3] = "can0  118   [7]  76 00 00 00 00 00 00";
  simdata[4] = "can0  7B9   [5]  77 00 00 00 00";
  simdata[5] = "can0  436   [6]  78 00 00 00 00 00";
  simdata[6] = "can0  231   [1]  79";
  simdata[7] = "can0  1F7   [8]  7A 00 00 00 00 00 00 00";
  simdata[8] = "can0  053   [2]  7B 00";
  simdata[9] = "can0  35E   [2]  7C 00";
}


std::string getSimData() {
  //std::cout << std::to_string(rand() % 10) << std::endl;
  //std::cout << simdata[rand() % 10] << std::endl;
  return simdata[rand() % 10];
}

void run_example(
        unsigned int domain_id,
        unsigned int sample_count,
        const std::string& sensor_id)
{
    // A DomainParticipant allows an application to begin communicating in
    // a DDS domain. Typically there is one DomainParticipant per application.
    // DomainParticipant QoS is configured in USER_QOS_PROFILES.xml
    dds::domain::DomainParticipant participant(domain_id);

    dds::topic::Topic<CanData> topic(participant, "CAN Topic");


    // A Publisher allows an application to create one or more DataWriters
    // Publisher QoS is configured in USER_QOS_PROFILES.xml
    dds::pub::Publisher publisher(participant);

    // DataWriter QoS is configured in USER_QOS_PROFILES.xml
    dds::pub::DataWriter<CanData> writer(publisher, topic);

    // Create data sample for writing
    CanData sample;
    for (unsigned int count = 0;
         !shutdown_requested && count < sample_count;
         count++) {
        // Modify the data to be written here
        sample.sensor_id(sensor_id);
        sample.sentence(getSimData()); 

        std::cout << "Writing CAN Data, count " << count
                  << std::endl;

        writer.write(sample);

	// 100 ms
        rti::util::sleep(dds::core::Duration(0.1));
    }
}


int main(int argc, char *argv[])
{
    // Parse arguments and handle control-C
    auto arguments = parse_arguments(argc, argv);
    if (arguments.parse_result == ParseReturn::exit) {
        return EXIT_SUCCESS;
    } else if (arguments.parse_result == ParseReturn::failure) {
        return EXIT_FAILURE;
    }
    setup_signal_handlers();

    populateSimData();

    // Sets Connext verbosity to help debugging
    rti::config::Logger::instance().verbosity(arguments.verbosity);

    try {
        run_example(
                arguments.domain_id,
                arguments.sample_count,
                arguments.sensor_id);
    } catch (const std::exception& ex) {
        // This will catch DDS exceptions
        std::cerr << "Exception in run_example(): " << ex.what()
                  << std::endl;
        return EXIT_FAILURE;
    }

    // Releases the memory used by the participant factory.  Optional at
    // application shutdown
    dds::domain::DomainParticipant::finalize_participant_factory();

    return EXIT_SUCCESS;
}
