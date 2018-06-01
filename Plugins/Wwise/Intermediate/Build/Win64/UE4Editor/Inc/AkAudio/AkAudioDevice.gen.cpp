// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkAudioDevice.h"
#include "Public/AkAudioDevice.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAudioDevice() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkMultiPositionType();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkChannelConfiguration();
// End Cross Module References
static UEnum* AkMultiPositionType_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_AkMultiPositionType, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkMultiPositionType"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_AkMultiPositionType(AkMultiPositionType_StaticEnum, TEXT("/Script/AkAudio"), TEXT("AkMultiPositionType"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_AkAudio_AkMultiPositionType()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		extern uint32 Get_Z_Construct_UEnum_AkAudio_AkMultiPositionType_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("AkMultiPositionType"), 0, Get_Z_Construct_UEnum_AkAudio_AkMultiPositionType_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AkMultiPositionType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("AkMultiPositionType::SingleSource"), 0);
			EnumNames.Emplace(TEXT("AkMultiPositionType::MultiSources"), 1);
			EnumNames.Emplace(TEXT("AkMultiPositionType::MultiDirections"), 2);
			EnumNames.Emplace(TEXT("AkMultiPositionType::AkMultiPositionType_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("AkMultiPositionType");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/AkAudioDevice.h"));
			MetaData->SetValue(ReturnEnum, TEXT("MultiDirections.ToolTip"), TEXT("AK::SoundEngine::MultiPositionType_MultiSources,"));
			MetaData->SetValue(ReturnEnum, TEXT("MultiSources.ToolTip"), TEXT("AK::SoundEngine::MultiPositionType_SingleSource,"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_AkAudio_AkMultiPositionType_CRC() { return 2704703217U; }
static UEnum* AkChannelConfiguration_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_AkChannelConfiguration, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkChannelConfiguration"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_AkChannelConfiguration(AkChannelConfiguration_StaticEnum, TEXT("/Script/AkAudio"), TEXT("AkChannelConfiguration"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_AkAudio_AkChannelConfiguration()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		extern uint32 Get_Z_Construct_UEnum_AkAudio_AkChannelConfiguration_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("AkChannelConfiguration"), 0, Get_Z_Construct_UEnum_AkAudio_AkChannelConfiguration_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AkChannelConfiguration"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("AkChannelConfiguration::Ak_Parent"), 0);
			EnumNames.Emplace(TEXT("AkChannelConfiguration::Ak_LFE"), 1);
			EnumNames.Emplace(TEXT("AkChannelConfiguration::Ak_1_0"), 2);
			EnumNames.Emplace(TEXT("AkChannelConfiguration::Ak_2_0"), 3);
			EnumNames.Emplace(TEXT("AkChannelConfiguration::Ak_2_1"), 4);
			EnumNames.Emplace(TEXT("AkChannelConfiguration::Ak_3_0"), 5);
			EnumNames.Emplace(TEXT("AkChannelConfiguration::Ak_3_1"), 6);
			EnumNames.Emplace(TEXT("AkChannelConfiguration::Ak_4_0"), 7);
			EnumNames.Emplace(TEXT("AkChannelConfiguration::Ak_4_1"), 8);
			EnumNames.Emplace(TEXT("AkChannelConfiguration::Ak_5_0"), 9);
			EnumNames.Emplace(TEXT("AkChannelConfiguration::Ak_5_1"), 10);
			EnumNames.Emplace(TEXT("AkChannelConfiguration::Ak_7_1"), 11);
			EnumNames.Emplace(TEXT("AkChannelConfiguration::Ak_5_1_2"), 12);
			EnumNames.Emplace(TEXT("AkChannelConfiguration::Ak_7_1_2"), 13);
			EnumNames.Emplace(TEXT("AkChannelConfiguration::Ak_7_1_4"), 14);
			EnumNames.Emplace(TEXT("AkChannelConfiguration::Ak_Auro_9_1"), 15);
			EnumNames.Emplace(TEXT("AkChannelConfiguration::Ak_Auro_10_1"), 16);
			EnumNames.Emplace(TEXT("AkChannelConfiguration::Ak_Auro_11_1"), 17);
			EnumNames.Emplace(TEXT("AkChannelConfiguration::Ak_Auro_13_1"), 18);
			EnumNames.Emplace(TEXT("AkChannelConfiguration::Ak_Ambisonics_1st_order"), 19);
			EnumNames.Emplace(TEXT("AkChannelConfiguration::Ak_Ambisonics_2nd_order"), 20);
			EnumNames.Emplace(TEXT("AkChannelConfiguration::Ak_Ambisonics_3rd_order"), 21);
			EnumNames.Emplace(TEXT("AkChannelConfiguration::Ak_MAX"), 22);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("AkChannelConfiguration");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/AkAudioDevice.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_AkAudio_AkChannelConfiguration_CRC() { return 1899923437U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
