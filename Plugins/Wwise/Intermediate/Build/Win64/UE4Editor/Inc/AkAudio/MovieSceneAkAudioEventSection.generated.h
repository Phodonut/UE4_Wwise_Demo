// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_MovieSceneAkAudioEventSection_generated_h
#error "MovieSceneAkAudioEventSection.generated.h already included, missing '#pragma once' in MovieSceneAkAudioEventSection.h"
#endif
#define AKAUDIO_MovieSceneAkAudioEventSection_generated_h

#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventSection_h_29_RPC_WRAPPERS
#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventSection_h_29_RPC_WRAPPERS_NO_PURE_DECLS
#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventSection_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneAkAudioEventSection(); \
	friend AKAUDIO_API class UClass* Z_Construct_UClass_UMovieSceneAkAudioEventSection(); \
public: \
	DECLARE_CLASS(UMovieSceneAkAudioEventSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AkAudio"), AKAUDIO_API) \
	DECLARE_SERIALIZER(UMovieSceneAkAudioEventSection) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventSection_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneAkAudioEventSection(); \
	friend AKAUDIO_API class UClass* Z_Construct_UClass_UMovieSceneAkAudioEventSection(); \
public: \
	DECLARE_CLASS(UMovieSceneAkAudioEventSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AkAudio"), AKAUDIO_API) \
	DECLARE_SERIALIZER(UMovieSceneAkAudioEventSection) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventSection_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AKAUDIO_API UMovieSceneAkAudioEventSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneAkAudioEventSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AKAUDIO_API, UMovieSceneAkAudioEventSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneAkAudioEventSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AKAUDIO_API UMovieSceneAkAudioEventSection(UMovieSceneAkAudioEventSection&&); \
	AKAUDIO_API UMovieSceneAkAudioEventSection(const UMovieSceneAkAudioEventSection&); \
public:


#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventSection_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AKAUDIO_API UMovieSceneAkAudioEventSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AKAUDIO_API UMovieSceneAkAudioEventSection(UMovieSceneAkAudioEventSection&&); \
	AKAUDIO_API UMovieSceneAkAudioEventSection(const UMovieSceneAkAudioEventSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AKAUDIO_API, UMovieSceneAkAudioEventSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneAkAudioEventSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneAkAudioEventSection)


#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventSection_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Event() { return STRUCT_OFFSET(UMovieSceneAkAudioEventSection, Event); } \
	FORCEINLINE static uint32 __PPO__RetriggerEvent() { return STRUCT_OFFSET(UMovieSceneAkAudioEventSection, RetriggerEvent); } \
	FORCEINLINE static uint32 __PPO__ScrubTailLengthMs() { return STRUCT_OFFSET(UMovieSceneAkAudioEventSection, ScrubTailLengthMs); } \
	FORCEINLINE static uint32 __PPO__StopAtSectionEnd() { return STRUCT_OFFSET(UMovieSceneAkAudioEventSection, StopAtSectionEnd); } \
	FORCEINLINE static uint32 __PPO__EventName() { return STRUCT_OFFSET(UMovieSceneAkAudioEventSection, EventName); } \
	FORCEINLINE static uint32 __PPO__MaxSourceDuration() { return STRUCT_OFFSET(UMovieSceneAkAudioEventSection, MaxSourceDuration); } \
	FORCEINLINE static uint32 __PPO__MaxDurationSourceID() { return STRUCT_OFFSET(UMovieSceneAkAudioEventSection, MaxDurationSourceID); }


#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventSection_h_26_PROLOG
#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventSection_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventSection_h_29_PRIVATE_PROPERTY_OFFSET \
	UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventSection_h_29_RPC_WRAPPERS \
	UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventSection_h_29_INCLASS \
	UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventSection_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventSection_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventSection_h_29_PRIVATE_PROPERTY_OFFSET \
	UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventSection_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventSection_h_29_INCLASS_NO_PURE_DECLS \
	UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventSection_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4_Wwise_Startup_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
