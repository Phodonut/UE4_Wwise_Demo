// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/AudiokineticToolsPrivatePCH.h"
#include "Classes/ActorFactoryAkAmbientSound.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryAkAmbientSound() {}
// Cross Module References
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UActorFactoryAkAmbientSound_NoRegister();
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UActorFactoryAkAmbientSound();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_AudiokineticTools();
// End Cross Module References
	void UActorFactoryAkAmbientSound::StaticRegisterNativesUActorFactoryAkAmbientSound()
	{
	}
	UClass* Z_Construct_UClass_UActorFactoryAkAmbientSound_NoRegister()
	{
		return UActorFactoryAkAmbientSound::StaticClass();
	}
	UClass* Z_Construct_UClass_UActorFactoryAkAmbientSound()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorFactory();
			Z_Construct_UPackage__Script_AudiokineticTools();
			OuterClass = UActorFactoryAkAmbientSound::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x2008308Cu;


				OuterClass->ClassConfigName = FName(TEXT("Editor"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UActorFactoryAkAmbientSound> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ActorFactoryAkAmbientSound.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/ActorFactoryAkAmbientSound.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("UActorFactoryAkAmbientSound"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorFactoryAkAmbientSound, 2632200590);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorFactoryAkAmbientSound(Z_Construct_UClass_UActorFactoryAkAmbientSound, &UActorFactoryAkAmbientSound::StaticClass, TEXT("/Script/AudiokineticTools"), TEXT("UActorFactoryAkAmbientSound"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryAkAmbientSound);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION