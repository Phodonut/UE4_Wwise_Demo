// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkAudioDevice.h"
#include "Classes/AkWaapiUMG/Components/AkSlider.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSlider() {}
// Cross Module References
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnPropertyDropDetected__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemDropDetected__DelegateSignature();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_AkOnFloatValueChangedEvent__DelegateSignature();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWwiseItemToControl();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWwiseObjectDetails();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkSlider_GetAkSliderItemId();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSlider();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkSlider_GetValue();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkSlider_SetAkSliderItemId();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkSlider_SetIndentHandle();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkSlider_SetLocked();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkSlider_SetSliderBarColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkSlider_SetSliderHandleColor();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkSlider_SetStepSize();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkSlider_SetValue();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSlider_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkPropertyToControl();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EOrientation();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSliderStyle();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_AkAudio_OnPropertyDropDetected__DelegateSignature()
	{
		struct _Script_AkAudio_eventOnPropertyDropDetected_Parms
		{
			FString PropertyDropped;
		};
		UObject* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnPropertyDropDetected__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535, sizeof(_Script_AkAudio_eventOnPropertyDropDetected_Parms));
			UProperty* NewProp_PropertyDropped = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PropertyDropped"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(PropertyDropped, _Script_AkAudio_eventOnPropertyDropDetected_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkSlider.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("A delegate type invoked when a property is being dragged."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemDropDetected__DelegateSignature()
	{
		struct _Script_AkAudio_eventOnItemDropDetected_Parms
		{
			FGuid ItemDroppedID;
		};
		UObject* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnItemDropDetected__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535, sizeof(_Script_AkAudio_eventOnItemDropDetected_Parms));
			UProperty* NewProp_ItemDroppedID = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ItemDroppedID"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ItemDroppedID, _Script_AkAudio_eventOnItemDropDetected_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FGuid());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkSlider.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("A delegate type invoked when an item is being dragged."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_AkAudio_AkOnFloatValueChangedEvent__DelegateSignature()
	{
		struct _Script_AkAudio_eventAkOnFloatValueChangedEvent_Parms
		{
			float Value;
		};
		UObject* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AkOnFloatValueChangedEvent__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535, sizeof(_Script_AkAudio_eventAkOnFloatValueChangedEvent_Parms));
			UProperty* NewProp_Value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Value"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Value, _Script_AkAudio_eventAkOnFloatValueChangedEvent_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkSlider.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("A delegate type invoked when the value of the slider changes."));
#endif
		}
		return ReturnFunction;
	}
class UScriptStruct* FAkWwiseItemToControl::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkWwiseItemToControl_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkWwiseItemToControl, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkWwiseItemToControl"), sizeof(FAkWwiseItemToControl), Get_Z_Construct_UScriptStruct_FAkWwiseItemToControl_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkWwiseItemToControl(FAkWwiseItemToControl::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkWwiseItemToControl"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkWwiseItemToControl
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkWwiseItemToControl()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkWwiseItemToControl")),new UScriptStruct::TCppStructOps<FAkWwiseItemToControl>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkWwiseItemToControl;
	UScriptStruct* Z_Construct_UScriptStruct_FAkWwiseItemToControl()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		extern uint32 Get_Z_Construct_UScriptStruct_FAkWwiseItemToControl_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkWwiseItemToControl"), sizeof(FAkWwiseItemToControl), Get_Z_Construct_UScriptStruct_FAkWwiseItemToControl_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AkWwiseItemToControl"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FAkWwiseItemToControl>, EStructFlags(0x00000201));
			UProperty* NewProp_ItemPath = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ItemPath"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ItemPath, FAkWwiseItemToControl), 0x0010000000020015);
			UProperty* NewProp_ItemPicked = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ItemPicked"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ItemPicked, FAkWwiseItemToControl), 0x0010000000020001, Z_Construct_UScriptStruct_FAkWwiseObjectDetails());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkSlider.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Structure for Wwise items that are displayed in the UMG.\n//: public UObject"));
			MetaData->SetValue(NewProp_ItemPath, TEXT("Category"), TEXT("ItemPath"));
			MetaData->SetValue(NewProp_ItemPath, TEXT("DisplayName"), TEXT("Path"));
			MetaData->SetValue(NewProp_ItemPath, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkSlider.h"));
			MetaData->SetValue(NewProp_ItemPicked, TEXT("Category"), TEXT("ItemPicked"));
			MetaData->SetValue(NewProp_ItemPicked, TEXT("DisplayName"), TEXT("Name"));
			MetaData->SetValue(NewProp_ItemPicked, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkSlider.h"));
			MetaData->SetValue(NewProp_ItemPicked, TEXT("ToolTip"), TEXT("The item to control"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkWwiseItemToControl_CRC() { return 1070870420U; }
class UScriptStruct* FAkWwiseObjectDetails::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkWwiseObjectDetails_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkWwiseObjectDetails, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkWwiseObjectDetails"), sizeof(FAkWwiseObjectDetails), Get_Z_Construct_UScriptStruct_FAkWwiseObjectDetails_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkWwiseObjectDetails(FAkWwiseObjectDetails::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkWwiseObjectDetails"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkWwiseObjectDetails
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkWwiseObjectDetails()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkWwiseObjectDetails")),new UScriptStruct::TCppStructOps<FAkWwiseObjectDetails>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkWwiseObjectDetails;
	UScriptStruct* Z_Construct_UScriptStruct_FAkWwiseObjectDetails()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		extern uint32 Get_Z_Construct_UScriptStruct_FAkWwiseObjectDetails_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkWwiseObjectDetails"), sizeof(FAkWwiseObjectDetails), Get_Z_Construct_UScriptStruct_FAkWwiseObjectDetails_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AkWwiseObjectDetails"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FAkWwiseObjectDetails>, EStructFlags(0x00000201));
			UProperty* NewProp_ItemId = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ItemId"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ItemId, FAkWwiseObjectDetails), 0x0010000000020015);
			UProperty* NewProp_ItemPath = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ItemPath"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ItemPath, FAkWwiseObjectDetails), 0x0010000000020015);
			UProperty* NewProp_ItemName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ItemName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ItemName, FAkWwiseObjectDetails), 0x0010000000020015);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkSlider.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Structure for Wwise item details."));
			MetaData->SetValue(NewProp_ItemId, TEXT("Category"), TEXT("ItemId"));
			MetaData->SetValue(NewProp_ItemId, TEXT("DisplayName"), TEXT("Id"));
			MetaData->SetValue(NewProp_ItemId, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkSlider.h"));
			MetaData->SetValue(NewProp_ItemId, TEXT("ToolTip"), TEXT("The id of the item to control"));
			MetaData->SetValue(NewProp_ItemPath, TEXT("Category"), TEXT("ItemPath"));
			MetaData->SetValue(NewProp_ItemPath, TEXT("DisplayName"), TEXT("Path"));
			MetaData->SetValue(NewProp_ItemPath, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkSlider.h"));
			MetaData->SetValue(NewProp_ItemPath, TEXT("ToolTip"), TEXT("The id of the item to control"));
			MetaData->SetValue(NewProp_ItemName, TEXT("Category"), TEXT("ItemName"));
			MetaData->SetValue(NewProp_ItemName, TEXT("DisplayName"), TEXT("Name"));
			MetaData->SetValue(NewProp_ItemName, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkSlider.h"));
			MetaData->SetValue(NewProp_ItemName, TEXT("ToolTip"), TEXT("The name of the item to control"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkWwiseObjectDetails_CRC() { return 1568008272U; }
	void UAkSlider::StaticRegisterNativesUAkSlider()
	{
		UClass* Class = UAkSlider::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetAkSliderItemId", (Native)&UAkSlider::execGetAkSliderItemId },
			{ "GetAkSliderItemProperty", (Native)&UAkSlider::execGetAkSliderItemProperty },
			{ "GetValue", (Native)&UAkSlider::execGetValue },
			{ "SetAkSliderItemId", (Native)&UAkSlider::execSetAkSliderItemId },
			{ "SetAkSliderItemProperty", (Native)&UAkSlider::execSetAkSliderItemProperty },
			{ "SetIndentHandle", (Native)&UAkSlider::execSetIndentHandle },
			{ "SetLocked", (Native)&UAkSlider::execSetLocked },
			{ "SetSliderBarColor", (Native)&UAkSlider::execSetSliderBarColor },
			{ "SetSliderHandleColor", (Native)&UAkSlider::execSetSliderHandleColor },
			{ "SetStepSize", (Native)&UAkSlider::execSetStepSize },
			{ "SetValue", (Native)&UAkSlider::execSetValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UAkSlider_GetAkSliderItemId()
	{
		struct AkSlider_eventGetAkSliderItemId_Parms
		{
			FGuid ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkSlider();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetAkSliderItemId"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54820401, 65535, sizeof(AkSlider_eventGetAkSliderItemId_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, AkSlider_eventGetAkSliderItemId_Parms), 0x0010000000000582, Z_Construct_UScriptStruct_FGuid());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Wwise"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Get Item Id"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkSlider.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns the current item id.\n\n@return an id as GUID."));
			MetaData->SetValue(NewProp_ReturnValue, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty()
	{
		struct AkSlider_eventGetAkSliderItemProperty_Parms
		{
			FString ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkSlider();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetAkSliderItemProperty"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(AkSlider_eventGetAkSliderItemProperty_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReturnValue, AkSlider_eventGetAkSliderItemProperty_Parms), 0x0010000000000582);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Wwise"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Get Item Property"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkSlider.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns the current item property.\n\n@return a property as string."));
			MetaData->SetValue(NewProp_ReturnValue, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkSlider_GetValue()
	{
		struct AkSlider_eventGetValue_Parms
		{
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkSlider();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(AkSlider_eventGetValue_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, AkSlider_eventGetValue_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Behavior"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkSlider.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Gets the current value of the slider."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkSlider_SetAkSliderItemId()
	{
		struct AkSlider_eventSetAkSliderItemId_Parms
		{
			FGuid ItemId;
		};
		UObject* Outer = Z_Construct_UClass_UAkSlider();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetAkSliderItemId"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04C20401, 65535, sizeof(AkSlider_eventSetAkSliderItemId_Parms));
			UProperty* NewProp_ItemId = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ItemId"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ItemId, AkSlider_eventSetAkSliderItemId_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FGuid());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Wwise"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Set Item Id"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkSlider.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set the item id to the new one.\n@param ItemId - value (new id) to set"));
			MetaData->SetValue(NewProp_ItemId, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty()
	{
		struct AkSlider_eventSetAkSliderItemProperty_Parms
		{
			FString ItemProperty;
		};
		UObject* Outer = Z_Construct_UClass_UAkSlider();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetAkSliderItemProperty"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(AkSlider_eventSetAkSliderItemProperty_Parms));
			UProperty* NewProp_ItemProperty = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ItemProperty"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ItemProperty, AkSlider_eventSetAkSliderItemProperty_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Wwise"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Set Item Property"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkSlider.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set the item property to the new one.\n@param ItemId - value (new id) to set"));
			MetaData->SetValue(NewProp_ItemProperty, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkSlider_SetIndentHandle()
	{
		struct AkSlider_eventSetIndentHandle_Parms
		{
			bool InValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkSlider();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetIndentHandle"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(AkSlider_eventSetIndentHandle_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(InValue, AkSlider_eventSetIndentHandle_Parms);
			UProperty* NewProp_InValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(InValue, AkSlider_eventSetIndentHandle_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(InValue, AkSlider_eventSetIndentHandle_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Behavior"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkSlider.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets if the slidable area should be indented to fit the handle"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkSlider_SetLocked()
	{
		struct AkSlider_eventSetLocked_Parms
		{
			bool InValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkSlider();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetLocked"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(AkSlider_eventSetLocked_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(InValue, AkSlider_eventSetLocked_Parms);
			UProperty* NewProp_InValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(InValue, AkSlider_eventSetLocked_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(InValue, AkSlider_eventSetLocked_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Behavior"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkSlider.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets the handle to be interactive or fixed"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkSlider_SetSliderBarColor()
	{
		struct AkSlider_eventSetSliderBarColor_Parms
		{
			FLinearColor InValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkSlider();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetSliderBarColor"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04820401, 65535, sizeof(AkSlider_eventSetSliderBarColor_Parms));
			UProperty* NewProp_InValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(InValue, AkSlider_eventSetSliderBarColor_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FLinearColor());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Appearance"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkSlider.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets the color of the slider bar"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkSlider_SetSliderHandleColor()
	{
		struct AkSlider_eventSetSliderHandleColor_Parms
		{
			FLinearColor InValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkSlider();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetSliderHandleColor"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04820401, 65535, sizeof(AkSlider_eventSetSliderHandleColor_Parms));
			UProperty* NewProp_InValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(InValue, AkSlider_eventSetSliderHandleColor_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FLinearColor());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Appearance"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkSlider.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets the color of the handle bar"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkSlider_SetStepSize()
	{
		struct AkSlider_eventSetStepSize_Parms
		{
			float InValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkSlider();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetStepSize"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(AkSlider_eventSetStepSize_Parms));
			UProperty* NewProp_InValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(InValue, AkSlider_eventSetStepSize_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Behavior"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkSlider.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets the amount to adjust the value by, when using a controller or keyboard"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkSlider_SetValue()
	{
		struct AkSlider_eventSetValue_Parms
		{
			float InValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkSlider();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(AkSlider_eventSetValue_Parms));
			UProperty* NewProp_InValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(InValue, AkSlider_eventSetValue_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Behavior"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkSlider.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets the current value of the slider."));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkSlider_NoRegister()
	{
		return UAkSlider::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkSlider()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UWidget();
			Z_Construct_UPackage__Script_AkAudio();
			OuterClass = UAkSlider::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00086u;

				OuterClass->LinkChild(Z_Construct_UFunction_UAkSlider_GetAkSliderItemId());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkSlider_GetValue());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkSlider_SetAkSliderItemId());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkSlider_SetIndentHandle());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkSlider_SetLocked());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkSlider_SetSliderBarColor());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkSlider_SetSliderHandleColor());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkSlider_SetStepSize());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkSlider_SetValue());

				UProperty* NewProp_OnPropertyDropped = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnPropertyDropped"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnPropertyDropped, UAkSlider), 0x0010000010080000, Z_Construct_UDelegateFunction_AkAudio_OnPropertyDropDetected__DelegateSignature());
				UProperty* NewProp_OnItemDropped = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnItemDropped"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnItemDropped, UAkSlider), 0x0010000010080000, Z_Construct_UDelegateFunction_AkAudio_OnItemDropDetected__DelegateSignature());
				UProperty* NewProp_OnValueChanged = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnValueChanged"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnValueChanged, UAkSlider), 0x0010000010080000, Z_Construct_UDelegateFunction_AkAudio_AkOnFloatValueChangedEvent__DelegateSignature());
				UProperty* NewProp_ItemToControl = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ItemToControl"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ItemToControl, UAkSlider), 0x0010000000024001, Z_Construct_UScriptStruct_FAkWwiseItemToControl());
				UProperty* NewProp_ThePropertyToControl = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ThePropertyToControl"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ThePropertyToControl, UAkSlider), 0x0010000000020001, Z_Construct_UScriptStruct_FAkPropertyToControl());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(IsFocusable, UAkSlider);
				UProperty* NewProp_IsFocusable = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("IsFocusable"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(IsFocusable, UAkSlider), 0x0010000000000015, CPP_BOOL_PROPERTY_BITMASK(IsFocusable, UAkSlider), sizeof(bool), true);
				UProperty* NewProp_StepSize = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("StepSize"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(StepSize, UAkSlider), 0x0010000000000015);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(Locked, UAkSlider);
				UProperty* NewProp_Locked = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Locked"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(Locked, UAkSlider), 0x0010040000000015, CPP_BOOL_PROPERTY_BITMASK(Locked, UAkSlider), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(IndentHandle, UAkSlider);
				UProperty* NewProp_IndentHandle = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("IndentHandle"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(IndentHandle, UAkSlider), 0x0010040000000015, CPP_BOOL_PROPERTY_BITMASK(IndentHandle, UAkSlider), sizeof(bool), true);
				UProperty* NewProp_SliderHandleColor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SliderHandleColor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SliderHandleColor, UAkSlider), 0x0010000000000015, Z_Construct_UScriptStruct_FLinearColor());
				UProperty* NewProp_SliderBarColor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SliderBarColor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SliderBarColor, UAkSlider), 0x0010000000000015, Z_Construct_UScriptStruct_FLinearColor());
				UProperty* NewProp_Orientation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Orientation"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(Orientation, UAkSlider), 0x0010000000000015, Z_Construct_UEnum_SlateCore_EOrientation());
				UProperty* NewProp_WidgetStyle = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WidgetStyle"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(WidgetStyle, UAkSlider), 0x0010000000000005, Z_Construct_UScriptStruct_FSliderStyle());
				UProperty* NewProp_ValueDelegate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ValueDelegate"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateProperty(CPP_PROPERTY_BASE(ValueDelegate, UAkSlider), 0x0010000000080000, Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature());
				UProperty* NewProp_Value = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Value"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Value, UAkSlider), 0x0010000000000001);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkSlider_GetAkSliderItemId(), "GetAkSliderItemId"); // 4016362555
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty(), "GetAkSliderItemProperty"); // 347534905
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkSlider_GetValue(), "GetValue"); // 1070782382
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkSlider_SetAkSliderItemId(), "SetAkSliderItemId"); // 4074355092
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty(), "SetAkSliderItemProperty"); // 2338141809
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkSlider_SetIndentHandle(), "SetIndentHandle"); // 454726647
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkSlider_SetLocked(), "SetLocked"); // 1996245840
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkSlider_SetSliderBarColor(), "SetSliderBarColor"); // 3204530692
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkSlider_SetSliderHandleColor(), "SetSliderHandleColor"); // 4160833589
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkSlider_SetStepSize(), "SetStepSize"); // 2500820172
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkSlider_SetValue(), "SetValue"); // 395189168
				OuterClass->ClassConfigName = FName(TEXT("Editor"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UAkSlider> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AkWaapiUMG/Components/AkSlider.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkSlider.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("A simple widget that shows a sliding bar with a handle that allows you to control the value between 0..1.\n\n* No Children"));
				MetaData->SetValue(NewProp_OnPropertyDropped, TEXT("Category"), TEXT("Widget Event"));
				MetaData->SetValue(NewProp_OnPropertyDropped, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkSlider.h"));
				MetaData->SetValue(NewProp_OnPropertyDropped, TEXT("ToolTip"), TEXT("Called when the item selection changes."));
				MetaData->SetValue(NewProp_OnItemDropped, TEXT("Category"), TEXT("Widget Event"));
				MetaData->SetValue(NewProp_OnItemDropped, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkSlider.h"));
				MetaData->SetValue(NewProp_OnItemDropped, TEXT("ToolTip"), TEXT("Called when the item selection changes."));
				MetaData->SetValue(NewProp_OnValueChanged, TEXT("Category"), TEXT("Widget Event"));
				MetaData->SetValue(NewProp_OnValueChanged, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkSlider.h"));
				MetaData->SetValue(NewProp_OnValueChanged, TEXT("ToolTip"), TEXT("Called when the value is changed by slider or typing."));
				MetaData->SetValue(NewProp_ItemToControl, TEXT("Category"), TEXT("Wwise"));
				MetaData->SetValue(NewProp_ItemToControl, TEXT("DisplayName"), TEXT("Item to control"));
				MetaData->SetValue(NewProp_ItemToControl, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkSlider.h"));
				MetaData->SetValue(NewProp_ThePropertyToControl, TEXT("Category"), TEXT("Wwise"));
				MetaData->SetValue(NewProp_ThePropertyToControl, TEXT("DisplayName"), TEXT("Property to control"));
				MetaData->SetValue(NewProp_ThePropertyToControl, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkSlider.h"));
				MetaData->SetValue(NewProp_IsFocusable, TEXT("Category"), TEXT("Interaction"));
				MetaData->SetValue(NewProp_IsFocusable, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkSlider.h"));
				MetaData->SetValue(NewProp_IsFocusable, TEXT("ToolTip"), TEXT("Should the slider be focusable?"));
				MetaData->SetValue(NewProp_StepSize, TEXT("Category"), TEXT("Appearance"));
				MetaData->SetValue(NewProp_StepSize, TEXT("ClampMax"), TEXT("1"));
				MetaData->SetValue(NewProp_StepSize, TEXT("ClampMin"), TEXT("0"));
				MetaData->SetValue(NewProp_StepSize, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkSlider.h"));
				MetaData->SetValue(NewProp_StepSize, TEXT("ToolTip"), TEXT("The amount to adjust the value by, when using a controller or keyboard"));
				MetaData->SetValue(NewProp_StepSize, TEXT("UIMax"), TEXT("1"));
				MetaData->SetValue(NewProp_StepSize, TEXT("UIMin"), TEXT("0"));
				MetaData->SetValue(NewProp_Locked, TEXT("Category"), TEXT("Appearance"));
				MetaData->SetValue(NewProp_Locked, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkSlider.h"));
				MetaData->SetValue(NewProp_Locked, TEXT("ToolTip"), TEXT("Whether the handle is interactive or fixed."));
				MetaData->SetValue(NewProp_IndentHandle, TEXT("Category"), TEXT("Appearance"));
				MetaData->SetValue(NewProp_IndentHandle, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkSlider.h"));
				MetaData->SetValue(NewProp_IndentHandle, TEXT("ToolTip"), TEXT("Whether the slidable area should be indented to fit the handle."));
				MetaData->SetValue(NewProp_SliderHandleColor, TEXT("Category"), TEXT("Appearance"));
				MetaData->SetValue(NewProp_SliderHandleColor, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkSlider.h"));
				MetaData->SetValue(NewProp_SliderHandleColor, TEXT("ToolTip"), TEXT("The color to draw the slider handle in."));
				MetaData->SetValue(NewProp_SliderBarColor, TEXT("Category"), TEXT("Appearance"));
				MetaData->SetValue(NewProp_SliderBarColor, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkSlider.h"));
				MetaData->SetValue(NewProp_SliderBarColor, TEXT("ToolTip"), TEXT("The color to draw the slider bar in."));
				MetaData->SetValue(NewProp_Orientation, TEXT("Category"), TEXT("Appearance"));
				MetaData->SetValue(NewProp_Orientation, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkSlider.h"));
				MetaData->SetValue(NewProp_Orientation, TEXT("ToolTip"), TEXT("The slider's orientation."));
				MetaData->SetValue(NewProp_WidgetStyle, TEXT("Category"), TEXT("Style"));
				MetaData->SetValue(NewProp_WidgetStyle, TEXT("DisplayName"), TEXT("Style"));
				MetaData->SetValue(NewProp_WidgetStyle, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkSlider.h"));
				MetaData->SetValue(NewProp_WidgetStyle, TEXT("ToolTip"), TEXT("The progress bar style"));
				MetaData->SetValue(NewProp_ValueDelegate, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkSlider.h"));
				MetaData->SetValue(NewProp_ValueDelegate, TEXT("ToolTip"), TEXT("A bindable delegate to allow logic to drive the value of the widget"));
				MetaData->SetValue(NewProp_Value, TEXT("Category"), TEXT("Appearance"));
				MetaData->SetValue(NewProp_Value, TEXT("ClampMax"), TEXT("1"));
				MetaData->SetValue(NewProp_Value, TEXT("ClampMin"), TEXT("0"));
				MetaData->SetValue(NewProp_Value, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkSlider.h"));
				MetaData->SetValue(NewProp_Value, TEXT("ToolTip"), TEXT("The volume value to display."));
				MetaData->SetValue(NewProp_Value, TEXT("UIMax"), TEXT("1"));
				MetaData->SetValue(NewProp_Value, TEXT("UIMin"), TEXT("0"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkSlider, 1499484783);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkSlider(Z_Construct_UClass_UAkSlider, &UAkSlider::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkSlider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkSlider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
