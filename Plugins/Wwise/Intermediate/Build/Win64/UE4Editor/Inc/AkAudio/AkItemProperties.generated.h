// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAkPropertyToControl;
#ifdef AKAUDIO_AkItemProperties_generated_h
#error "AkItemProperties.generated.h already included, missing '#pragma once' in AkItemProperties.h"
#endif
#define AKAUDIO_AkItemProperties_generated_h

#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_30_GENERATED_BODY \
	friend AKAUDIO_API class UScriptStruct* Z_Construct_UScriptStruct_FAkPropertyToControl(); \
	static class UScriptStruct* StaticStruct();


#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_18_DELEGATE \
struct _Script_AkAudio_eventOnItemPropertyDragDetected_Parms \
{ \
	FString PropertyDragged; \
}; \
static inline void FOnItemPropertyDragDetected_DelegateWrapper(const FMulticastScriptDelegate& OnItemPropertyDragDetected, const FString& PropertyDragged) \
{ \
	_Script_AkAudio_eventOnItemPropertyDragDetected_Parms Parms; \
	Parms.PropertyDragged=PropertyDragged; \
	OnItemPropertyDragDetected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_15_DELEGATE \
struct _Script_AkAudio_eventOnItemPropertySelectionChanged_Parms \
{ \
	FString PropertySelected; \
}; \
static inline void FOnItemPropertySelectionChanged_DelegateWrapper(const FMulticastScriptDelegate& OnItemPropertySelectionChanged, const FString& PropertySelected) \
{ \
	_Script_AkAudio_eventOnItemPropertySelectionChanged_Parms Parms; \
	Parms.PropertySelected=PropertySelected; \
	OnItemPropertySelectionChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_46_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConv_FAkPropertyToControlToText) \
	{ \
		P_GET_STRUCT_REF(FAkPropertyToControl,Z_Param_Out_INAkPropertyToControl); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UAkItemPropertiesConv::Conv_FAkPropertyToControlToText(Z_Param_Out_INAkPropertyToControl); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_FAkPropertyToControlToString) \
	{ \
		P_GET_STRUCT_REF(FAkPropertyToControl,Z_Param_Out_INAkPropertyToControl); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UAkItemPropertiesConv::Conv_FAkPropertyToControlToString(Z_Param_Out_INAkPropertyToControl); \
		P_NATIVE_END; \
	}


#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConv_FAkPropertyToControlToText) \
	{ \
		P_GET_STRUCT_REF(FAkPropertyToControl,Z_Param_Out_INAkPropertyToControl); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UAkItemPropertiesConv::Conv_FAkPropertyToControlToText(Z_Param_Out_INAkPropertyToControl); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_FAkPropertyToControlToString) \
	{ \
		P_GET_STRUCT_REF(FAkPropertyToControl,Z_Param_Out_INAkPropertyToControl); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UAkItemPropertiesConv::Conv_FAkPropertyToControlToString(Z_Param_Out_INAkPropertyToControl); \
		P_NATIVE_END; \
	}


#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkItemPropertiesConv(); \
	friend AKAUDIO_API class UClass* Z_Construct_UClass_UAkItemPropertiesConv(); \
public: \
	DECLARE_CLASS(UAkItemPropertiesConv, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkItemPropertiesConv) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUAkItemPropertiesConv(); \
	friend AKAUDIO_API class UClass* Z_Construct_UClass_UAkItemPropertiesConv(); \
public: \
	DECLARE_CLASS(UAkItemPropertiesConv, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkItemPropertiesConv) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkItemPropertiesConv(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkItemPropertiesConv) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkItemPropertiesConv); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkItemPropertiesConv); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkItemPropertiesConv(UAkItemPropertiesConv&&); \
	NO_API UAkItemPropertiesConv(const UAkItemPropertiesConv&); \
public:


#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkItemPropertiesConv(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkItemPropertiesConv(UAkItemPropertiesConv&&); \
	NO_API UAkItemPropertiesConv(const UAkItemPropertiesConv&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkItemPropertiesConv); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkItemPropertiesConv); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkItemPropertiesConv)


#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_46_PRIVATE_PROPERTY_OFFSET
#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_43_PROLOG
#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_46_PRIVATE_PROPERTY_OFFSET \
	UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_46_RPC_WRAPPERS \
	UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_46_INCLASS \
	UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_46_PRIVATE_PROPERTY_OFFSET \
	UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_46_INCLASS_NO_PURE_DECLS \
	UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_46_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkItemPropertiesConv."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_67_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSearchText) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_newText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSearchText(Z_Param_newText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSearchText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetSearchText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedProperty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetSelectedProperty(); \
		P_NATIVE_END; \
	}


#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSearchText) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_newText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSearchText(Z_Param_newText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSearchText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetSearchText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedProperty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetSelectedProperty(); \
		P_NATIVE_END; \
	}


#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkItemProperties(); \
	friend AKAUDIO_API class UClass* Z_Construct_UClass_UAkItemProperties(); \
public: \
	DECLARE_CLASS(UAkItemProperties, UWidget, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), 0, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkItemProperties) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_67_INCLASS \
private: \
	static void StaticRegisterNativesUAkItemProperties(); \
	friend AKAUDIO_API class UClass* Z_Construct_UClass_UAkItemProperties(); \
public: \
	DECLARE_CLASS(UAkItemProperties, UWidget, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), 0, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkItemProperties) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_67_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkItemProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkItemProperties) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkItemProperties); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkItemProperties); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkItemProperties(UAkItemProperties&&); \
	NO_API UAkItemProperties(const UAkItemProperties&); \
public:


#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_67_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkItemProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkItemProperties(UAkItemProperties&&); \
	NO_API UAkItemProperties(const UAkItemProperties&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkItemProperties); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkItemProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkItemProperties)


#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_67_PRIVATE_PROPERTY_OFFSET
#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_64_PROLOG
#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_67_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_67_PRIVATE_PROPERTY_OFFSET \
	UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_67_RPC_WRAPPERS \
	UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_67_INCLASS \
	UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_67_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_67_PRIVATE_PROPERTY_OFFSET \
	UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_67_INCLASS_NO_PURE_DECLS \
	UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_67_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkItemProperties."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
