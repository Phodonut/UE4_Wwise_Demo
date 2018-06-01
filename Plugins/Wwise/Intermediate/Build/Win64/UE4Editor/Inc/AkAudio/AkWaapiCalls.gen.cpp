// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkAudioDevice.h"
#include "Classes/AkWaapiBlueprints/AkWaapiCalls.h"
#include "Classes/Engine/World.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkWaapiCalls() {}
// Cross Module References
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnWaapiConnectionLost__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnWaapiProjectLoaded__DelegateSignature();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnEventCallback__DelegateSignature();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAKWaapiJsonObject();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWaapiSubscriptionId();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiCalls_CallWaapi();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkWaapiCalls();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWaapiUri();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiCalls_GetSubscriptionID();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiConnectionLostCallback();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiProjectLoadedCallback();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiCalls_SetSubscriptionID();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkWaapiCalls_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_AkAudio_OnWaapiConnectionLost__DelegateSignature()
	{
		UObject* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnWaapiConnectionLost__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00120000, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiBlueprints/AkWaapiCalls.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_AkAudio_OnWaapiProjectLoaded__DelegateSignature()
	{
		UObject* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnWaapiProjectLoaded__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00120000, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiBlueprints/AkWaapiCalls.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_AkAudio_OnEventCallback__DelegateSignature()
	{
		struct _Script_AkAudio_eventOnEventCallback_Parms
		{
			FAkWaapiSubscriptionId SubscriptionId;
			FAKWaapiJsonObject WaapiJsonObject;
		};
		UObject* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnEventCallback__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00120000, 65535, sizeof(_Script_AkAudio_eventOnEventCallback_Parms));
			UProperty* NewProp_WaapiJsonObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WaapiJsonObject"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(WaapiJsonObject, _Script_AkAudio_eventOnEventCallback_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FAKWaapiJsonObject());
			UProperty* NewProp_SubscriptionId = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SubscriptionId"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SubscriptionId, _Script_AkAudio_eventOnEventCallback_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FAkWaapiSubscriptionId());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiBlueprints/AkWaapiCalls.h"));
#endif
		}
		return ReturnFunction;
	}
class UScriptStruct* FAkWaapiSubscriptionId::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkWaapiSubscriptionId_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkWaapiSubscriptionId, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkWaapiSubscriptionId"), sizeof(FAkWaapiSubscriptionId), Get_Z_Construct_UScriptStruct_FAkWaapiSubscriptionId_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkWaapiSubscriptionId(FAkWaapiSubscriptionId::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkWaapiSubscriptionId"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkWaapiSubscriptionId
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkWaapiSubscriptionId()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkWaapiSubscriptionId")),new UScriptStruct::TCppStructOps<FAkWaapiSubscriptionId>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkWaapiSubscriptionId;
	UScriptStruct* Z_Construct_UScriptStruct_FAkWaapiSubscriptionId()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		extern uint32 Get_Z_Construct_UScriptStruct_FAkWaapiSubscriptionId_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkWaapiSubscriptionId"), sizeof(FAkWaapiSubscriptionId), Get_Z_Construct_UScriptStruct_FAkWaapiSubscriptionId_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AkWaapiSubscriptionId"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FAkWaapiSubscriptionId>, EStructFlags(0x00000201));
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiBlueprints/AkWaapiCalls.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Structure for Field Names"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkWaapiSubscriptionId_CRC() { return 2642162689U; }
	void UAkWaapiCalls::StaticRegisterNativesUAkWaapiCalls()
	{
		UClass* Class = UAkWaapiCalls::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "CallWaapi", (Native)&UAkWaapiCalls::execCallWaapi },
			{ "Conv_FAkWaapiSubscriptionIdToString", (Native)&UAkWaapiCalls::execConv_FAkWaapiSubscriptionIdToString },
			{ "Conv_FAkWaapiSubscriptionIdToText", (Native)&UAkWaapiCalls::execConv_FAkWaapiSubscriptionIdToText },
			{ "GetSubscriptionID", (Native)&UAkWaapiCalls::execGetSubscriptionID },
			{ "RegisterWaapiConnectionLostCallback", (Native)&UAkWaapiCalls::execRegisterWaapiConnectionLostCallback },
			{ "RegisterWaapiProjectLoadedCallback", (Native)&UAkWaapiCalls::execRegisterWaapiProjectLoadedCallback },
			{ "SetSubscriptionID", (Native)&UAkWaapiCalls::execSetSubscriptionID },
			{ "SubscribeToWaapi", (Native)&UAkWaapiCalls::execSubscribeToWaapi },
			{ "Unsubscribe", (Native)&UAkWaapiCalls::execUnsubscribe },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UAkWaapiCalls_CallWaapi()
	{
		struct AkWaapiCalls_eventCallWaapi_Parms
		{
			FAkWaapiUri WaapiUri;
			FAKWaapiJsonObject WaapiArgs;
			FAKWaapiJsonObject WaapiOptions;
			FAKWaapiJsonObject ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkWaapiCalls();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CallWaapi"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422409, 65535, sizeof(AkWaapiCalls_eventCallWaapi_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, AkWaapiCalls_eventCallWaapi_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FAKWaapiJsonObject());
			UProperty* NewProp_WaapiOptions = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WaapiOptions"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(WaapiOptions, AkWaapiCalls_eventCallWaapi_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FAKWaapiJsonObject());
			UProperty* NewProp_WaapiArgs = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WaapiArgs"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(WaapiArgs, AkWaapiCalls_eventCallWaapi_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FAKWaapiJsonObject());
			UProperty* NewProp_WaapiUri = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WaapiUri"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(WaapiUri, AkWaapiCalls_eventCallWaapi_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FAkWaapiUri());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|WaapiCalls"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiBlueprints/AkWaapiCalls.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Call Waapi and get/set information/parameters according to the uri chosen.\n\n@param WaapiUri               The     function that will be called when an event that we would be aware of happens.\n@param WaapiArgs              The arguments referenced to the in_uri function.\n@param WaapiOptions   Optional flag to get more information about the event happened.\n@return out_result    A JSON object that contains useful informations about the Call process to a specific event, gets an error infos in case the Call fails."));
			MetaData->SetValue(NewProp_WaapiOptions, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_WaapiArgs, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_WaapiUri, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString()
	{
		struct AkWaapiCalls_eventConv_FAkWaapiSubscriptionIdToString_Parms
		{
			FAkWaapiSubscriptionId INAkWaapiSubscriptionId;
			FString ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkWaapiCalls();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Conv_FAkWaapiSubscriptionIdToString"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14422401, 65535, sizeof(AkWaapiCalls_eventConv_FAkWaapiSubscriptionIdToString_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReturnValue, AkWaapiCalls_eventConv_FAkWaapiSubscriptionIdToString_Parms), 0x0010000000000580);
			UProperty* NewProp_INAkWaapiSubscriptionId = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("INAkWaapiSubscriptionId"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(INAkWaapiSubscriptionId, AkWaapiCalls_eventConv_FAkWaapiSubscriptionIdToString_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FAkWaapiSubscriptionId());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("BlueprintAutocast"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Utilities|String"));
			MetaData->SetValue(ReturnFunction, TEXT("CompactNodeTitle"), TEXT("->"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("ToString (FAkWaapiSubscriptionId)"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiBlueprints/AkWaapiCalls.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Converts an AkWaapiSubscriptionId value to a string"));
			MetaData->SetValue(NewProp_INAkWaapiSubscriptionId, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText()
	{
		struct AkWaapiCalls_eventConv_FAkWaapiSubscriptionIdToText_Parms
		{
			FAkWaapiSubscriptionId INAkWaapiSubscriptionId;
			FText ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkWaapiCalls();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Conv_FAkWaapiSubscriptionIdToText"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14422401, 65535, sizeof(AkWaapiCalls_eventConv_FAkWaapiSubscriptionIdToText_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UTextProperty(CPP_PROPERTY_BASE(ReturnValue, AkWaapiCalls_eventConv_FAkWaapiSubscriptionIdToText_Parms), 0x0010000000000580);
			UProperty* NewProp_INAkWaapiSubscriptionId = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("INAkWaapiSubscriptionId"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(INAkWaapiSubscriptionId, AkWaapiCalls_eventConv_FAkWaapiSubscriptionIdToText_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FAkWaapiSubscriptionId());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("BlueprintAutocast"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Utilities|Text"));
			MetaData->SetValue(ReturnFunction, TEXT("CompactNodeTitle"), TEXT("->"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("ToText (FAkWaapiSubscriptionId)"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiBlueprints/AkWaapiCalls.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Converts an AkWaapiSubscriptionId value to a localizable text"));
			MetaData->SetValue(NewProp_INAkWaapiSubscriptionId, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkWaapiCalls_GetSubscriptionID()
	{
		struct AkWaapiCalls_eventGetSubscriptionID_Parms
		{
			FAkWaapiSubscriptionId Subscription;
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkWaapiCalls();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetSubscriptionID"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(AkWaapiCalls_eventGetSubscriptionID_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(ReturnValue, AkWaapiCalls_eventGetSubscriptionID_Parms), 0x0010000000000580);
			UProperty* NewProp_Subscription = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Subscription"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Subscription, AkWaapiCalls_eventGetSubscriptionID_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FAkWaapiSubscriptionId());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|WaapiCalls"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiBlueprints/AkWaapiCalls.h"));
			MetaData->SetValue(NewProp_Subscription, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiConnectionLostCallback()
	{
		struct AkWaapiCalls_eventRegisterWaapiConnectionLostCallback_Parms
		{
			FScriptDelegate Callback;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkWaapiCalls();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("RegisterWaapiConnectionLostCallback"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(AkWaapiCalls_eventRegisterWaapiConnectionLostCallback_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, AkWaapiCalls_eventRegisterWaapiConnectionLostCallback_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, AkWaapiCalls_eventRegisterWaapiConnectionLostCallback_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, AkWaapiCalls_eventRegisterWaapiConnectionLostCallback_Parms), sizeof(bool), true);
			UProperty* NewProp_Callback = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Callback"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateProperty(CPP_PROPERTY_BASE(Callback, AkWaapiCalls_eventRegisterWaapiConnectionLostCallback_Parms), 0x0010000008000182, Z_Construct_UDelegateFunction_AkAudio_OnWaapiConnectionLost__DelegateSignature());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|WaapiCalls"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiBlueprints/AkWaapiCalls.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Subscribe to WAAPI connection lost event. This event will be broadcast when the WAAPI connection is lost. This should be used to clean up any resources that use WAAPI.\n\n@param Callback the event to call when the connection is lost"));
			MetaData->SetValue(NewProp_Callback, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiProjectLoadedCallback()
	{
		struct AkWaapiCalls_eventRegisterWaapiProjectLoadedCallback_Parms
		{
			FScriptDelegate Callback;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkWaapiCalls();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("RegisterWaapiProjectLoadedCallback"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(AkWaapiCalls_eventRegisterWaapiProjectLoadedCallback_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, AkWaapiCalls_eventRegisterWaapiProjectLoadedCallback_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, AkWaapiCalls_eventRegisterWaapiProjectLoadedCallback_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, AkWaapiCalls_eventRegisterWaapiProjectLoadedCallback_Parms), sizeof(bool), true);
			UProperty* NewProp_Callback = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Callback"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateProperty(CPP_PROPERTY_BASE(Callback, AkWaapiCalls_eventRegisterWaapiProjectLoadedCallback_Parms), 0x0010000008000182, Z_Construct_UDelegateFunction_AkAudio_OnWaapiProjectLoaded__DelegateSignature());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|WaapiCalls"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiBlueprints/AkWaapiCalls.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Subscribe to WAAPI project loaded event. This event will be broadcast whenever the correct Wwise project is loaded (defined by Wwise Project Path in the Wwise Plugin Settings). This should be used to initialize any resources that use WAAPI.\n\n@param Callback the event to call when a connection is established"));
			MetaData->SetValue(NewProp_Callback, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkWaapiCalls_SetSubscriptionID()
	{
		struct AkWaapiCalls_eventSetSubscriptionID_Parms
		{
			FAkWaapiSubscriptionId Subscription;
			int32 id;
		};
		UObject* Outer = Z_Construct_UClass_UAkWaapiCalls();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetSubscriptionID"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(AkWaapiCalls_eventSetSubscriptionID_Parms));
			UProperty* NewProp_id = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("id"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(id, AkWaapiCalls_eventSetSubscriptionID_Parms), 0x0010000000000080);
			UProperty* NewProp_Subscription = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Subscription"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Subscription, AkWaapiCalls_eventSetSubscriptionID_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FAkWaapiSubscriptionId());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|WaapiCalls"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiBlueprints/AkWaapiCalls.h"));
			MetaData->SetValue(NewProp_Subscription, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi()
	{
		struct AkWaapiCalls_eventSubscribeToWaapi_Parms
		{
			FAkWaapiUri WaapiUri;
			FAKWaapiJsonObject WaapiOptions;
			FScriptDelegate CallBack;
			FAkWaapiSubscriptionId SubscriptionId;
			bool SubscriptionDone;
			FAKWaapiJsonObject ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkWaapiCalls();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SubscribeToWaapi"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422409, 65535, sizeof(AkWaapiCalls_eventSubscribeToWaapi_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, AkWaapiCalls_eventSubscribeToWaapi_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FAKWaapiJsonObject());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(SubscriptionDone, AkWaapiCalls_eventSubscribeToWaapi_Parms);
			UProperty* NewProp_SubscriptionDone = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SubscriptionDone"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(SubscriptionDone, AkWaapiCalls_eventSubscribeToWaapi_Parms), 0x0010000000000180, CPP_BOOL_PROPERTY_BITMASK(SubscriptionDone, AkWaapiCalls_eventSubscribeToWaapi_Parms), sizeof(bool), true);
			UProperty* NewProp_SubscriptionId = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SubscriptionId"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SubscriptionId, AkWaapiCalls_eventSubscribeToWaapi_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FAkWaapiSubscriptionId());
			UProperty* NewProp_CallBack = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CallBack"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateProperty(CPP_PROPERTY_BASE(CallBack, AkWaapiCalls_eventSubscribeToWaapi_Parms), 0x0010000008000182, Z_Construct_UDelegateFunction_AkAudio_OnEventCallback__DelegateSignature());
			UProperty* NewProp_WaapiOptions = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WaapiOptions"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(WaapiOptions, AkWaapiCalls_eventSubscribeToWaapi_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FAKWaapiJsonObject());
			UProperty* NewProp_WaapiUri = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WaapiUri"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(WaapiUri, AkWaapiCalls_eventSubscribeToWaapi_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FAkWaapiUri());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|WaapiCalls"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiBlueprints/AkWaapiCalls.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Allows clients to subscribe to notifications according to the event.\n\n@param WaapiUri                        The reference to the event that we would be aware of when it happens.\n@param WaapiOptions            Optional flag to get more information about the event happened.\n@param in_callback             A delegate to be executed during the subscription event.\n@param out_subscriptionId      Gets the id of this subscription.\n@param out_result                      A boolean to ensure that the subscription was successfully done.\n@return                                        A JSON object that contains useful informations about the subscription process to a specific event, gets an error infos in case the subscription failed."));
			MetaData->SetValue(NewProp_CallBack, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_WaapiOptions, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_WaapiUri, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe()
	{
		struct AkWaapiCalls_eventUnsubscribe_Parms
		{
			FAkWaapiSubscriptionId SubscriptionId;
			bool UnsubscriptionDone;
			FAKWaapiJsonObject ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkWaapiCalls();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Unsubscribe"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422409, 65535, sizeof(AkWaapiCalls_eventUnsubscribe_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, AkWaapiCalls_eventUnsubscribe_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FAKWaapiJsonObject());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(UnsubscriptionDone, AkWaapiCalls_eventUnsubscribe_Parms);
			UProperty* NewProp_UnsubscriptionDone = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("UnsubscriptionDone"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(UnsubscriptionDone, AkWaapiCalls_eventUnsubscribe_Parms), 0x0010000000000180, CPP_BOOL_PROPERTY_BITMASK(UnsubscriptionDone, AkWaapiCalls_eventUnsubscribe_Parms), sizeof(bool), true);
			UProperty* NewProp_SubscriptionId = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SubscriptionId"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SubscriptionId, AkWaapiCalls_eventUnsubscribe_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FAkWaapiSubscriptionId());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|WaapiCalls"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiBlueprints/AkWaapiCalls.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Unsubscribe from an event.\n\n@param SubscriptionId      Gets the id of the current subscription to the event from which we want to be unsubscribed.\n@param UnsubscriptionDone  A boolean to ensure that the unsubscription was successfully done.\n@return                                        A JSON object that contains useful informations about the unsubscription process from a specific event, gets an error infos in case the unsubscription failed."));
			MetaData->SetValue(NewProp_SubscriptionId, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkWaapiCalls_NoRegister()
	{
		return UAkWaapiCalls::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkWaapiCalls()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_AkAudio();
			OuterClass = UAkWaapiCalls::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100082u;

				OuterClass->LinkChild(Z_Construct_UFunction_UAkWaapiCalls_CallWaapi());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkWaapiCalls_GetSubscriptionID());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiConnectionLostCallback());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiProjectLoadedCallback());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkWaapiCalls_SetSubscriptionID());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkWaapiCalls_CallWaapi(), "CallWaapi"); // 3548582794
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString(), "Conv_FAkWaapiSubscriptionIdToString"); // 2259660694
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText(), "Conv_FAkWaapiSubscriptionIdToText"); // 247120717
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkWaapiCalls_GetSubscriptionID(), "GetSubscriptionID"); // 3556163383
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiConnectionLostCallback(), "RegisterWaapiConnectionLostCallback"); // 3632499899
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiProjectLoadedCallback(), "RegisterWaapiProjectLoadedCallback"); // 3008978224
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkWaapiCalls_SetSubscriptionID(), "SetSubscriptionID"); // 1872364376
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi(), "SubscribeToWaapi"); // 1750121243
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe(), "Unsubscribe"); // 2561289764
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UAkWaapiCalls> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AkWaapiBlueprints/AkWaapiCalls.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiBlueprints/AkWaapiCalls.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkWaapiCalls, 3680937488);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkWaapiCalls(Z_Construct_UClass_UAkWaapiCalls, &UAkWaapiCalls::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkWaapiCalls"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkWaapiCalls);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
