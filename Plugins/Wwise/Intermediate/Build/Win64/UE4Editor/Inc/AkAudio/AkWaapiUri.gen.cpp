// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkAudioDevice.h"
#include "Classes/AkWaapiBlueprints/AkWaapiUri.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkWaapiUri() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWaapiUri();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToString();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkWaapiUriConv();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToText();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkWaapiUriConv_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
class UScriptStruct* FAkWaapiUri::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkWaapiUri_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkWaapiUri, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkWaapiUri"), sizeof(FAkWaapiUri), Get_Z_Construct_UScriptStruct_FAkWaapiUri_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkWaapiUri(FAkWaapiUri::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkWaapiUri"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkWaapiUri
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkWaapiUri()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkWaapiUri")),new UScriptStruct::TCppStructOps<FAkWaapiUri>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkWaapiUri;
	UScriptStruct* Z_Construct_UScriptStruct_FAkWaapiUri()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		extern uint32 Get_Z_Construct_UScriptStruct_FAkWaapiUri_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkWaapiUri"), sizeof(FAkWaapiUri), Get_Z_Construct_UScriptStruct_FAkWaapiUri_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AkWaapiUri"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FAkWaapiUri>, EStructFlags(0x00000201));
			UProperty* NewProp_Uri = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Uri"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Uri, FAkWaapiUri), 0x0010000000020015);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiBlueprints/AkWaapiUri.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Structure for Uri"));
			MetaData->SetValue(NewProp_Uri, TEXT("Category"), TEXT("Uri"));
			MetaData->SetValue(NewProp_Uri, TEXT("DisplayName"), TEXT("Uri"));
			MetaData->SetValue(NewProp_Uri, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiBlueprints/AkWaapiUri.h"));
			MetaData->SetValue(NewProp_Uri, TEXT("ToolTip"), TEXT("The Uri"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkWaapiUri_CRC() { return 2635362186U; }
	void UAkWaapiUriConv::StaticRegisterNativesUAkWaapiUriConv()
	{
		UClass* Class = UAkWaapiUriConv::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "Conv_FAkWaapiUriToString", (Native)&UAkWaapiUriConv::execConv_FAkWaapiUriToString },
			{ "Conv_FAkWaapiUriToText", (Native)&UAkWaapiUriConv::execConv_FAkWaapiUriToText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToString()
	{
		struct AkWaapiUriConv_eventConv_FAkWaapiUriToString_Parms
		{
			FAkWaapiUri INAkWaapiUri;
			FString ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkWaapiUriConv();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Conv_FAkWaapiUriToString"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14422401, 65535, sizeof(AkWaapiUriConv_eventConv_FAkWaapiUriToString_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReturnValue, AkWaapiUriConv_eventConv_FAkWaapiUriToString_Parms), 0x0010000000000580);
			UProperty* NewProp_INAkWaapiUri = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("INAkWaapiUri"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(INAkWaapiUri, AkWaapiUriConv_eventConv_FAkWaapiUriToString_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FAkWaapiUri());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("BlueprintAutocast"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Utilities|String"));
			MetaData->SetValue(ReturnFunction, TEXT("CompactNodeTitle"), TEXT("->"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("ToString (FAkWaapiUri)"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiBlueprints/AkWaapiUri.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Converts an AkWaapiUri value to a string"));
			MetaData->SetValue(NewProp_INAkWaapiUri, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToText()
	{
		struct AkWaapiUriConv_eventConv_FAkWaapiUriToText_Parms
		{
			FAkWaapiUri INAkWaapiUri;
			FText ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkWaapiUriConv();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Conv_FAkWaapiUriToText"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14422401, 65535, sizeof(AkWaapiUriConv_eventConv_FAkWaapiUriToText_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UTextProperty(CPP_PROPERTY_BASE(ReturnValue, AkWaapiUriConv_eventConv_FAkWaapiUriToText_Parms), 0x0010000000000580);
			UProperty* NewProp_INAkWaapiUri = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("INAkWaapiUri"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(INAkWaapiUri, AkWaapiUriConv_eventConv_FAkWaapiUriToText_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FAkWaapiUri());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("BlueprintAutocast"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Utilities|Text"));
			MetaData->SetValue(ReturnFunction, TEXT("CompactNodeTitle"), TEXT("->"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("ToText (FAkWaapiUri)"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiBlueprints/AkWaapiUri.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Converts an AkWaapiUri value to a localizable text"));
			MetaData->SetValue(NewProp_INAkWaapiUri, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkWaapiUriConv_NoRegister()
	{
		return UAkWaapiUriConv::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkWaapiUriConv()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_AkAudio();
			OuterClass = UAkWaapiUriConv::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToString());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToText());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToString(), "Conv_FAkWaapiUriToString"); // 1281302779
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToText(), "Conv_FAkWaapiUriToText"); // 1034132877
				static TCppClassTypeInfo<TCppClassTypeTraits<UAkWaapiUriConv> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AkWaapiBlueprints/AkWaapiUri.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiBlueprints/AkWaapiUri.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("UAkWaapiUriConv"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkWaapiUriConv, 1272148452);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkWaapiUriConv(Z_Construct_UClass_UAkWaapiUriConv, &UAkWaapiUriConv::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkWaapiUriConv"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkWaapiUriConv);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
