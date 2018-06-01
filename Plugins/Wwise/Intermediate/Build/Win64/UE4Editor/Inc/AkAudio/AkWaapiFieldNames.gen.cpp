// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkAudioDevice.h"
#include "Classes/AkWaapiBlueprints/AkWaapiFieldNames.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkWaapiFieldNames() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWaapiFieldNames();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UFunction* Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString();
	AKAUDIO_API UClass* Z_Construct_UClass_USAkWaapiFieldNamesConv();
	AKAUDIO_API UFunction* Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText();
	AKAUDIO_API UClass* Z_Construct_UClass_USAkWaapiFieldNamesConv_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
class UScriptStruct* FAkWaapiFieldNames::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkWaapiFieldNames_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkWaapiFieldNames, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkWaapiFieldNames"), sizeof(FAkWaapiFieldNames), Get_Z_Construct_UScriptStruct_FAkWaapiFieldNames_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkWaapiFieldNames(FAkWaapiFieldNames::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkWaapiFieldNames"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkWaapiFieldNames
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkWaapiFieldNames()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkWaapiFieldNames")),new UScriptStruct::TCppStructOps<FAkWaapiFieldNames>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkWaapiFieldNames;
	UScriptStruct* Z_Construct_UScriptStruct_FAkWaapiFieldNames()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		extern uint32 Get_Z_Construct_UScriptStruct_FAkWaapiFieldNames_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkWaapiFieldNames"), sizeof(FAkWaapiFieldNames), Get_Z_Construct_UScriptStruct_FAkWaapiFieldNames_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AkWaapiFieldNames"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FAkWaapiFieldNames>, EStructFlags(0x00000201));
			UProperty* NewProp_FieldName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("FieldName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(FieldName, FAkWaapiFieldNames), 0x0010000000020015);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiBlueprints/AkWaapiFieldNames.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Structure for Field Names"));
			MetaData->SetValue(NewProp_FieldName, TEXT("Category"), TEXT("FieldName"));
			MetaData->SetValue(NewProp_FieldName, TEXT("DisplayName"), TEXT("Field Name"));
			MetaData->SetValue(NewProp_FieldName, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiBlueprints/AkWaapiFieldNames.h"));
			MetaData->SetValue(NewProp_FieldName, TEXT("ToolTip"), TEXT("The Field Name"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkWaapiFieldNames_CRC() { return 885008413U; }
	void USAkWaapiFieldNamesConv::StaticRegisterNativesUSAkWaapiFieldNamesConv()
	{
		UClass* Class = USAkWaapiFieldNamesConv::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "Conv_FAkWaapiFieldNamesToString", (Native)&USAkWaapiFieldNamesConv::execConv_FAkWaapiFieldNamesToString },
			{ "Conv_FAkWaapiFieldNamesToText", (Native)&USAkWaapiFieldNamesConv::execConv_FAkWaapiFieldNamesToText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString()
	{
		struct SAkWaapiFieldNamesConv_eventConv_FAkWaapiFieldNamesToString_Parms
		{
			FAkWaapiFieldNames INAkWaapiFieldNames;
			FString ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_USAkWaapiFieldNamesConv();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Conv_FAkWaapiFieldNamesToString"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14422401, 65535, sizeof(SAkWaapiFieldNamesConv_eventConv_FAkWaapiFieldNamesToString_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReturnValue, SAkWaapiFieldNamesConv_eventConv_FAkWaapiFieldNamesToString_Parms), 0x0010000000000580);
			UProperty* NewProp_INAkWaapiFieldNames = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("INAkWaapiFieldNames"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(INAkWaapiFieldNames, SAkWaapiFieldNamesConv_eventConv_FAkWaapiFieldNamesToString_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FAkWaapiFieldNames());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("BlueprintAutocast"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Utilities|String"));
			MetaData->SetValue(ReturnFunction, TEXT("CompactNodeTitle"), TEXT("->"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("ToString (FAkWaapiFieldNames)"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiBlueprints/AkWaapiFieldNames.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Converts an AkWaapiFieldName value to a string"));
			MetaData->SetValue(NewProp_INAkWaapiFieldNames, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText()
	{
		struct SAkWaapiFieldNamesConv_eventConv_FAkWaapiFieldNamesToText_Parms
		{
			FAkWaapiFieldNames INAkWaapiFieldNames;
			FText ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_USAkWaapiFieldNamesConv();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Conv_FAkWaapiFieldNamesToText"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14422401, 65535, sizeof(SAkWaapiFieldNamesConv_eventConv_FAkWaapiFieldNamesToText_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UTextProperty(CPP_PROPERTY_BASE(ReturnValue, SAkWaapiFieldNamesConv_eventConv_FAkWaapiFieldNamesToText_Parms), 0x0010000000000580);
			UProperty* NewProp_INAkWaapiFieldNames = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("INAkWaapiFieldNames"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(INAkWaapiFieldNames, SAkWaapiFieldNamesConv_eventConv_FAkWaapiFieldNamesToText_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FAkWaapiFieldNames());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("BlueprintAutocast"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Utilities|Text"));
			MetaData->SetValue(ReturnFunction, TEXT("CompactNodeTitle"), TEXT("->"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("ToText (FAkWaapiFieldNames)"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiBlueprints/AkWaapiFieldNames.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Converts an AkWaapiFieldName value to a localizable text"));
			MetaData->SetValue(NewProp_INAkWaapiFieldNames, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USAkWaapiFieldNamesConv_NoRegister()
	{
		return USAkWaapiFieldNamesConv::StaticClass();
	}
	UClass* Z_Construct_UClass_USAkWaapiFieldNamesConv()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_AkAudio();
			OuterClass = USAkWaapiFieldNamesConv::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;

				OuterClass->LinkChild(Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString());
				OuterClass->LinkChild(Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString(), "Conv_FAkWaapiFieldNamesToString"); // 3765102692
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText(), "Conv_FAkWaapiFieldNamesToText"); // 4021151331
				static TCppClassTypeInfo<TCppClassTypeTraits<USAkWaapiFieldNamesConv> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AkWaapiBlueprints/AkWaapiFieldNames.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiBlueprints/AkWaapiFieldNames.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("USAkWaapiFieldNamesConv"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USAkWaapiFieldNamesConv, 598425439);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USAkWaapiFieldNamesConv(Z_Construct_UClass_USAkWaapiFieldNamesConv, &USAkWaapiFieldNamesConv::StaticClass, TEXT("/Script/AkAudio"), TEXT("USAkWaapiFieldNamesConv"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USAkWaapiFieldNamesConv);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
