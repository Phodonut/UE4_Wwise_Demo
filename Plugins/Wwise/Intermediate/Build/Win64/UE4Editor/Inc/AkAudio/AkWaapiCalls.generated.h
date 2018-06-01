// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAkWaapiSubscriptionId;
struct FAKWaapiJsonObject;
struct FAkWaapiUri;
#ifdef AKAUDIO_AkWaapiCalls_generated_h
#error "AkWaapiCalls.generated.h already included, missing '#pragma once' in AkWaapiCalls.h"
#endif
#define AKAUDIO_AkWaapiCalls_generated_h

#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_26_GENERATED_BODY \
	friend AKAUDIO_API class UScriptStruct* Z_Construct_UScriptStruct_FAkWaapiSubscriptionId(); \
	static class UScriptStruct* StaticStruct();


#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_36_DELEGATE \
static inline void FOnWaapiConnectionLost_DelegateWrapper(const FScriptDelegate& OnWaapiConnectionLost) \
{ \
	OnWaapiConnectionLost.ProcessDelegate<UObject>(NULL); \
}


#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_35_DELEGATE \
static inline void FOnWaapiProjectLoaded_DelegateWrapper(const FScriptDelegate& OnWaapiProjectLoaded) \
{ \
	OnWaapiProjectLoaded.ProcessDelegate<UObject>(NULL); \
}


#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_34_DELEGATE \
struct _Script_AkAudio_eventOnEventCallback_Parms \
{ \
	FAkWaapiSubscriptionId SubscriptionId; \
	FAKWaapiJsonObject WaapiJsonObject; \
}; \
static inline void FOnEventCallback_DelegateWrapper(const FScriptDelegate& OnEventCallback, FAkWaapiSubscriptionId SubscriptionId, FAKWaapiJsonObject WaapiJsonObject) \
{ \
	_Script_AkAudio_eventOnEventCallback_Parms Parms; \
	Parms.SubscriptionId=SubscriptionId; \
	Parms.WaapiJsonObject=WaapiJsonObject; \
	OnEventCallback.ProcessDelegate<UObject>(&Parms); \
}


#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_41_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConv_FAkWaapiSubscriptionIdToText) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiSubscriptionId,Z_Param_Out_INAkWaapiSubscriptionId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UAkWaapiCalls::Conv_FAkWaapiSubscriptionIdToText(Z_Param_Out_INAkWaapiSubscriptionId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_FAkWaapiSubscriptionIdToString) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiSubscriptionId,Z_Param_Out_INAkWaapiSubscriptionId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UAkWaapiCalls::Conv_FAkWaapiSubscriptionIdToString(Z_Param_Out_INAkWaapiSubscriptionId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnsubscribe) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiSubscriptionId,Z_Param_Out_SubscriptionId); \
		P_GET_UBOOL_REF(Z_Param_Out_UnsubscriptionDone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiCalls::Unsubscribe(Z_Param_Out_SubscriptionId,Z_Param_Out_UnsubscriptionDone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubscribeToWaapi) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiUri,Z_Param_Out_WaapiUri); \
		P_GET_STRUCT_REF(FAKWaapiJsonObject,Z_Param_Out_WaapiOptions); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_CallBack); \
		P_GET_STRUCT_REF(FAkWaapiSubscriptionId,Z_Param_Out_SubscriptionId); \
		P_GET_UBOOL_REF(Z_Param_Out_SubscriptionDone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiCalls::SubscribeToWaapi(Z_Param_Out_WaapiUri,Z_Param_Out_WaapiOptions,FOnEventCallback(Z_Param_Out_CallBack),Z_Param_Out_SubscriptionId,Z_Param_Out_SubscriptionDone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallWaapi) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiUri,Z_Param_Out_WaapiUri); \
		P_GET_STRUCT_REF(FAKWaapiJsonObject,Z_Param_Out_WaapiArgs); \
		P_GET_STRUCT_REF(FAKWaapiJsonObject,Z_Param_Out_WaapiOptions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiCalls::CallWaapi(Z_Param_Out_WaapiUri,Z_Param_Out_WaapiArgs,Z_Param_Out_WaapiOptions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterWaapiConnectionLostCallback) \
	{ \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_Callback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAkWaapiCalls::RegisterWaapiConnectionLostCallback(FOnWaapiConnectionLost(Z_Param_Out_Callback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterWaapiProjectLoadedCallback) \
	{ \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_Callback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAkWaapiCalls::RegisterWaapiProjectLoadedCallback(FOnWaapiProjectLoaded(Z_Param_Out_Callback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSubscriptionID) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiSubscriptionId,Z_Param_Out_Subscription); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UAkWaapiCalls::GetSubscriptionID(Z_Param_Out_Subscription); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSubscriptionID) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiSubscriptionId,Z_Param_Out_Subscription); \
		P_GET_PROPERTY(UIntProperty,Z_Param_id); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkWaapiCalls::SetSubscriptionID(Z_Param_Out_Subscription,Z_Param_id); \
		P_NATIVE_END; \
	}


#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConv_FAkWaapiSubscriptionIdToText) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiSubscriptionId,Z_Param_Out_INAkWaapiSubscriptionId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UAkWaapiCalls::Conv_FAkWaapiSubscriptionIdToText(Z_Param_Out_INAkWaapiSubscriptionId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_FAkWaapiSubscriptionIdToString) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiSubscriptionId,Z_Param_Out_INAkWaapiSubscriptionId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UAkWaapiCalls::Conv_FAkWaapiSubscriptionIdToString(Z_Param_Out_INAkWaapiSubscriptionId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnsubscribe) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiSubscriptionId,Z_Param_Out_SubscriptionId); \
		P_GET_UBOOL_REF(Z_Param_Out_UnsubscriptionDone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiCalls::Unsubscribe(Z_Param_Out_SubscriptionId,Z_Param_Out_UnsubscriptionDone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubscribeToWaapi) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiUri,Z_Param_Out_WaapiUri); \
		P_GET_STRUCT_REF(FAKWaapiJsonObject,Z_Param_Out_WaapiOptions); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_CallBack); \
		P_GET_STRUCT_REF(FAkWaapiSubscriptionId,Z_Param_Out_SubscriptionId); \
		P_GET_UBOOL_REF(Z_Param_Out_SubscriptionDone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiCalls::SubscribeToWaapi(Z_Param_Out_WaapiUri,Z_Param_Out_WaapiOptions,FOnEventCallback(Z_Param_Out_CallBack),Z_Param_Out_SubscriptionId,Z_Param_Out_SubscriptionDone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallWaapi) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiUri,Z_Param_Out_WaapiUri); \
		P_GET_STRUCT_REF(FAKWaapiJsonObject,Z_Param_Out_WaapiArgs); \
		P_GET_STRUCT_REF(FAKWaapiJsonObject,Z_Param_Out_WaapiOptions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiCalls::CallWaapi(Z_Param_Out_WaapiUri,Z_Param_Out_WaapiArgs,Z_Param_Out_WaapiOptions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterWaapiConnectionLostCallback) \
	{ \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_Callback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAkWaapiCalls::RegisterWaapiConnectionLostCallback(FOnWaapiConnectionLost(Z_Param_Out_Callback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterWaapiProjectLoadedCallback) \
	{ \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_Callback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAkWaapiCalls::RegisterWaapiProjectLoadedCallback(FOnWaapiProjectLoaded(Z_Param_Out_Callback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSubscriptionID) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiSubscriptionId,Z_Param_Out_Subscription); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UAkWaapiCalls::GetSubscriptionID(Z_Param_Out_Subscription); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSubscriptionID) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiSubscriptionId,Z_Param_Out_Subscription); \
		P_GET_PROPERTY(UIntProperty,Z_Param_id); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkWaapiCalls::SetSubscriptionID(Z_Param_Out_Subscription,Z_Param_id); \
		P_NATIVE_END; \
	}


#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkWaapiCalls(); \
	friend AKAUDIO_API class UClass* Z_Construct_UClass_UAkWaapiCalls(); \
public: \
	DECLARE_CLASS(UAkWaapiCalls, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), 0, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkWaapiCalls) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	DECLARE_WITHIN(UWorld) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUAkWaapiCalls(); \
	friend AKAUDIO_API class UClass* Z_Construct_UClass_UAkWaapiCalls(); \
public: \
	DECLARE_CLASS(UAkWaapiCalls, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), 0, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkWaapiCalls) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	DECLARE_WITHIN(UWorld) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkWaapiCalls(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkWaapiCalls) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkWaapiCalls); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkWaapiCalls); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkWaapiCalls(UAkWaapiCalls&&); \
	NO_API UAkWaapiCalls(const UAkWaapiCalls&); \
public:


#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkWaapiCalls(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkWaapiCalls(UAkWaapiCalls&&); \
	NO_API UAkWaapiCalls(const UAkWaapiCalls&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkWaapiCalls); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkWaapiCalls); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkWaapiCalls)


#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_41_PRIVATE_PROPERTY_OFFSET
#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_38_PROLOG
#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_41_PRIVATE_PROPERTY_OFFSET \
	UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_41_RPC_WRAPPERS \
	UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_41_INCLASS \
	UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_41_PRIVATE_PROPERTY_OFFSET \
	UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_41_INCLASS_NO_PURE_DECLS \
	UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_41_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkWaapiCalls."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
