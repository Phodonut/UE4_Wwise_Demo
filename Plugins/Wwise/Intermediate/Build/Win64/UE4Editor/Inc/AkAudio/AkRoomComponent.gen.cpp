// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkAudioDevice.h"
#include "Classes/AkRoomComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkRoomComponent() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkRoomComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkRoomComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkRoomComponent::StaticRegisterNativesUAkRoomComponent()
	{
	}
	UClass* Z_Construct_UClass_UAkRoomComponent_NoRegister()
	{
		return UAkRoomComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkRoomComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USceneComponent();
			Z_Construct_UPackage__Script_AkAudio();
			OuterClass = UAkRoomComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;


				UProperty* NewProp_WallOcclusion = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WallOcclusion"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(WallOcclusion, UAkRoomComponent), 0x0010000000000005);
				UProperty* NewProp_Priority = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Priority"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Priority, UAkRoomComponent), 0x0010000000000005);
				UProperty* NewProp_NextLowerPriorityComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("NextLowerPriorityComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(NextLowerPriorityComponent, UAkRoomComponent), 0x0010000000082008, Z_Construct_UClass_UAkRoomComponent_NoRegister());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnable, UAkRoomComponent);
				UProperty* NewProp_bEnable = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bEnable"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnable, UAkRoomComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bEnable, UAkRoomComponent), sizeof(uint8), false);
				static TCppClassTypeInfo<TCppClassTypeTraits<UAkRoomComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Audiokinetic"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Transform Rendering Mobility LOD Component Activation Tags Trigger PhysicsVolume"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AkRoomComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/AkRoomComponent.h"));
				MetaData->SetValue(NewProp_WallOcclusion, TEXT("Category"), TEXT("Room"));
				MetaData->SetValue(NewProp_WallOcclusion, TEXT("ModuleRelativePath"), TEXT("Classes/AkRoomComponent.h"));
				MetaData->SetValue(NewProp_WallOcclusion, TEXT("ToolTip"), TEXT("Used to set the occlusion value in wwise, on emitters in the room, when no audio paths to the listener are found via sound propagation in Wwise Spatial Audio.\nThis value can be thought of as 'thickness', as it relates to how much sound energy is transmitted through the wall.\nValid range 0.0f-1.0f, and is mapped to the occlusion curve as defined in the Wwise project."));
				MetaData->SetValue(NewProp_Priority, TEXT("Category"), TEXT("Room"));
				MetaData->SetValue(NewProp_Priority, TEXT("ModuleRelativePath"), TEXT("Classes/AkRoomComponent.h"));
				MetaData->SetValue(NewProp_Priority, TEXT("ToolTip"), TEXT("The precedence in which the Rooms will be applied. In the case of overlapping rooms, only the one\nwith the highest priority is chosen. If two or more overlapping rooms have the same\npriority, the chosen room is unpredictable."));
				MetaData->SetValue(NewProp_NextLowerPriorityComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_NextLowerPriorityComponent, TEXT("ModuleRelativePath"), TEXT("Classes/AkRoomComponent.h"));
				MetaData->SetValue(NewProp_NextLowerPriorityComponent, TEXT("ToolTip"), TEXT("We keep a  linked list of ReverbVolumes sorted by priority for faster finding of reverb volumes at a specific location.\n    This points to the next volume in the list."));
				MetaData->SetValue(NewProp_bEnable, TEXT("Category"), TEXT("Toggle"));
				MetaData->SetValue(NewProp_bEnable, TEXT("DisplayName"), TEXT("Enable Room"));
				MetaData->SetValue(NewProp_bEnable, TEXT("ModuleRelativePath"), TEXT("Classes/AkRoomComponent.h"));
				MetaData->SetValue(NewProp_bEnable, TEXT("ToolTip"), TEXT("Whether this volume is currently enabled and able to affect sounds"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkRoomComponent, 1779981190);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkRoomComponent(Z_Construct_UClass_UAkRoomComponent, &UAkRoomComponent::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkRoomComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkRoomComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
