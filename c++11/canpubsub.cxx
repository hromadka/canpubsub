

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from canpubsub.idl
using RTI Code Generator (rtiddsgen) version 3.1.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "canpubsub.hpp"
#include "canpubsubPlugin.hpp"

#include <rti/util/ostream_operators.hpp>

// ---- CanData: 

CanData::CanData() :
    m_sensor_id_ ("") ,
    m_sentence_ ("")  {
}   

CanData::CanData (
    const std::string& sensor_id,
    const std::string& sentence)
    :
        m_sensor_id_( sensor_id ),
        m_sentence_( sentence ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
CanData::CanData(CanData&& other_) OMG_NOEXCEPT  :m_sensor_id_ (std::move(other_.m_sensor_id_))
,
m_sentence_ (std::move(other_.m_sentence_))
{
} 

CanData& CanData::operator=(CanData&&  other_) OMG_NOEXCEPT {
    CanData tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void CanData::swap(CanData& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_sensor_id_, other_.m_sensor_id_);
    swap(m_sentence_, other_.m_sentence_);
}  

bool CanData::operator == (const CanData& other_) const {
    if (m_sensor_id_ != other_.m_sensor_id_) {
        return false;
    }
    if (m_sentence_ != other_.m_sentence_) {
        return false;
    }
    return true;
}
bool CanData::operator != (const CanData& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const CanData& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "sensor_id: " << sample.sensor_id()<<", ";
    o << "sentence: " << sample.sentence() ;
    o <<"]";
    return o;
}

std::ostream& operator << (std::ostream& o,const CanStatusKind& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    switch(sample){
        case CanStatusKind::WAITING:
        o << "CanStatusKind::WAITING" << " ";
        break;
        case CanStatusKind::PROCESSING:
        o << "CanStatusKind::PROCESSING" << " ";
        break;
        case CanStatusKind::COMPLETED:
        o << "CanStatusKind::COMPLETED" << " ";
        break;
    }
    return o;
}

// ---- CanState: 

CanState::CanState() :
    m_node_id_ (0u) ,
    m_can_status_(CanStatusKind::WAITING)  {
}   

CanState::CanState (
    uint32_t node_id,
    const CanStatusKind& can_status)
    :
        m_node_id_( node_id ),
        m_can_status_( can_status ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
CanState::CanState(CanState&& other_) OMG_NOEXCEPT  :m_node_id_ (std::move(other_.m_node_id_))
,
m_can_status_ (std::move(other_.m_can_status_))
{
} 

CanState& CanState::operator=(CanState&&  other_) OMG_NOEXCEPT {
    CanState tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void CanState::swap(CanState& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_node_id_, other_.m_node_id_);
    swap(m_can_status_, other_.m_can_status_);
}  

bool CanState::operator == (const CanState& other_) const {
    if (m_node_id_ != other_.m_node_id_) {
        return false;
    }
    if (m_can_status_ != other_.m_can_status_) {
        return false;
    }
    return true;
}
bool CanState::operator != (const CanState& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const CanState& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "node_id: " << sample.node_id()<<", ";
    o << "can_status: " << sample.can_status() ;
    o <<"]";
    return o;
}

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< CanData > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode CanData_g_tc_sensor_id_string;
                static DDS_TypeCode CanData_g_tc_sentence_string;

                static DDS_TypeCode_Member CanData_g_tc_members[2]=
                {

                    {
                        (char *)"sensor_id",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"sentence",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode CanData_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"CanData", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        CanData_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for CanData*/

                if (is_initialized) {
                    return &CanData_g_tc;
                }

                CanData_g_tc_sensor_id_string = initialize_string_typecode((256L));
                CanData_g_tc_sentence_string = initialize_string_typecode((126L));

                CanData_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CanData_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&CanData_g_tc_sensor_id_string;
                CanData_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&CanData_g_tc_sentence_string;

                /* Initialize the values for member annotations. */
                CanData_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                CanData_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                CanData_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                CanData_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                CanData_g_tc._data._sampleAccessInfo = sample_access_info();
                CanData_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &CanData_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                CanData *sample;

                static RTIXCdrMemberAccessInfo CanData_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CanData_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CanData_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    CanData);
                if (sample == NULL) {
                    return NULL;
                }

                CanData_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sensor_id() - (char *)sample);

                CanData_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sentence() - (char *)sample);

                CanData_g_sampleAccessInfo.memberAccessInfos = 
                CanData_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(CanData);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CanData_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CanData_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CanData_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CanData_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< CanData >;

                CanData_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CanData_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CanData_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &CanData_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< CanData >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< CanData >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        const CanStatusKind default_enumerator<CanStatusKind>::value = CanStatusKind::WAITING;
        template<>
        struct native_type_code< CanStatusKind > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member CanStatusKind_g_tc_members[3]=
                {

                    {
                        (char *)"WAITING",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(CanStatusKind::WAITING), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"PROCESSING",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(CanStatusKind::PROCESSING), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"COMPLETED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(CanStatusKind::COMPLETED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode CanStatusKind_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"CanStatusKind", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        CanStatusKind_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for CanStatusKind*/

                if (is_initialized) {
                    return &CanStatusKind_g_tc;
                }

                CanStatusKind_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                CanStatusKind_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                CanStatusKind_g_tc._data._annotations._defaultValue._u.long_value = 0;

                CanStatusKind_g_tc._data._sampleAccessInfo = sample_access_info();
                CanStatusKind_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &CanStatusKind_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo CanStatusKind_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CanStatusKind_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CanStatusKind_g_sampleAccessInfo;
                }

                CanStatusKind_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                CanStatusKind_g_sampleAccessInfo.memberAccessInfos = 
                CanStatusKind_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(CanStatusKind);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CanStatusKind_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CanStatusKind_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CanStatusKind_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CanStatusKind_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< CanStatusKind >;

                CanStatusKind_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CanStatusKind_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CanStatusKind_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &CanStatusKind_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::EnumType& dynamic_type< CanStatusKind >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< CanStatusKind >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< CanState > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member CanState_g_tc_members[2]=
                {

                    {
                        (char *)"node_id",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"can_status",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode CanState_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"CanState", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        CanState_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for CanState*/

                if (is_initialized) {
                    return &CanState_g_tc;
                }

                CanState_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CanState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
                CanState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< CanStatusKind>::get().native();

                /* Initialize the values for member annotations. */
                CanState_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ULONG;
                CanState_g_tc_members[0]._annotations._defaultValue._u.ulong_value = 0u;
                CanState_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_ULONG;
                CanState_g_tc_members[0]._annotations._minValue._u.ulong_value = RTIXCdrUnsignedLong_MIN;
                CanState_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_ULONG;
                CanState_g_tc_members[0]._annotations._maxValue._u.ulong_value = RTIXCdrUnsignedLong_MAX;

                CanState_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                CanState_g_tc_members[1]._annotations._defaultValue._u.enumerated_value = 0;

                CanState_g_tc._data._sampleAccessInfo = sample_access_info();
                CanState_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &CanState_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                CanState *sample;

                static RTIXCdrMemberAccessInfo CanState_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CanState_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CanState_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    CanState);
                if (sample == NULL) {
                    return NULL;
                }

                CanState_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->node_id() - (char *)sample);

                CanState_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->can_status() - (char *)sample);

                CanState_g_sampleAccessInfo.memberAccessInfos = 
                CanState_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(CanState);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CanState_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CanState_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CanState_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CanState_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< CanState >;

                CanState_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CanState_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CanState_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &CanState_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< CanState >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< CanState >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< CanData >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                CanDataPlugin_new,
                CanDataPlugin_delete);
        }

        std::vector<char>& topic_type_support< CanData >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const CanData& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = CanDataPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = CanDataPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< CanData >::from_cdr_buffer(CanData& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = CanDataPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create CanData from cdr buffer");
        }

        void topic_type_support< CanData >::reset_sample(CanData& sample) 
        {
            sample.sensor_id("");
            sample.sentence("");
        }

        void topic_type_support< CanData >::allocate_sample(CanData& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.sensor_id(),  -1, 256L);
            ::rti::topic::allocate_sample(sample.sentence(),  -1, 126L);
        }

        void topic_type_support< CanState >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                CanStatePlugin_new,
                CanStatePlugin_delete);
        }

        std::vector<char>& topic_type_support< CanState >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const CanState& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = CanStatePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = CanStatePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< CanState >::from_cdr_buffer(CanState& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = CanStatePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create CanState from cdr buffer");
        }

        void topic_type_support< CanState >::reset_sample(CanState& sample) 
        {
            sample.node_id(0u);
            sample.can_status(CanStatusKind::WAITING);
        }

        void topic_type_support< CanState >::allocate_sample(CanState& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.can_status(),  -1, -1);
        }

    }
}  

