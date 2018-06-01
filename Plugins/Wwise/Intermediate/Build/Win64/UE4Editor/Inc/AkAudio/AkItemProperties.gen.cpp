// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkAudioDevice.h"
#include "Classes/AkWaapiUMG/Components/AkItemProperties.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkItemProperties() {}
// Cross Module References
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemPropertySelectionChanged__DelegateSignature();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkPropertyToControl();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkItemPropertiesConv();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkItemPropertiesConv_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkItemProperties_GetSearchText();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkItemProperties();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkItemProperties_GetSelectedProperty();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkItemProperties_SetSearchText();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkItemProperties_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature()
	{
		struct _Script_AkAudio_eventOnItemPropertyDragDetected_Parms
		{
			FString PropertyDragged;
		};
		UObject* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnItemPropertyDragDetected__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535, sizeof(_Script_AkAudio_eventOnItemPropertyDragDetected_Parms));
			UProperty* NewProp_PropertyDragged = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PropertyDragged"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(PropertyDragged, _Script_AkAudio_eventOnItemPropertyDragDetected_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkItemProperties.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("A delegate type invoked when a property is being dragged."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemPropertySelectionChanged__DelegateSignature()
	{
		struct _Script_AkAudio_eventOnItemPropertySelectionChanged_Parms
		{
			FString PropertySelected;
		};
		UObject* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnItemPropertySelectionChanged__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535, sizeof(_Script_AkAudio_eventOnItemPropertySelectionChanged_Parms));
			UProperty* NewProp_PropertySelected = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PropertySelected"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(PropertySelected, _Script_AkAudio_eventOnItemPropertySelectionChanged_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkItemProperties.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("A delegate type invoked when a selection changes somewhere."));
#endif
		}
		return ReturnFunction;
	}
class UScriptStruct* FAkPropertyToControl::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkPropertyToControl_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkPropertyToControl, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkPropertyToControl"), sizeof(FAkPropertyToControl), Get_Z_Construct_UScriptStruct_FAkPropertyToControl_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkPropertyToControl(FAkPropertyToControl::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkPropertyToControl"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkPropertyToControl
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkPropertyToControl()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkPropertyToControl")),new UScriptStruct::TCppStructOps<FAkPropertyToControl>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkPropertyToControl;
	UScriptStruct* Z_Construct_UScriptStruct_FAkPropertyToControl()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		extern uint32 Get_Z_Construct_UScriptStruct_FAkPropertyToControl_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkPropertyToControl"), sizeof(FAkPropertyToControl), Get_Z_Construct_UScriptStruct_FAkPropertyToControl_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AkPropertyToControl"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FAkPropertyToControl>, EStructFlags(0x00000201));
			UProperty* NewProp_ItemProperty = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ItemProperty"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ItemProperty, FAkPropertyToControl), 0x0010000000020015);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkItemProperties.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Structure for property to be controlled by the UI."));
			MetaData->SetValue(NewProp_ItemProperty, TEXT("Category"), TEXT("ItemProperty"));
			MetaData->SetValue(NewProp_ItemProperty, TEXT("DisplayName"), TEXT("Property"));
			MetaData->SetValue(NewProp_ItemProperty, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkItemProperties.h"));
			MetaData->SetValue(NewProp_ItemProperty, TEXT("ToolTip"), TEXT("The name of the item to control"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkPropertyToControl_CRC() { return 720764923U; }
	void UAkItemPropertiesConv::StaticRegisterNativesUAkItemPropertiesConv()
	{
		UClass* Class = UAkItemPropertiesConv::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "Conv_FAkPropertyToControlToString", (Native)&UAkItemPropertiesConv::execConv_FAkPropertyToControlToString },
			{ "Conv_FAkPropertyToControlToText", (Native)&UAkItemPropertiesConv::execConv_FAkPropertyToControlToText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString()
	{
		struct AkItemPropertiesConv_eventConv_FAkPropertyToControlToString_Parms
		{
			FAkPropertyToControl INAkPropertyToControl;
			FString ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkItemPropertiesConv();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Conv_FAkPropertyToControlToString"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14422401, 65535, sizeof(AkItemPropertiesConv_eventConv_FAkPropertyToControlToString_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReturnValue, AkItemPropertiesConv_eventConv_FAkPropertyToControlToString_Parms), 0x0010000000000580);
			UProperty* NewProp_INAkPropertyToControl = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("INAkPropertyToControl"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(INAkPropertyToControl, AkItemPropertiesConv_eventConv_FAkPropertyToControlToString_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FAkPropertyToControl());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("BlueprintAutocast"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Utilities|String"));
			MetaData->SetValue(ReturnFunction, TEXT("CompactNodeTitle"), TEXT("->"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("ToString (FAkPropertyToControl)"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkItemProperties.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Converts an AkPropertyToControl value to a string"));
			MetaData->SetValue(NewProp_INAkPropertyToControl, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText()
	{
		struct AkItemPropertiesConv_eventConv_FAkPropertyToControlToText_Parms
		{
			FAkPropertyToControl INAkPropertyToControl;
			FText ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkItemPropertiesConv();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Conv_FAkPropertyToControlToText"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14422401, 65535, sizeof(AkItemPropertiesConv_eventConv_FAkPropertyToControlToText_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UTextProperty(CPP_PROPERTY_BASE(ReturnValue, AkItemPropertiesConv_eventConv_FAkPropertyToControlToText_Parms), 0x0010000000000580);
			UProperty* NewProp_INAkPropertyToControl = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("INAkPropertyToControl"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(INAkPropertyToControl, AkItemPropertiesConv_eventConv_FAkPropertyToControlToText_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FAkPropertyToControl());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("BlueprintAutocast"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Utilities|Text"));
			MetaData->SetValue(ReturnFunction, TEXT("CompactNodeTitle"), TEXT("->"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("ToText (FAkPropertyToControl)"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkItemProperties.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Converts an AkPropertyToControl value to a localizable text"));
			MetaData->SetValue(NewProp_INAkPropertyToControl, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkItemPropertiesConv_NoRegister()
	{
		return UAkItemPropertiesConv::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkItemPropertiesConv()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_AkAudio();
			OuterClass = UAkItemPropertiesConv::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString(), "Conv_FAkPropertyToControlToString"); // 1482881582
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText(), "Conv_FAkPropertyToControlToText"); // 3417753648
				static TCppClassTypeInfo<TCppClassTypeTraits<UAkItemPropertiesConv> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AkWaapiUMG/Components/AkItemProperties.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkItemProperties.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("UAkItemPropertiesConv"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkItemPropertiesConv, 1812463476);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkItemPropertiesConv(Z_Construct_UClass_UAkItemPropertiesConv, &UAkItemPropertiesConv::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkItemPropertiesConv"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkItemPropertiesConv);
	void UAkItemProperties::StaticRegisterNativesUAkItemProperties()
	{
		UClass* Class = UAkItemProperties::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetSearchText", (Native)&UAkItemProperties::execGetSearchText },
			{ "GetSelectedProperty", (Native)&UAkItemProperties::execGetSelectedProperty },
			{ "SetSearchText", (Native)&UAkItemProperties::execSetSearchText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UAkItemProperties_GetSearchText()
	{
		struct AkItemProperties_eventGetSearchText_Parms
		{
			FString ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkItemProperties();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetSearchText"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020409, 65535, sizeof(AkItemProperties_eventGetSearchText_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReturnValue, AkItemProperties_eventGetSearchText_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkItemProperties.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("returns the current text of the searchBox"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkItemProperties_GetSelectedProperty()
	{
		struct AkItemProperties_eventGetSelectedProperty_Parms
		{
			FString ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkItemProperties();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetSelectedProperty"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020409, 65535, sizeof(AkItemProperties_eventGetSelectedProperty_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReturnValue, AkItemProperties_eventGetSelectedProperty_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkItemProperties.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns all properties currently selected in the Wwise properties list"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkItemProperties_SetSearchText()
	{
		struct AkItemProperties_eventSetSearchText_Parms
		{
			FString newText;
		};
		UObject* Outer = Z_Construct_UClass_UAkItemProperties();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetSearchText"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020409, 65535, sizeof(AkItemProperties_eventSetSearchText_Parms));
			UProperty* NewProp_newText = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("newText"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(newText, AkItemProperties_eventSetSearchText_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkItemProperties.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("sets the current text of the searchBox"));
			MetaData->SetValue(NewProp_newText, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkItemProperties_NoRegister()
	{
		return UAkItemProperties::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkItemProperties()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UWidget();
			Z_Construct_UPackage__Script_AkAudio();
			OuterClass = UAkItemProperties::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00082u;

				OuterClass->LinkChild(Z_Construct_UFunction_UAkItemProperties_GetSearchText());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkItemProperties_GetSelectedProperty());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkItemProperties_SetSearchText());

				UProperty* NewProp_OnPropertyDragged = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnPropertyDragged"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnPropertyDragged, UAkItemProperties), 0x0010000010080000, Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature());
				UProperty* NewProp_OnSelectionChanged = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnSelectionChanged"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnSelectionChanged, UAkItemProperties), 0x0010000010080000, Z_Construct_UDelegateFunction_AkAudio_OnItemPropertySelectionChanged__DelegateSignature());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkItemProperties_GetSearchText(), "GetSearchText"); // 1995618852
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkItemProperties_GetSelectedProperty(), "GetSelectedProperty"); // 2553240212
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkItemProperties_SetSearchText(), "SetSearchText"); // 2049468392
				OuterClass->ClassConfigName = FName(TEXT("Editor"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UAkItemProperties> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AkWaapiUMG/Components/AkItemProperties.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkItemProperties.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("A widget that shows the Wwise properties list."));
				MetaData->SetValue(NewProp_OnPropertyDragged, TEXT("Category"), TEXT("Widget Event"));
				MetaData->SetValue(NewProp_OnPropertyDragged, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkItemProperties.h"));
				MetaData->SetValue(NewProp_OnPropertyDragged, TEXT("ToolTip"), TEXT("Called when a property is dragged from the property list."));
				MetaData->SetValue(NewProp_OnSelectionChanged, TEXT("Category"), TEXT("Widget Event"));
				MetaData->SetValue(NewProp_OnSelectionChanged, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkItemProperties.h"));
				MetaData->SetValue(NewProp_OnSelectionChanged, TEXT("ToolTip"), TEXT("Called when the property selection changes."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkItemProperties, 1694975836);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkItemProperties(Z_Construct_UClass_UAkItemProperties, &UAkItemProperties::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkItemProperties"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkItemProperties);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
