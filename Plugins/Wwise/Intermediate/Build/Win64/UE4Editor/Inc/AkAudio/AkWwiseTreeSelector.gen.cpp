// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkAudioDevice.h"
#include "Classes/AkWaapiUMG/Components/AkWwiseTreeSelector.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkWwiseTreeSelector() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkWwiseTreeSelector_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkWwiseTreeSelector();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemSelectionChanged__DelegateSignature();
// End Cross Module References
	void UAkWwiseTreeSelector::StaticRegisterNativesUAkWwiseTreeSelector()
	{
	}
	UClass* Z_Construct_UClass_UAkWwiseTreeSelector_NoRegister()
	{
		return UAkWwiseTreeSelector::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkWwiseTreeSelector()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UWidget();
			Z_Construct_UPackage__Script_AkAudio();
			OuterClass = UAkWwiseTreeSelector::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00082u;


				UProperty* NewProp_OnItemDragged = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnItemDragged"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnItemDragged, UAkWwiseTreeSelector), 0x0010000010080000, Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature());
				UProperty* NewProp_OnSelectionChanged = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnSelectionChanged"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnSelectionChanged, UAkWwiseTreeSelector), 0x0010000010080000, Z_Construct_UDelegateFunction_AkAudio_OnItemSelectionChanged__DelegateSignature());
				OuterClass->ClassConfigName = FName(TEXT("Editor"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UAkWwiseTreeSelector> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AkWaapiUMG/Components/AkWwiseTreeSelector.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkWwiseTreeSelector.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("A widget that shows the Wwise tree items."));
				MetaData->SetValue(NewProp_OnItemDragged, TEXT("Category"), TEXT("Widget Event"));
				MetaData->SetValue(NewProp_OnItemDragged, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkWwiseTreeSelector.h"));
				MetaData->SetValue(NewProp_OnItemDragged, TEXT("ToolTip"), TEXT("Called when an item is dragged from the wwise tree."));
				MetaData->SetValue(NewProp_OnSelectionChanged, TEXT("Category"), TEXT("Widget Event"));
				MetaData->SetValue(NewProp_OnSelectionChanged, TEXT("ModuleRelativePath"), TEXT("Classes/AkWaapiUMG/Components/AkWwiseTreeSelector.h"));
				MetaData->SetValue(NewProp_OnSelectionChanged, TEXT("ToolTip"), TEXT("Called when the item selection changes."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkWwiseTreeSelector, 3790987425);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkWwiseTreeSelector(Z_Construct_UClass_UAkWwiseTreeSelector, &UAkWwiseTreeSelector::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkWwiseTreeSelector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkWwiseTreeSelector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
