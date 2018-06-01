// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkAudioDevice.h"
#include "Classes/AkWaapiBlueprints/AkWaapiJsonManager.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkWaapiJsonManager() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAKWaapiJsonObject();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkWaapiJsonManager();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWaapiFieldNames();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkWaapiJsonManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
class UScriptStruct* FAKWaapiJsonObject::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAKWaapiJsonObject_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAKWaapiJsonObject, Z_Construct_UPackage__Script_AkAudio(), TEXT("AKWaapiJsonObject"), sizeof(FAKWaapiJsonObject), Get_Z_Construct_UScriptStruct_FAKWaapiJsonObject_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAKWaapiJsonObject(FAKWaapiJsonObject::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AKWaapiJsonObject"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAKWaapiJsonObject
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAKWaapiJsonObject()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AKWaapiJsonObject")),new UScriptStruct::TCppStructOps<FAKWaapiJsonObject>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAKWaapiJsonObject;
	UScriptStruct* Z_Construct_UScriptStruct_FAKWaapiJsonObject()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		extern uint32 Get_Z_Construct_UScriptStruct_FAKWaapiJsonObject_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AKWaapiJsonObject"), sizeof(FAKWaapiJsonObject), Get_Z_Construct_UScriptStruct_FAKWaapiJsonObject_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AKWaapiJsonObject"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FAKWaapiJsonObject>, EStructFlags(0x00000201));
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiBlueprints/AkWaapiJsonManager.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAKWaapiJsonObject_CRC() { return 2555871345U; }
	void UAkWaapiJsonManager::StaticRegisterNativesUAkWaapiJsonManager()
	{
		UClass* Class = UAkWaapiJsonManager::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "Conv_FAKWaapiJsonObjectToString", (Native)&UAkWaapiJsonManager::execConv_FAKWaapiJsonObjectToString },
			{ "Conv_FAKWaapiJsonObjectToText", (Native)&UAkWaapiJsonManager::execConv_FAKWaapiJsonObjectToText },
			{ "GetArrayField", (Native)&UAkWaapiJsonManager::execGetArrayField },
			{ "GetBoolField", (Native)&UAkWaapiJsonManager::execGetBoolField },
			{ "GetIntegerField", (Native)&UAkWaapiJsonManager::execGetIntegerField },
			{ "GetNumberField", (Native)&UAkWaapiJsonManager::execGetNumberField },
			{ "GetObjectField", (Native)&UAkWaapiJsonManager::execGetObjectField },
			{ "GetStringField", (Native)&UAkWaapiJsonManager::execGetStringField },
			{ "SetArrayObjectFields", (Native)&UAkWaapiJsonManager::execSetArrayObjectFields },
			{ "SetArrayStringFields", (Native)&UAkWaapiJsonManager::execSetArrayStringFields },
			{ "SetBoolField", (Native)&UAkWaapiJsonManager::execSetBoolField },
			{ "SetNumberField", (Native)&UAkWaapiJsonManager::execSetNumberField },
			{ "SetObjectField", (Native)&UAkWaapiJsonManager::execSetObjectField },
			{ "SetStringField", (Native)&UAkWaapiJsonManager::execSetStringField },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString()
	{
		struct AkWaapiJsonManager_eventConv_FAKWaapiJsonObjectToString_Parms
		{
			FAKWaapiJsonObject INAKWaapiJsonObject;
			FString ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkWaapiJsonManager();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Conv_FAKWaapiJsonObjectToString"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14022401, 65535, sizeof(AkWaapiJsonManager_eventConv_FAKWaapiJsonObjectToString_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReturnValue, AkWaapiJsonManager_eventConv_FAKWaapiJsonObjectToString_Parms), 0x0010000000000580);
			UProperty* NewProp_INAKWaapiJsonObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("INAKWaapiJsonObject"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(INAKWaapiJsonObject, AkWaapiJsonManager_eventConv_FAKWaapiJsonObjectToString_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FAKWaapiJsonObject());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("BlueprintAutocast"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Utilities|String"));
			MetaData->SetValue(ReturnFunction, TEXT("CompactNodeTitle"), TEXT("->"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("ToString (FAKWaapiJsonObject)"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiBlueprints/AkWaapiJsonManager.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Converts an AKWaapiJsonObject value to a string"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText()
	{
		struct AkWaapiJsonManager_eventConv_FAKWaapiJsonObjectToText_Parms
		{
			FAKWaapiJsonObject INAKWaapiJsonObject;
			FText ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkWaapiJsonManager();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Conv_FAKWaapiJsonObjectToText"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14022401, 65535, sizeof(AkWaapiJsonManager_eventConv_FAKWaapiJsonObjectToText_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UTextProperty(CPP_PROPERTY_BASE(ReturnValue, AkWaapiJsonManager_eventConv_FAKWaapiJsonObjectToText_Parms), 0x0010000000000580);
			UProperty* NewProp_INAKWaapiJsonObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("INAKWaapiJsonObject"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(INAKWaapiJsonObject, AkWaapiJsonManager_eventConv_FAKWaapiJsonObjectToText_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FAKWaapiJsonObject());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("BlueprintAutocast"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Utilities|Text"));
			MetaData->SetValue(ReturnFunction, TEXT("CompactNodeTitle"), TEXT("->"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("ToText (FAKWaapiJsonObject)"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiBlueprints/AkWaapiJsonManager.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Converts an AKWaapiJsonObject value to a localizable text"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField()
	{
		struct AkWaapiJsonManager_eventGetArrayField_Parms
		{
			FAkWaapiFieldNames FieldName;
			FAKWaapiJsonObject target;
			TArray<FAKWaapiJsonObject> ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkWaapiJsonManager();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetArrayField"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(AkWaapiJsonManager_eventGetArrayField_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ReturnValue, AkWaapiJsonManager_eventGetArrayField_Parms), 0x0010000000000582);
			UProperty* NewProp_ReturnValue_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ReturnValue, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FAKWaapiJsonObject());
			UProperty* NewProp_target = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("target"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(target, AkWaapiJsonManager_eventGetArrayField_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FAKWaapiJsonObject());
			UProperty* NewProp_FieldName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FieldName"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(FieldName, AkWaapiJsonManager_eventGetArrayField_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FAkWaapiFieldNames());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|WaapiJsonManager"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiBlueprints/AkWaapiJsonManager.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get the field named FieldName as an array."));
			MetaData->SetValue(NewProp_ReturnValue, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_FieldName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField()
	{
		struct AkWaapiJsonManager_eventGetBoolField_Parms
		{
			FAkWaapiFieldNames FieldName;
			FAKWaapiJsonObject target;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkWaapiJsonManager();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetBoolField"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(AkWaapiJsonManager_eventGetBoolField_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, AkWaapiJsonManager_eventGetBoolField_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, AkWaapiJsonManager_eventGetBoolField_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, AkWaapiJsonManager_eventGetBoolField_Parms), sizeof(bool), true);
			UProperty* NewProp_target = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("target"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(target, AkWaapiJsonManager_eventGetBoolField_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FAKWaapiJsonObject());
			UProperty* NewProp_FieldName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FieldName"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(FieldName, AkWaapiJsonManager_eventGetBoolField_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FAkWaapiFieldNames());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|WaapiJsonManager"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiBlueprints/AkWaapiJsonManager.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Gets the field with the specified name as a boolean."));
			MetaData->SetValue(NewProp_FieldName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField()
	{
		struct AkWaapiJsonManager_eventGetIntegerField_Parms
		{
			FAkWaapiFieldNames FieldName;
			FAKWaapiJsonObject target;
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkWaapiJsonManager();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetIntegerField"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(AkWaapiJsonManager_eventGetIntegerField_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, AkWaapiJsonManager_eventGetIntegerField_Parms), 0x0010000000000580);
			UProperty* NewProp_target = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("target"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(target, AkWaapiJsonManager_eventGetIntegerField_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FAKWaapiJsonObject());
			UProperty* NewProp_FieldName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FieldName"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(FieldName, AkWaapiJsonManager_eventGetIntegerField_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FAkWaapiFieldNames());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|WaapiJsonManager"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiBlueprints/AkWaapiJsonManager.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Gets a numeric field and casts to an int32"));
			MetaData->SetValue(NewProp_FieldName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField()
	{
		struct AkWaapiJsonManager_eventGetNumberField_Parms
		{
			FAkWaapiFieldNames FieldName;
			FAKWaapiJsonObject target;
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkWaapiJsonManager();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetNumberField"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(AkWaapiJsonManager_eventGetNumberField_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, AkWaapiJsonManager_eventGetNumberField_Parms), 0x0010000000000580);
			UProperty* NewProp_target = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("target"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(target, AkWaapiJsonManager_eventGetNumberField_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FAKWaapiJsonObject());
			UProperty* NewProp_FieldName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FieldName"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(FieldName, AkWaapiJsonManager_eventGetNumberField_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FAkWaapiFieldNames());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|WaapiJsonManager"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiBlueprints/AkWaapiJsonManager.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Gets the field with the specified name as a number."));
			MetaData->SetValue(NewProp_FieldName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField()
	{
		struct AkWaapiJsonManager_eventGetObjectField_Parms
		{
			FAkWaapiFieldNames FieldName;
			FAKWaapiJsonObject target;
			FAKWaapiJsonObject ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkWaapiJsonManager();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetObjectField"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(AkWaapiJsonManager_eventGetObjectField_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, AkWaapiJsonManager_eventGetObjectField_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FAKWaapiJsonObject());
			UProperty* NewProp_target = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("target"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(target, AkWaapiJsonManager_eventGetObjectField_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FAKWaapiJsonObject());
			UProperty* NewProp_FieldName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FieldName"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(FieldName, AkWaapiJsonManager_eventGetObjectField_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FAkWaapiFieldNames());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|WaapiJsonManager"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiBlueprints/AkWaapiJsonManager.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Gets the field with the specified name as a Json object."));
			MetaData->SetValue(NewProp_FieldName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField()
	{
		struct AkWaapiJsonManager_eventGetStringField_Parms
		{
			FAkWaapiFieldNames FieldName;
			FAKWaapiJsonObject target;
			FString ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkWaapiJsonManager();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetStringField"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(AkWaapiJsonManager_eventGetStringField_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReturnValue, AkWaapiJsonManager_eventGetStringField_Parms), 0x0010000000000580);
			UProperty* NewProp_target = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("target"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(target, AkWaapiJsonManager_eventGetStringField_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FAKWaapiJsonObject());
			UProperty* NewProp_FieldName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FieldName"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(FieldName, AkWaapiJsonManager_eventGetStringField_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FAkWaapiFieldNames());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|WaapiJsonManager"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiBlueprints/AkWaapiJsonManager.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get the field named FieldName as a string."));
			MetaData->SetValue(NewProp_FieldName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields()
	{
		struct AkWaapiJsonManager_eventSetArrayObjectFields_Parms
		{
			FAkWaapiFieldNames FieldName;
			TArray<FAKWaapiJsonObject> FieldObjectValues;
			FAKWaapiJsonObject target;
			FAKWaapiJsonObject ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkWaapiJsonManager();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetArrayObjectFields"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(AkWaapiJsonManager_eventSetArrayObjectFields_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, AkWaapiJsonManager_eventSetArrayObjectFields_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FAKWaapiJsonObject());
			UProperty* NewProp_target = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("target"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(target, AkWaapiJsonManager_eventSetArrayObjectFields_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FAKWaapiJsonObject());
			UProperty* NewProp_FieldObjectValues = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FieldObjectValues"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(FieldObjectValues, AkWaapiJsonManager_eventSetArrayObjectFields_Parms), 0x0010000008000182);
			UProperty* NewProp_FieldObjectValues_Inner = new(EC_InternalUseOnlyConstructor, NewProp_FieldObjectValues, TEXT("FieldObjectValues"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FAKWaapiJsonObject());
			UProperty* NewProp_FieldName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FieldName"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(FieldName, AkWaapiJsonManager_eventSetArrayObjectFields_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FAkWaapiFieldNames());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|WaapiJsonManager"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiBlueprints/AkWaapiJsonManager.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set an array of ObjectField named FieldName and value of FieldObjectValues"));
			MetaData->SetValue(NewProp_FieldObjectValues, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_FieldName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields()
	{
		struct AkWaapiJsonManager_eventSetArrayStringFields_Parms
		{
			FAkWaapiFieldNames FieldName;
			TArray<FString> FieldStringValues;
			FAKWaapiJsonObject target;
			FAKWaapiJsonObject ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkWaapiJsonManager();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetArrayStringFields"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(AkWaapiJsonManager_eventSetArrayStringFields_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, AkWaapiJsonManager_eventSetArrayStringFields_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FAKWaapiJsonObject());
			UProperty* NewProp_target = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("target"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(target, AkWaapiJsonManager_eventSetArrayStringFields_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FAKWaapiJsonObject());
			UProperty* NewProp_FieldStringValues = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FieldStringValues"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(FieldStringValues, AkWaapiJsonManager_eventSetArrayStringFields_Parms), 0x0010000008000182);
			UProperty* NewProp_FieldStringValues_Inner = new(EC_InternalUseOnlyConstructor, NewProp_FieldStringValues, TEXT("FieldStringValues"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_FieldName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FieldName"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(FieldName, AkWaapiJsonManager_eventSetArrayStringFields_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FAkWaapiFieldNames());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|WaapiJsonManager"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiBlueprints/AkWaapiJsonManager.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Add an array of String field named FieldName with value of FieldStringValues"));
			MetaData->SetValue(NewProp_FieldStringValues, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_FieldName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField()
	{
		struct AkWaapiJsonManager_eventSetBoolField_Parms
		{
			FAkWaapiFieldNames FieldName;
			bool FieldValue;
			FAKWaapiJsonObject target;
			FAKWaapiJsonObject ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkWaapiJsonManager();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetBoolField"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(AkWaapiJsonManager_eventSetBoolField_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, AkWaapiJsonManager_eventSetBoolField_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FAKWaapiJsonObject());
			UProperty* NewProp_target = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("target"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(target, AkWaapiJsonManager_eventSetBoolField_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FAKWaapiJsonObject());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(FieldValue, AkWaapiJsonManager_eventSetBoolField_Parms);
			UProperty* NewProp_FieldValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FieldValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(FieldValue, AkWaapiJsonManager_eventSetBoolField_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(FieldValue, AkWaapiJsonManager_eventSetBoolField_Parms), sizeof(bool), true);
			UProperty* NewProp_FieldName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FieldName"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(FieldName, AkWaapiJsonManager_eventSetBoolField_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FAkWaapiFieldNames());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|WaapiJsonManager"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiBlueprints/AkWaapiJsonManager.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set a boolean field named FieldName and value of FieldValue"));
			MetaData->SetValue(NewProp_FieldName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField()
	{
		struct AkWaapiJsonManager_eventSetNumberField_Parms
		{
			FAkWaapiFieldNames FieldName;
			float FieldValue;
			FAKWaapiJsonObject target;
			FAKWaapiJsonObject ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkWaapiJsonManager();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetNumberField"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(AkWaapiJsonManager_eventSetNumberField_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, AkWaapiJsonManager_eventSetNumberField_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FAKWaapiJsonObject());
			UProperty* NewProp_target = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("target"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(target, AkWaapiJsonManager_eventSetNumberField_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FAKWaapiJsonObject());
			UProperty* NewProp_FieldValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FieldValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FieldValue, AkWaapiJsonManager_eventSetNumberField_Parms), 0x0010000000000080);
			UProperty* NewProp_FieldName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FieldName"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(FieldName, AkWaapiJsonManager_eventSetNumberField_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FAkWaapiFieldNames());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|WaapiJsonManager"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiBlueprints/AkWaapiJsonManager.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Add a field named FieldName with Number as FieldValue"));
			MetaData->SetValue(NewProp_FieldName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField()
	{
		struct AkWaapiJsonManager_eventSetObjectField_Parms
		{
			FAkWaapiFieldNames FieldName;
			FAKWaapiJsonObject FieldValue;
			FAKWaapiJsonObject target;
			FAKWaapiJsonObject ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkWaapiJsonManager();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetObjectField"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(AkWaapiJsonManager_eventSetObjectField_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, AkWaapiJsonManager_eventSetObjectField_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FAKWaapiJsonObject());
			UProperty* NewProp_target = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("target"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(target, AkWaapiJsonManager_eventSetObjectField_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FAKWaapiJsonObject());
			UProperty* NewProp_FieldValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FieldValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(FieldValue, AkWaapiJsonManager_eventSetObjectField_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FAKWaapiJsonObject());
			UProperty* NewProp_FieldName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FieldName"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(FieldName, AkWaapiJsonManager_eventSetObjectField_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FAkWaapiFieldNames());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|WaapiJsonManager"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiBlueprints/AkWaapiJsonManager.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set an ObjectField named FieldName and value of FieldValue"));
			MetaData->SetValue(NewProp_FieldName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField()
	{
		struct AkWaapiJsonManager_eventSetStringField_Parms
		{
			FAkWaapiFieldNames FieldName;
			FString FieldValue;
			FAKWaapiJsonObject target;
			FAKWaapiJsonObject ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkWaapiJsonManager();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetStringField"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(AkWaapiJsonManager_eventSetStringField_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, AkWaapiJsonManager_eventSetStringField_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FAKWaapiJsonObject());
			UProperty* NewProp_target = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("target"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(target, AkWaapiJsonManager_eventSetStringField_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FAKWaapiJsonObject());
			UProperty* NewProp_FieldValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FieldValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(FieldValue, AkWaapiJsonManager_eventSetStringField_Parms), 0x0010000000000080);
			UProperty* NewProp_FieldName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FieldName"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(FieldName, AkWaapiJsonManager_eventSetStringField_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FAkWaapiFieldNames());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|WaapiJsonManager"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiBlueprints/AkWaapiJsonManager.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Add a String field named FieldName with value of FieldValue"));
			MetaData->SetValue(NewProp_FieldValue, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_FieldName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkWaapiJsonManager_NoRegister()
	{
		return UAkWaapiJsonManager::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkWaapiJsonManager()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_AkAudio();
			OuterClass = UAkWaapiJsonManager::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString(), "Conv_FAKWaapiJsonObjectToString"); // 4125385308
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText(), "Conv_FAKWaapiJsonObjectToText"); // 202898700
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField(), "GetArrayField"); // 190969473
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField(), "GetBoolField"); // 508360876
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField(), "GetIntegerField"); // 2098468884
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField(), "GetNumberField"); // 1130081512
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField(), "GetObjectField"); // 3949520837
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField(), "GetStringField"); // 2286821627
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields(), "SetArrayObjectFields"); // 723604763
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields(), "SetArrayStringFields"); // 963488746
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField(), "SetBoolField"); // 222111611
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField(), "SetNumberField"); // 1556576447
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField(), "SetObjectField"); // 3374507747
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField(), "SetStringField"); // 802640297
				static TCppClassTypeInfo<TCppClassTypeTraits<UAkWaapiJsonManager> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AkWaapiBlueprints/AkWaapiJsonManager.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiBlueprints/AkWaapiJsonManager.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkWaapiJsonManager, 3520273963);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkWaapiJsonManager(Z_Construct_UClass_UAkWaapiJsonManager, &UAkWaapiJsonManager::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkWaapiJsonManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkWaapiJsonManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
