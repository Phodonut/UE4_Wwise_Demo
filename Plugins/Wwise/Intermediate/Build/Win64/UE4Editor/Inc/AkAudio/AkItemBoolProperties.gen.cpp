// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkAudioDevice.h"
#include "Classes/AkWaapiUMG/Components/AkItemBoolProperties.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkItemBoolProperties() {}
// Cross Module References
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertyDragDetected__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertySelectionChanged__DelegateSignature();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkBoolPropertyToControl();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkItemBoolPropertiesConv();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkItemBoolPropertiesConv_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkItemBoolProperties_GetSearchText();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkItemBoolProperties();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkItemBoolProperties_GetSelectedProperty();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkItemBoolProperties_SetSearchText();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkItemBoolProperties_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertyDragDetected__DelegateSignature()
	{
		struct _Script_AkAudio_eventOnItemBoolPropertyDragDetected_Parms
		{
			FString PropertyDragged;
		};
		UObject* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnItemBoolPropertyDragDetected__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535, sizeof(_Script_AkAudio_eventOnItemBoolPropertyDragDetected_Parms));
			UProperty* NewProp_PropertyDragged = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PropertyDragged"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(PropertyDragged, _Script_AkAudio_eventOnItemBoolPropertyDragDetected_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkItemBoolProperties.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("A delegate type invoked when a property is being dragged."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertySelectionChanged__DelegateSignature()
	{
		struct _Script_AkAudio_eventOnItemBoolPropertySelectionChanged_Parms
		{
			FString PropertySelected;
		};
		UObject* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnItemBoolPropertySelectionChanged__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535, sizeof(_Script_AkAudio_eventOnItemBoolPropertySelectionChanged_Parms));
			UProperty* NewProp_PropertySelected = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PropertySelected"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(PropertySelected, _Script_AkAudio_eventOnItemBoolPropertySelectionChanged_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkItemBoolProperties.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("A delegate type invoked when a selection changes somewhere."));
#endif
		}
		return ReturnFunction;
	}
class UScriptStruct* FAkBoolPropertyToControl::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkBoolPropertyToControl_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkBoolPropertyToControl, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkBoolPropertyToControl"), sizeof(FAkBoolPropertyToControl), Get_Z_Construct_UScriptStruct_FAkBoolPropertyToControl_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkBoolPropertyToControl(FAkBoolPropertyToControl::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkBoolPropertyToControl"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkBoolPropertyToControl
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkBoolPropertyToControl()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkBoolPropertyToControl")),new UScriptStruct::TCppStructOps<FAkBoolPropertyToControl>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkBoolPropertyToControl;
	UScriptStruct* Z_Construct_UScriptStruct_FAkBoolPropertyToControl()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		extern uint32 Get_Z_Construct_UScriptStruct_FAkBoolPropertyToControl_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkBoolPropertyToControl"), sizeof(FAkBoolPropertyToControl), Get_Z_Construct_UScriptStruct_FAkBoolPropertyToControl_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AkBoolPropertyToControl"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FAkBoolPropertyToControl>, EStructFlags(0x00000201));
			UProperty* NewProp_ItemProperty = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ItemProperty"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ItemProperty, FAkBoolPropertyToControl), 0x0010000000020015);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkItemBoolProperties.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Structure for property to be controlled by the UI."));
			MetaData->SetValue(NewProp_ItemProperty, TEXT("Category"), TEXT("ItemProperty"));
			MetaData->SetValue(NewProp_ItemProperty, TEXT("DisplayName"), TEXT("Property"));
			MetaData->SetValue(NewProp_ItemProperty, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkItemBoolProperties.h"));
			MetaData->SetValue(NewProp_ItemProperty, TEXT("ToolTip"), TEXT("The name of the item to control"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkBoolPropertyToControl_CRC() { return 1499317727U; }
	void UAkItemBoolPropertiesConv::StaticRegisterNativesUAkItemBoolPropertiesConv()
	{
		UClass* Class = UAkItemBoolPropertiesConv::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "Conv_FAkBoolPropertyToControlToString", (Native)&UAkItemBoolPropertiesConv::execConv_FAkBoolPropertyToControlToString },
			{ "Conv_FAkBoolPropertyToControlToText", (Native)&UAkItemBoolPropertiesConv::execConv_FAkBoolPropertyToControlToText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString()
	{
		struct AkItemBoolPropertiesConv_eventConv_FAkBoolPropertyToControlToString_Parms
		{
			FAkBoolPropertyToControl INAkBoolPropertyToControl;
			FString ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkItemBoolPropertiesConv();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Conv_FAkBoolPropertyToControlToString"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14422401, 65535, sizeof(AkItemBoolPropertiesConv_eventConv_FAkBoolPropertyToControlToString_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReturnValue, AkItemBoolPropertiesConv_eventConv_FAkBoolPropertyToControlToString_Parms), 0x0010000000000580);
			UProperty* NewProp_INAkBoolPropertyToControl = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("INAkBoolPropertyToControl"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(INAkBoolPropertyToControl, AkItemBoolPropertiesConv_eventConv_FAkBoolPropertyToControlToString_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FAkBoolPropertyToControl());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("BlueprintAutocast"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Utilities|String"));
			MetaData->SetValue(ReturnFunction, TEXT("CompactNodeTitle"), TEXT("->"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("ToString (FAkBoolPropertyToControl)"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkItemBoolProperties.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Converts an AkBoolPropertyToControl value to a string"));
			MetaData->SetValue(NewProp_INAkBoolPropertyToControl, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText()
	{
		struct AkItemBoolPropertiesConv_eventConv_FAkBoolPropertyToControlToText_Parms
		{
			FAkBoolPropertyToControl INAkBoolPropertyToControl;
			FText ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkItemBoolPropertiesConv();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Conv_FAkBoolPropertyToControlToText"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14422401, 65535, sizeof(AkItemBoolPropertiesConv_eventConv_FAkBoolPropertyToControlToText_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UTextProperty(CPP_PROPERTY_BASE(ReturnValue, AkItemBoolPropertiesConv_eventConv_FAkBoolPropertyToControlToText_Parms), 0x0010000000000580);
			UProperty* NewProp_INAkBoolPropertyToControl = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("INAkBoolPropertyToControl"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(INAkBoolPropertyToControl, AkItemBoolPropertiesConv_eventConv_FAkBoolPropertyToControlToText_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FAkBoolPropertyToControl());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("BlueprintAutocast"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Utilities|Text"));
			MetaData->SetValue(ReturnFunction, TEXT("CompactNodeTitle"), TEXT("->"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("ToText (FAkBoolPropertyToControl)"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkItemBoolProperties.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Converts an AkBoolPropertyToControl value to a localizable text"));
			MetaData->SetValue(NewProp_INAkBoolPropertyToControl, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkItemBoolPropertiesConv_NoRegister()
	{
		return UAkItemBoolPropertiesConv::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkItemBoolPropertiesConv()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_AkAudio();
			OuterClass = UAkItemBoolPropertiesConv::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString(), "Conv_FAkBoolPropertyToControlToString"); // 944577928
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText(), "Conv_FAkBoolPropertyToControlToText"); // 4283796525
				static TCppClassTypeInfo<TCppClassTypeTraits<UAkItemBoolPropertiesConv> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AkWaapiUMG/Components/AkItemBoolProperties.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkItemBoolProperties.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("UAkItemBoolPropertiesConv"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkItemBoolPropertiesConv, 2398046012);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkItemBoolPropertiesConv(Z_Construct_UClass_UAkItemBoolPropertiesConv, &UAkItemBoolPropertiesConv::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkItemBoolPropertiesConv"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkItemBoolPropertiesConv);
	void UAkItemBoolProperties::StaticRegisterNativesUAkItemBoolProperties()
	{
		UClass* Class = UAkItemBoolProperties::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetSearchText", (Native)&UAkItemBoolProperties::execGetSearchText },
			{ "GetSelectedProperty", (Native)&UAkItemBoolProperties::execGetSelectedProperty },
			{ "SetSearchText", (Native)&UAkItemBoolProperties::execSetSearchText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UAkItemBoolProperties_GetSearchText()
	{
		struct AkItemBoolProperties_eventGetSearchText_Parms
		{
			FString ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkItemBoolProperties();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetSearchText"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020409, 65535, sizeof(AkItemBoolProperties_eventGetSearchText_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReturnValue, AkItemBoolProperties_eventGetSearchText_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkItemBoolProperties.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("returns the current text of the searchBox"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkItemBoolProperties_GetSelectedProperty()
	{
		struct AkItemBoolProperties_eventGetSelectedProperty_Parms
		{
			FString ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkItemBoolProperties();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetSelectedProperty"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020409, 65535, sizeof(AkItemBoolProperties_eventGetSelectedProperty_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReturnValue, AkItemBoolProperties_eventGetSelectedProperty_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkItemBoolProperties.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns all properties currently selected in the Wwise properties list"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkItemBoolProperties_SetSearchText()
	{
		struct AkItemBoolProperties_eventSetSearchText_Parms
		{
			FString newText;
		};
		UObject* Outer = Z_Construct_UClass_UAkItemBoolProperties();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetSearchText"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020409, 65535, sizeof(AkItemBoolProperties_eventSetSearchText_Parms));
			UProperty* NewProp_newText = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("newText"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(newText, AkItemBoolProperties_eventSetSearchText_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkItemBoolProperties.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("sets the current text of the searchBox"));
			MetaData->SetValue(NewProp_newText, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkItemBoolProperties_NoRegister()
	{
		return UAkItemBoolProperties::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkItemBoolProperties()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UWidget();
			Z_Construct_UPackage__Script_AkAudio();
			OuterClass = UAkItemBoolProperties::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00082u;

				OuterClass->LinkChild(Z_Construct_UFunction_UAkItemBoolProperties_GetSearchText());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkItemBoolProperties_GetSelectedProperty());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkItemBoolProperties_SetSearchText());

				UProperty* NewProp_OnPropertyDragged = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnPropertyDragged"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnPropertyDragged, UAkItemBoolProperties), 0x0010000010080000, Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertyDragDetected__DelegateSignature());
				UProperty* NewProp_OnSelectionChanged = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnSelectionChanged"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnSelectionChanged, UAkItemBoolProperties), 0x0010000010080000, Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertySelectionChanged__DelegateSignature());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkItemBoolProperties_GetSearchText(), "GetSearchText"); // 3408121649
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkItemBoolProperties_GetSelectedProperty(), "GetSelectedProperty"); // 2991818047
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkItemBoolProperties_SetSearchText(), "SetSearchText"); // 2478124248
				OuterClass->ClassConfigName = FName(TEXT("Editor"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UAkItemBoolProperties> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AkWaapiUMG/Components/AkItemBoolProperties.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkItemBoolProperties.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("A widget that shows the Wwise properties list."));
				MetaData->SetValue(NewProp_OnPropertyDragged, TEXT("Category"), TEXT("Widget Event"));
				MetaData->SetValue(NewProp_OnPropertyDragged, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkItemBoolProperties.h"));
				MetaData->SetValue(NewProp_OnPropertyDragged, TEXT("ToolTip"), TEXT("Called when a property is dragged from the property list."));
				MetaData->SetValue(NewProp_OnSelectionChanged, TEXT("Category"), TEXT("Widget Event"));
				MetaData->SetValue(NewProp_OnSelectionChanged, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkItemBoolProperties.h"));
				MetaData->SetValue(NewProp_OnSelectionChanged, TEXT("ToolTip"), TEXT("Called when the property selection changes."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkItemBoolProperties, 3063852618);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkItemBoolProperties(Z_Construct_UClass_UAkItemBoolProperties, &UAkItemBoolProperties::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkItemBoolProperties"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkItemBoolProperties);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
