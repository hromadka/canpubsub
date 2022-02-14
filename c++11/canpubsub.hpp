

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from canpubsub.idl
using RTI Code Generator (rtiddsgen) version 3.1.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef canpubsub_426410687_hpp
#define canpubsub_426410687_hpp

#include <iosfwd>

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/Optional.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/core/array.hpp"
#include "rti/core/BoundedSequence.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#include "rti/core/LongDouble.hpp"
#include "dds/core/External.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/topic/TopicTraits.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

class NDDSUSERDllExport CanData {
  public:
    CanData();

    CanData(
        const std::string& sensor_id,
        const std::string& sentence);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    CanData (CanData&&) = default;
    CanData& operator=(CanData&&) = default;
    CanData& operator=(const CanData&) = default;
    CanData(const CanData&) = default;
    #else
    CanData(CanData&& other_) OMG_NOEXCEPT;  
    CanData& operator=(CanData&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    std::string& sensor_id() OMG_NOEXCEPT {
        return m_sensor_id_;
    }

    const std::string& sensor_id() const OMG_NOEXCEPT {
        return m_sensor_id_;
    }

    void sensor_id(const std::string& value) {
        m_sensor_id_ = value;
    }

    void sensor_id(std::string&& value) {
        m_sensor_id_ = std::move(value);
    }
    std::string& sentence() OMG_NOEXCEPT {
        return m_sentence_;
    }

    const std::string& sentence() const OMG_NOEXCEPT {
        return m_sentence_;
    }

    void sentence(const std::string& value) {
        m_sentence_ = value;
    }

    void sentence(std::string&& value) {
        m_sentence_ = std::move(value);
    }

    bool operator == (const CanData& other_) const;
    bool operator != (const CanData& other_) const;

    void swap(CanData& other_) OMG_NOEXCEPT ;

  private:

    std::string m_sensor_id_;
    std::string m_sentence_;

};

inline void swap(CanData& a, CanData& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const CanData& sample);

enum class CanStatusKind {
    WAITING, 
    PROCESSING, 
    COMPLETED
};

NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const CanStatusKind& sample);

class NDDSUSERDllExport CanState {
  public:
    CanState();

    CanState(
        uint32_t node_id,
        const CanStatusKind& can_status);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    CanState (CanState&&) = default;
    CanState& operator=(CanState&&) = default;
    CanState& operator=(const CanState&) = default;
    CanState(const CanState&) = default;
    #else
    CanState(CanState&& other_) OMG_NOEXCEPT;  
    CanState& operator=(CanState&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    uint32_t& node_id() OMG_NOEXCEPT {
        return m_node_id_;
    }

    const uint32_t& node_id() const OMG_NOEXCEPT {
        return m_node_id_;
    }

    void node_id(uint32_t value) {
        m_node_id_ = value;
    }

    CanStatusKind& can_status() OMG_NOEXCEPT {
        return m_can_status_;
    }

    const CanStatusKind& can_status() const OMG_NOEXCEPT {
        return m_can_status_;
    }

    void can_status(const CanStatusKind& value) {
        m_can_status_ = value;
    }

    void can_status(CanStatusKind&& value) {
        m_can_status_ = std::move(value);
    }

    bool operator == (const CanState& other_) const;
    bool operator != (const CanState& other_) const;

    void swap(CanState& other_) OMG_NOEXCEPT ;

  private:

    uint32_t m_node_id_;
    CanStatusKind m_can_status_;

};

inline void swap(CanState& a, CanState& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const CanState& sample);

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

        template<>
        struct topic_type_name< CanData > {
            NDDSUSERDllExport static std::string value() {
                return "CanData";
            }
        };

        template<>
        struct is_topic_type< CanData > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< CanData > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const CanData& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(CanData& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(CanData& sample);

            NDDSUSERDllExport 
            static void allocate_sample(CanData& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< CanState > {
            NDDSUSERDllExport static std::string value() {
                return "CanState";
            }
        };

        template<>
        struct is_topic_type< CanState > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< CanState > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const CanState& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(CanState& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(CanState& sample);

            NDDSUSERDllExport 
            static void allocate_sample(CanState& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {
        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< CanData > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< CanData > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template <>
        struct default_enumerator<CanStatusKind>
        {
            static const CanStatusKind value;
        };
        template<>
        struct dynamic_type< CanStatusKind > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };
        #endif

        template <>
        struct extensibility< CanStatusKind > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< CanState > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< CanState > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

    }
}

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // canpubsub_426410687_hpp

