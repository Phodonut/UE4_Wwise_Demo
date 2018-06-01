// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkAudioDevice.h"
#include "Classes/AkWaapiUMG/Components/AkCheckBox.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkCheckBox() {}
// Cross Module References
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnBoolPropertyDropDetected__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnWwiseItemDropDetected__DelegateSignature();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_AkOnCheckBoxComponentStateChanged__DelegateSignature();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkCheckBox_GetAkItemId();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkCheckBox();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkCheckBox_GetAkProperty();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkCheckBox_GetCheckedState();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ECheckBoxState();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkCheckBox_IsChecked();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkCheckBox_IsPressed();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkCheckBox_SetAkItemId();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkCheckBox_SetCheckedState();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkCheckBox_SetIsChecked();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkCheckBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UContentWidget();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWwiseItemToControl();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkBoolPropertyToControl();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCheckBoxStyle();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetCheckBoxState__DelegateSignature();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_AkAudio_OnBoolPropertyDropDetected__DelegateSignature()
	{
		struct _Script_AkAudio_eventOnBoolPropertyDropDetected_Parms
		{
			FString PropertyDropped;
		};
		UObject* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnBoolPropertyDropDetected__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535, sizeof(_Script_AkAudio_eventOnBoolPropertyDropDetected_Parms));
			UProperty* NewProp_PropertyDropped = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PropertyDropped"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(PropertyDropped, _Script_AkAudio_eventOnBoolPropertyDropDetected_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkCheckBox.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("A delegate type invoked when a property is being dragged."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_AkAudio_OnWwiseItemDropDetected__DelegateSignature()
	{
		struct _Script_AkAudio_eventOnWwiseItemDropDetected_Parms
		{
			FGuid ItemDroppedID;
		};
		UObject* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnWwiseItemDropDetected__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535, sizeof(_Script_AkAudio_eventOnWwiseItemDropDetected_Parms));
			UProperty* NewProp_ItemDroppedID = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ItemDroppedID"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ItemDroppedID, _Script_AkAudio_eventOnWwiseItemDropDetected_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FGuid());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkCheckBox.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("A delegate type invoked when an item is being dragged."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_AkAudio_AkOnCheckBoxComponentStateChanged__DelegateSignature()
	{
		struct _Script_AkAudio_eventAkOnCheckBoxComponentStateChanged_Parms
		{
			bool bIsChecked;
		};
		UObject* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AkOnCheckBoxComponentStateChanged__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535, sizeof(_Script_AkAudio_eventAkOnCheckBoxComponentStateChanged_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsChecked, _Script_AkAudio_eventAkOnCheckBoxComponentStateChanged_Parms);
			UProperty* NewProp_bIsChecked = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bIsChecked"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsChecked, _Script_AkAudio_eventAkOnCheckBoxComponentStateChanged_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bIsChecked, _Script_AkAudio_eventAkOnCheckBoxComponentStateChanged_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkCheckBox.h"));
#endif
		}
		return ReturnFunction;
	}
	void UAkCheckBox::StaticRegisterNativesUAkCheckBox()
	{
		UClass* Class = UAkCheckBox::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetAkItemId", (Native)&UAkCheckBox::execGetAkItemId },
			{ "GetAkProperty", (Native)&UAkCheckBox::execGetAkProperty },
			{ "GetCheckedState", (Native)&UAkCheckBox::execGetCheckedState },
			{ "IsChecked", (Native)&UAkCheckBox::execIsChecked },
			{ "IsPressed", (Native)&UAkCheckBox::execIsPressed },
			{ "SetAkBoolProperty", (Native)&UAkCheckBox::execSetAkBoolProperty },
			{ "SetAkItemId", (Native)&UAkCheckBox::execSetAkItemId },
			{ "SetCheckedState", (Native)&UAkCheckBox::execSetCheckedState },
			{ "SetIsChecked", (Native)&UAkCheckBox::execSetIsChecked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UAkCheckBox_GetAkItemId()
	{
		struct AkCheckBox_eventGetAkItemId_Parms
		{
			FGuid ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkCheckBox();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetAkItemId"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54820401, 65535, sizeof(AkCheckBox_eventGetAkItemId_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, AkCheckBox_eventGetAkItemId_Parms), 0x0010000000000582, Z_Construct_UScriptStruct_FGuid());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Wwise"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Get Item Id"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkCheckBox.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns the current item id.\n\n@return an id as GUID."));
			MetaData->SetValue(NewProp_ReturnValue, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkCheckBox_GetAkProperty()
	{
		struct AkCheckBox_eventGetAkProperty_Parms
		{
			FString ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkCheckBox();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetAkProperty"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(AkCheckBox_eventGetAkProperty_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReturnValue, AkCheckBox_eventGetAkProperty_Parms), 0x0010000000000582);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Wwise"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Get Item Property"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkCheckBox.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns the current item property.\n\n@return a property as string."));
			MetaData->SetValue(NewProp_ReturnValue, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkCheckBox_GetCheckedState()
	{
		struct AkCheckBox_eventGetCheckedState_Parms
		{
			ECheckBoxState ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkCheckBox();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetCheckedState"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(AkCheckBox_eventGetCheckedState_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(ReturnValue, AkCheckBox_eventGetCheckedState_Parms), 0x0010000000000580, Z_Construct_UEnum_SlateCore_ECheckBoxState());
			UProperty* NewProp_ReturnValue_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_ReturnValue, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Widget"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkCheckBox.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("@return the full current checked state."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkCheckBox_IsChecked()
	{
		struct AkCheckBox_eventIsChecked_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkCheckBox();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsChecked"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(AkCheckBox_eventIsChecked_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, AkCheckBox_eventIsChecked_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, AkCheckBox_eventIsChecked_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, AkCheckBox_eventIsChecked_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Widget"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkCheckBox.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns true if the checkbox is currently checked"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkCheckBox_IsPressed()
	{
		struct AkCheckBox_eventIsPressed_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkCheckBox();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsPressed"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(AkCheckBox_eventIsPressed_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, AkCheckBox_eventIsPressed_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, AkCheckBox_eventIsPressed_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, AkCheckBox_eventIsPressed_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Widget"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkCheckBox.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns true if this button is currently pressed"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty()
	{
		struct AkCheckBox_eventSetAkBoolProperty_Parms
		{
			FString ItemProperty;
		};
		UObject* Outer = Z_Construct_UClass_UAkCheckBox();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetAkBoolProperty"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(AkCheckBox_eventSetAkBoolProperty_Parms));
			UProperty* NewProp_ItemProperty = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ItemProperty"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ItemProperty, AkCheckBox_eventSetAkBoolProperty_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Wwise"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Set Item Property"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkCheckBox.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set the item property to the new one.\n@param ItemId - value (new id) to set"));
			MetaData->SetValue(NewProp_ItemProperty, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkCheckBox_SetAkItemId()
	{
		struct AkCheckBox_eventSetAkItemId_Parms
		{
			FGuid ItemId;
		};
		UObject* Outer = Z_Construct_UClass_UAkCheckBox();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetAkItemId"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04C20401, 65535, sizeof(AkCheckBox_eventSetAkItemId_Parms));
			UProperty* NewProp_ItemId = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ItemId"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ItemId, AkCheckBox_eventSetAkItemId_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FGuid());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Wwise"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Set Item Id"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkCheckBox.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set the item id to the new one.\n@param ItemId - value (new id) to set"));
			MetaData->SetValue(NewProp_ItemId, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkCheckBox_SetCheckedState()
	{
		struct AkCheckBox_eventSetCheckedState_Parms
		{
			ECheckBoxState InCheckedState;
		};
		UObject* Outer = Z_Construct_UClass_UAkCheckBox();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetCheckedState"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(AkCheckBox_eventSetCheckedState_Parms));
			UProperty* NewProp_InCheckedState = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InCheckedState"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(InCheckedState, AkCheckBox_eventSetCheckedState_Parms), 0x0010000000000080, Z_Construct_UEnum_SlateCore_ECheckBoxState());
			UProperty* NewProp_InCheckedState_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_InCheckedState, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Widget"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkCheckBox.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets the checked state."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkCheckBox_SetIsChecked()
	{
		struct AkCheckBox_eventSetIsChecked_Parms
		{
			bool InIsChecked;
		};
		UObject* Outer = Z_Construct_UClass_UAkCheckBox();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetIsChecked"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(AkCheckBox_eventSetIsChecked_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(InIsChecked, AkCheckBox_eventSetIsChecked_Parms);
			UProperty* NewProp_InIsChecked = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InIsChecked"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(InIsChecked, AkCheckBox_eventSetIsChecked_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(InIsChecked, AkCheckBox_eventSetIsChecked_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Widget"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkCheckBox.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets the checked state."));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkCheckBox_NoRegister()
	{
		return UAkCheckBox::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkCheckBox()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UContentWidget();
			Z_Construct_UPackage__Script_AkAudio();
			OuterClass = UAkCheckBox::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00086u;

				OuterClass->LinkChild(Z_Construct_UFunction_UAkCheckBox_GetAkItemId());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkCheckBox_GetAkProperty());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkCheckBox_GetCheckedState());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkCheckBox_IsChecked());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkCheckBox_IsPressed());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkCheckBox_SetAkItemId());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkCheckBox_SetCheckedState());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkCheckBox_SetIsChecked());

				UProperty* NewProp_OnPropertyDropped = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnPropertyDropped"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnPropertyDropped, UAkCheckBox), 0x0010000010080000, Z_Construct_UDelegateFunction_AkAudio_OnBoolPropertyDropDetected__DelegateSignature());
				UProperty* NewProp_OnItemDropped = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnItemDropped"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnItemDropped, UAkCheckBox), 0x0010000010080000, Z_Construct_UDelegateFunction_AkAudio_OnWwiseItemDropDetected__DelegateSignature());
				UProperty* NewProp_AkOnCheckStateChanged = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AkOnCheckStateChanged"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(AkOnCheckStateChanged, UAkCheckBox), 0x0010000010080000, Z_Construct_UDelegateFunction_AkAudio_AkOnCheckBoxComponentStateChanged__DelegateSignature());
				UProperty* NewProp_ItemToControl = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ItemToControl"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ItemToControl, UAkCheckBox), 0x0010000000024001, Z_Construct_UScriptStruct_FAkWwiseItemToControl());
				UProperty* NewProp_ThePropertyToControl = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ThePropertyToControl"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ThePropertyToControl, UAkCheckBox), 0x0010000000000001, Z_Construct_UScriptStruct_FAkBoolPropertyToControl());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(IsFocusable, UAkCheckBox);
				UProperty* NewProp_IsFocusable = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("IsFocusable"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(IsFocusable, UAkCheckBox), 0x0010000000000015, CPP_BOOL_PROPERTY_BITMASK(IsFocusable, UAkCheckBox), sizeof(bool), true);
				UProperty* NewProp_HorizontalAlignment = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HorizontalAlignment"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(HorizontalAlignment, UAkCheckBox), 0x0010000000000015, Z_Construct_UEnum_SlateCore_EHorizontalAlignment());
				UProperty* NewProp_WidgetStyle = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WidgetStyle"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(WidgetStyle, UAkCheckBox), 0x0010000000000005, Z_Construct_UScriptStruct_FCheckBoxStyle());
				UProperty* NewProp_CheckedStateDelegate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CheckedStateDelegate"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateProperty(CPP_PROPERTY_BASE(CheckedStateDelegate, UAkCheckBox), 0x0010000000080000, Z_Construct_UDelegateFunction_UWidget_GetCheckBoxState__DelegateSignature());
				UProperty* NewProp_CheckedState = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CheckedState"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(CheckedState, UAkCheckBox), 0x0010000000000001, Z_Construct_UEnum_SlateCore_ECheckBoxState());
				UProperty* NewProp_CheckedState_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_CheckedState, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkCheckBox_GetAkItemId(), "GetAkItemId"); // 20779095
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkCheckBox_GetAkProperty(), "GetAkProperty"); // 1295788442
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkCheckBox_GetCheckedState(), "GetCheckedState"); // 4166160698
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkCheckBox_IsChecked(), "IsChecked"); // 2715197659
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkCheckBox_IsPressed(), "IsPressed"); // 3594907819
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty(), "SetAkBoolProperty"); // 2595900717
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkCheckBox_SetAkItemId(), "SetAkItemId"); // 1792786019
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkCheckBox_SetCheckedState(), "SetCheckedState"); // 991921515
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkCheckBox_SetIsChecked(), "SetIsChecked"); // 1925714679
				OuterClass->ClassConfigName = FName(TEXT("Editor"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UAkCheckBox> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AkWaapiUMG/Components/AkCheckBox.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkCheckBox.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("The checkbox widget allows you to display a toggled state of 'unchecked', 'checked' and\n'indeterminable.  You can use the checkbox for a classic checkbox, or as a toggle button,\nor as radio buttons.\n\n* Single Child\n* Toggle"));
				MetaData->SetValue(NewProp_OnPropertyDropped, TEXT("Category"), TEXT("Widget Event"));
				MetaData->SetValue(NewProp_OnPropertyDropped, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkCheckBox.h"));
				MetaData->SetValue(NewProp_OnPropertyDropped, TEXT("ToolTip"), TEXT("Called when the item selection changes."));
				MetaData->SetValue(NewProp_OnItemDropped, TEXT("Category"), TEXT("Widget Event"));
				MetaData->SetValue(NewProp_OnItemDropped, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkCheckBox.h"));
				MetaData->SetValue(NewProp_OnItemDropped, TEXT("ToolTip"), TEXT("Called when the item selection changes."));
				MetaData->SetValue(NewProp_AkOnCheckStateChanged, TEXT("Category"), TEXT("CheckBox|Event"));
				MetaData->SetValue(NewProp_AkOnCheckStateChanged, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkCheckBox.h"));
				MetaData->SetValue(NewProp_AkOnCheckStateChanged, TEXT("ToolTip"), TEXT("Called when the checked state has changed"));
				MetaData->SetValue(NewProp_ItemToControl, TEXT("Category"), TEXT("Wwise"));
				MetaData->SetValue(NewProp_ItemToControl, TEXT("DisplayName"), TEXT("Item to control"));
				MetaData->SetValue(NewProp_ItemToControl, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkCheckBox.h"));
				MetaData->SetValue(NewProp_ThePropertyToControl, TEXT("Category"), TEXT("Wwise"));
				MetaData->SetValue(NewProp_ThePropertyToControl, TEXT("DisplayName"), TEXT("Property to control"));
				MetaData->SetValue(NewProp_ThePropertyToControl, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkCheckBox.h"));
				MetaData->SetValue(NewProp_IsFocusable, TEXT("Category"), TEXT("Interaction"));
				MetaData->SetValue(NewProp_IsFocusable, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkCheckBox.h"));
				MetaData->SetValue(NewProp_IsFocusable, TEXT("ToolTip"), TEXT("Sometimes a button should only be mouse-clickable and never keyboard focusable."));
				MetaData->SetValue(NewProp_HorizontalAlignment, TEXT("Category"), TEXT("Appearance"));
				MetaData->SetValue(NewProp_HorizontalAlignment, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkCheckBox.h"));
				MetaData->SetValue(NewProp_HorizontalAlignment, TEXT("ToolTip"), TEXT("How the content of the toggle button should align within the given space"));
				MetaData->SetValue(NewProp_WidgetStyle, TEXT("Category"), TEXT("Style"));
				MetaData->SetValue(NewProp_WidgetStyle, TEXT("DisplayName"), TEXT("Style"));
				MetaData->SetValue(NewProp_WidgetStyle, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkCheckBox.h"));
				MetaData->SetValue(NewProp_WidgetStyle, TEXT("ToolTip"), TEXT("The checkbox bar style"));
				MetaData->SetValue(NewProp_CheckedStateDelegate, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkCheckBox.h"));
				MetaData->SetValue(NewProp_CheckedStateDelegate, TEXT("ToolTip"), TEXT("A bindable delegate for the IsChecked."));
				MetaData->SetValue(NewProp_CheckedState, TEXT("Category"), TEXT("Appearance"));
				MetaData->SetValue(NewProp_CheckedState, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkCheckBox.h"));
				MetaData->SetValue(NewProp_CheckedState, TEXT("ToolTip"), TEXT("Whether the check box is currently in a checked state"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkCheckBox, 1888802242);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkCheckBox(Z_Construct_UClass_UAkCheckBox, &UAkCheckBox::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkCheckBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkCheckBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
