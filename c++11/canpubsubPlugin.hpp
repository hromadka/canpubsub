

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from canpubsub.idl
using RTI Code Generator (rtiddsgen) version 3.1.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef canpubsubPlugin_426410687_h
#define canpubsubPlugin_426410687_h

#include "canpubsub.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#define CanDataPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define CanDataPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define CanDataPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define CanDataPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define CanDataPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern CanData*
CanDataPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern CanData*
CanDataPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern CanData*
CanDataPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
CanDataPluginSupport_copy_data(
    CanData *out,
    const CanData *in);

NDDSUSERDllExport extern void 
CanDataPluginSupport_destroy_data_w_params(
    CanData *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
CanDataPluginSupport_destroy_data_ex(
    CanData *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
CanDataPluginSupport_destroy_data(
    CanData *sample);

NDDSUSERDllExport extern void 
CanDataPluginSupport_print_data(
    const CanData *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
CanDataPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
CanDataPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
CanDataPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
CanDataPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
CanDataPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    CanData *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
CanDataPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    CanData *out,
    const CanData *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
CanDataPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const CanData *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
CanDataPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    CanData **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
CanDataPlugin_deserialize_from_cdr_buffer(
    CanData *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
CanDataPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
CanDataPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
CanDataPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
CanDataPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
CanDataPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    CanData ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
CanDataPlugin_new(void);

NDDSUSERDllExport extern void
CanDataPlugin_delete(struct PRESTypePlugin *);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern unsigned int 
CanStatusKindPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern unsigned int 
CanStatusKindPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
CanStatusKindPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* ----------------------------------------------------------------------------
Support functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
CanStatusKindPluginSupport_print_data(
    const CanStatusKind *sample, const char *desc, int indent_level);

#define CanStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define CanStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define CanStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define CanStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define CanStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern CanState*
CanStatePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern CanState*
CanStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern CanState*
CanStatePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
CanStatePluginSupport_copy_data(
    CanState *out,
    const CanState *in);

NDDSUSERDllExport extern void 
CanStatePluginSupport_destroy_data_w_params(
    CanState *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
CanStatePluginSupport_destroy_data_ex(
    CanState *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
CanStatePluginSupport_destroy_data(
    CanState *sample);

NDDSUSERDllExport extern void 
CanStatePluginSupport_print_data(
    const CanState *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
CanStatePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
CanStatePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
CanStatePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
CanStatePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
CanStatePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    CanState *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
CanStatePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    CanState *out,
    const CanState *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
CanStatePlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const CanState *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
CanStatePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    CanState **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
CanStatePlugin_deserialize_from_cdr_buffer(
    CanState *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
CanStatePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
CanStatePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
CanStatePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
CanStatePlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
CanStatePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    CanState ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
CanStatePlugin_new(void);

NDDSUSERDllExport extern void
CanStatePlugin_delete(struct PRESTypePlugin *);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* canpubsubPlugin_426410687_h */

