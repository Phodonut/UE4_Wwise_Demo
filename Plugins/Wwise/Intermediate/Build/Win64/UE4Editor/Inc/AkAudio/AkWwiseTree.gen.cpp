// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkAudioDevice.h"
#include "Classes/AkWaapiUMG/Components/AkWwiseTree.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkWwiseTree() {}
// Cross Module References
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemSelectionChanged__DelegateSignature();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWwiseTree_GetSearchText();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkWwiseTree();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWwiseTree_GetSelectedItem();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWwiseObjectDetails();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWwiseTree_SetSearchText();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkWwiseTree_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature()
	{
		struct _Script_AkAudio_eventOnItemDragDetected_Parms
		{
			FGuid ItemDraggedID;
			FString ItemDraggedName;
		};
		UObject* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnItemDragDetected__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535, sizeof(_Script_AkAudio_eventOnItemDragDetected_Parms));
			UProperty* NewProp_ItemDraggedName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ItemDraggedName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ItemDraggedName, _Script_AkAudio_eventOnItemDragDetected_Parms), 0x0010000000000080);
			UProperty* NewProp_ItemDraggedID = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ItemDraggedID"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ItemDraggedID, _Script_AkAudio_eventOnItemDragDetected_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FGuid());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkWwiseTree.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("A delegate type invoked when an item is being dragged."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemSelectionChanged__DelegateSignature()
	{
		struct _Script_AkAudio_eventOnItemSelectionChanged_Parms
		{
			FGuid ItemSelectedID;
		};
		UObject* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnItemSelectionChanged__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535, sizeof(_Script_AkAudio_eventOnItemSelectionChanged_Parms));
			UProperty* NewProp_ItemSelectedID = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ItemSelectedID"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ItemSelectedID, _Script_AkAudio_eventOnItemSelectionChanged_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FGuid());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkWwiseTree.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("A delegate type invoked when a selection changes somewhere."));
#endif
		}
		return ReturnFunction;
	}
	void UAkWwiseTree::StaticRegisterNativesUAkWwiseTree()
	{
		UClass* Class = UAkWwiseTree::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetSearchText", (Native)&UAkWwiseTree::execGetSearchText },
			{ "GetSelectedItem", (Native)&UAkWwiseTree::execGetSelectedItem },
			{ "SetSearchText", (Native)&UAkWwiseTree::execSetSearchText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UAkWwiseTree_GetSearchText()
	{
		struct AkWwiseTree_eventGetSearchText_Parms
		{
			FString ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkWwiseTree();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetSearchText"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020409, 65535, sizeof(AkWwiseTree_eventGetSearchText_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReturnValue, AkWwiseTree_eventGetSearchText_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkWwiseTree.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("returns the current text of the searchBox"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkWwiseTree_GetSelectedItem()
	{
		struct AkWwiseTree_eventGetSelectedItem_Parms
		{
			FAkWwiseObjectDetails ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkWwiseTree();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetSelectedItem"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020409, 65535, sizeof(AkWwiseTree_eventGetSelectedItem_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, AkWwiseTree_eventGetSelectedItem_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FAkWwiseObjectDetails());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkWwiseTree.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns all properties currently selected in the Wwise properties list"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkWwiseTree_SetSearchText()
	{
		struct AkWwiseTree_eventSetSearchText_Parms
		{
			FString newText;
		};
		UObject* Outer = Z_Construct_UClass_UAkWwiseTree();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetSearchText"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020409, 65535, sizeof(AkWwiseTree_eventSetSearchText_Parms));
			UProperty* NewProp_newText = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("newText"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(newText, AkWwiseTree_eventSetSearchText_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkWwiseTree.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("sets the current text of the searchBox"));
			MetaData->SetValue(NewProp_newText, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkWwiseTree_NoRegister()
	{
		return UAkWwiseTree::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkWwiseTree()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UWidget();
			Z_Construct_UPackage__Script_AkAudio();
			OuterClass = UAkWwiseTree::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00082u;

				OuterClass->LinkChild(Z_Construct_UFunction_UAkWwiseTree_GetSearchText());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkWwiseTree_GetSelectedItem());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkWwiseTree_SetSearchText());

				UProperty* NewProp_OnItemDragged = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnItemDragged"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnItemDragged, UAkWwiseTree), 0x0010000010080000, Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature());
				UProperty* NewProp_OnSelectionChanged = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnSelectionChanged"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnSelectionChanged, UAkWwiseTree), 0x0010000010080000, Z_Construct_UDelegateFunction_AkAudio_OnItemSelectionChanged__DelegateSignature());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkWwiseTree_GetSearchText(), "GetSearchText"); // 3625642210
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkWwiseTree_GetSelectedItem(), "GetSelectedItem"); // 1499404221
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkWwiseTree_SetSearchText(), "SetSearchText"); // 3949960022
				OuterClass->ClassConfigName = FName(TEXT("Editor"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UAkWwiseTree> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AkWaapiUMG/Components/AkWwiseTree.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkWwiseTree.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("A widget that shows the Wwise tree items."));
				MetaData->SetValue(NewProp_OnItemDragged, TEXT("Category"), TEXT("Widget Event"));
				MetaData->SetValue(NewProp_OnItemDragged, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkWwiseTree.h"));
				MetaData->SetValue(NewProp_OnItemDragged, TEXT("ToolTip"), TEXT("Called when an item is dragged from the wwise tree."));
				MetaData->SetValue(NewProp_OnSelectionChanged, TEXT("Category"), TEXT("Widget Event"));
				MetaData->SetValue(NewProp_OnSelectionChanged, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkWwiseTree.h"));
				MetaData->SetValue(NewProp_OnSelectionChanged, TEXT("ToolTip"), TEXT("Called when the item selection changes."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkWwiseTree, 2148176994);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkWwiseTree(Z_Construct_UClass_UAkWwiseTree, &UAkWwiseTree::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkWwiseTree"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkWwiseTree);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
