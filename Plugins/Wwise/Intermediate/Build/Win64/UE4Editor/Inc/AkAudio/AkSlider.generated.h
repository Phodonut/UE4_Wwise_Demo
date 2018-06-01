// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGuid;
struct FLinearColor;
#ifdef AKAUDIO_AkSlider_generated_h
#error "AkSlider.generated.h already included, missing '#pragma once' in AkSlider.h"
#endif
#define AKAUDIO_AkSlider_generated_h

#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_55_GENERATED_BODY \
	friend AKAUDIO_API class UScriptStruct* Z_Construct_UScriptStruct_FAkWwiseItemToControl(); \
	static class UScriptStruct* StaticStruct();


#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_28_GENERATED_BODY \
	friend AKAUDIO_API class UScriptStruct* Z_Construct_UScriptStruct_FAkWwiseObjectDetails(); \
	static class UScriptStruct* StaticStruct();


#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_20_DELEGATE \
struct _Script_AkAudio_eventOnPropertyDropDetected_Parms \
{ \
	FString PropertyDropped; \
}; \
static inline void FOnPropertyDropDetected_DelegateWrapper(const FMulticastScriptDelegate& OnPropertyDropDetected, const FString& PropertyDropped) \
{ \
	_Script_AkAudio_eventOnPropertyDropDetected_Parms Parms; \
	Parms.PropertyDropped=PropertyDropped; \
	OnPropertyDropDetected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_17_DELEGATE \
struct _Script_AkAudio_eventOnItemDropDetected_Parms \
{ \
	FGuid ItemDroppedID; \
}; \
static inline void FOnItemDropDetected_DelegateWrapper(const FMulticastScriptDelegate& OnItemDropDetected, FGuid ItemDroppedID) \
{ \
	_Script_AkAudio_eventOnItemDropDetected_Parms Parms; \
	Parms.ItemDroppedID=ItemDroppedID; \
	OnItemDropDetected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_14_DELEGATE \
struct _Script_AkAudio_eventAkOnFloatValueChangedEvent_Parms \
{ \
	float Value; \
}; \
static inline void FAkOnFloatValueChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& AkOnFloatValueChangedEvent, float Value) \
{ \
	_Script_AkAudio_eventAkOnFloatValueChangedEvent_Parms Parms; \
	Parms.Value=Value; \
	AkOnFloatValueChangedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_79_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAkSliderItemProperty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetAkSliderItemProperty(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAkSliderItemProperty) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ItemProperty); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAkSliderItemProperty(Z_Param_ItemProperty); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAkSliderItemId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGuid*)Z_Param__Result=this->GetAkSliderItemId(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAkSliderItemId) \
	{ \
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_ItemId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAkSliderItemId(Z_Param_Out_ItemId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSliderHandleColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSliderHandleColor(Z_Param_InValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSliderBarColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSliderBarColor(Z_Param_InValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStepSize) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetStepSize(Z_Param_InValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLocked) \
	{ \
		P_GET_UBOOL(Z_Param_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetLocked(Z_Param_InValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIndentHandle) \
	{ \
		P_GET_UBOOL(Z_Param_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetIndentHandle(Z_Param_InValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetValue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetValue(Z_Param_InValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetValue(); \
		P_NATIVE_END; \
	}


#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAkSliderItemProperty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetAkSliderItemProperty(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAkSliderItemProperty) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ItemProperty); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAkSliderItemProperty(Z_Param_ItemProperty); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAkSliderItemId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGuid*)Z_Param__Result=this->GetAkSliderItemId(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAkSliderItemId) \
	{ \
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_ItemId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAkSliderItemId(Z_Param_Out_ItemId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSliderHandleColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSliderHandleColor(Z_Param_InValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSliderBarColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSliderBarColor(Z_Param_InValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStepSize) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetStepSize(Z_Param_InValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLocked) \
	{ \
		P_GET_UBOOL(Z_Param_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetLocked(Z_Param_InValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIndentHandle) \
	{ \
		P_GET_UBOOL(Z_Param_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetIndentHandle(Z_Param_InValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetValue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetValue(Z_Param_InValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetValue(); \
		P_NATIVE_END; \
	}


#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_79_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkSlider(); \
	friend AKAUDIO_API class UClass* Z_Construct_UClass_UAkSlider(); \
public: \
	DECLARE_CLASS(UAkSlider, UWidget, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), 0, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkSlider) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_79_INCLASS \
private: \
	static void StaticRegisterNativesUAkSlider(); \
	friend AKAUDIO_API class UClass* Z_Construct_UClass_UAkSlider(); \
public: \
	DECLARE_CLASS(UAkSlider, UWidget, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), 0, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkSlider) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_79_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkSlider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkSlider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkSlider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkSlider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkSlider(UAkSlider&&); \
	NO_API UAkSlider(const UAkSlider&); \
public:


#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_79_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkSlider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkSlider(UAkSlider&&); \
	NO_API UAkSlider(const UAkSlider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkSlider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkSlider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkSlider)


#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_79_PRIVATE_PROPERTY_OFFSET
#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_76_PROLOG
#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_79_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_79_PRIVATE_PROPERTY_OFFSET \
	UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_79_RPC_WRAPPERS \
	UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_79_INCLASS \
	UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_79_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_79_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_79_PRIVATE_PROPERTY_OFFSET \
	UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_79_INCLASS_NO_PURE_DECLS \
	UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_79_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkSlider."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
