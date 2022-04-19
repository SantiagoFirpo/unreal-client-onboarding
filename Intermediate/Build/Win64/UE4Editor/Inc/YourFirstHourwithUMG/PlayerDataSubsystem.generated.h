// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YOURFIRSTHOURWITHUMG_PlayerDataSubsystem_generated_h
#error "PlayerDataSubsystem.generated.h already included, missing '#pragma once' in PlayerDataSubsystem.h"
#endif
#define YOURFIRSTHOURWITHUMG_PlayerDataSubsystem_generated_h

#define YourFirstHourwithUMG_Source_YourFirstHourwithUMG_Public_PlayerDataSubsystem_h_9_DELEGATE \
struct _Script_YourFirstHourwithUMG_eventHealthChangeEvent_Parms \
{ \
	float NewValue; \
}; \
static inline void FHealthChangeEvent_DelegateWrapper(const FMulticastScriptDelegate& HealthChangeEvent, const float NewValue) \
{ \
	_Script_YourFirstHourwithUMG_eventHealthChangeEvent_Parms Parms; \
	Parms.NewValue=NewValue; \
	HealthChangeEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define YourFirstHourwithUMG_Source_YourFirstHourwithUMG_Public_PlayerDataSubsystem_h_8_DELEGATE \
struct _Script_YourFirstHourwithUMG_eventAmmoChangeEvent_Parms \
{ \
	int32 NewValue; \
}; \
static inline void FAmmoChangeEvent_DelegateWrapper(const FMulticastScriptDelegate& AmmoChangeEvent, const int32 NewValue) \
{ \
	_Script_YourFirstHourwithUMG_eventAmmoChangeEvent_Parms Parms; \
	Parms.NewValue=NewValue; \
	AmmoChangeEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define YourFirstHourwithUMG_Source_YourFirstHourwithUMG_Public_PlayerDataSubsystem_h_17_SPARSE_DATA
#define YourFirstHourwithUMG_Source_YourFirstHourwithUMG_Public_PlayerDataSubsystem_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeHealth); \
	DECLARE_FUNCTION(execChangeAmmo); \
	DECLARE_FUNCTION(execInitializeData);


#define YourFirstHourwithUMG_Source_YourFirstHourwithUMG_Public_PlayerDataSubsystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeHealth); \
	DECLARE_FUNCTION(execChangeAmmo); \
	DECLARE_FUNCTION(execInitializeData);


#define YourFirstHourwithUMG_Source_YourFirstHourwithUMG_Public_PlayerDataSubsystem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerDataSubsystem(); \
	friend struct Z_Construct_UClass_UPlayerDataSubsystem_Statics; \
public: \
	DECLARE_CLASS(UPlayerDataSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/YourFirstHourwithUMG"), NO_API) \
	DECLARE_SERIALIZER(UPlayerDataSubsystem)


#define YourFirstHourwithUMG_Source_YourFirstHourwithUMG_Public_PlayerDataSubsystem_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerDataSubsystem(); \
	friend struct Z_Construct_UClass_UPlayerDataSubsystem_Statics; \
public: \
	DECLARE_CLASS(UPlayerDataSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/YourFirstHourwithUMG"), NO_API) \
	DECLARE_SERIALIZER(UPlayerDataSubsystem)


#define YourFirstHourwithUMG_Source_YourFirstHourwithUMG_Public_PlayerDataSubsystem_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerDataSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerDataSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerDataSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerDataSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerDataSubsystem(UPlayerDataSubsystem&&); \
	NO_API UPlayerDataSubsystem(const UPlayerDataSubsystem&); \
public:


#define YourFirstHourwithUMG_Source_YourFirstHourwithUMG_Public_PlayerDataSubsystem_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerDataSubsystem() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerDataSubsystem(UPlayerDataSubsystem&&); \
	NO_API UPlayerDataSubsystem(const UPlayerDataSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerDataSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerDataSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerDataSubsystem)


#define YourFirstHourwithUMG_Source_YourFirstHourwithUMG_Public_PlayerDataSubsystem_h_17_PRIVATE_PROPERTY_OFFSET
#define YourFirstHourwithUMG_Source_YourFirstHourwithUMG_Public_PlayerDataSubsystem_h_14_PROLOG
#define YourFirstHourwithUMG_Source_YourFirstHourwithUMG_Public_PlayerDataSubsystem_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	YourFirstHourwithUMG_Source_YourFirstHourwithUMG_Public_PlayerDataSubsystem_h_17_PRIVATE_PROPERTY_OFFSET \
	YourFirstHourwithUMG_Source_YourFirstHourwithUMG_Public_PlayerDataSubsystem_h_17_SPARSE_DATA \
	YourFirstHourwithUMG_Source_YourFirstHourwithUMG_Public_PlayerDataSubsystem_h_17_RPC_WRAPPERS \
	YourFirstHourwithUMG_Source_YourFirstHourwithUMG_Public_PlayerDataSubsystem_h_17_INCLASS \
	YourFirstHourwithUMG_Source_YourFirstHourwithUMG_Public_PlayerDataSubsystem_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define YourFirstHourwithUMG_Source_YourFirstHourwithUMG_Public_PlayerDataSubsystem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	YourFirstHourwithUMG_Source_YourFirstHourwithUMG_Public_PlayerDataSubsystem_h_17_PRIVATE_PROPERTY_OFFSET \
	YourFirstHourwithUMG_Source_YourFirstHourwithUMG_Public_PlayerDataSubsystem_h_17_SPARSE_DATA \
	YourFirstHourwithUMG_Source_YourFirstHourwithUMG_Public_PlayerDataSubsystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	YourFirstHourwithUMG_Source_YourFirstHourwithUMG_Public_PlayerDataSubsystem_h_17_INCLASS_NO_PURE_DECLS \
	YourFirstHourwithUMG_Source_YourFirstHourwithUMG_Public_PlayerDataSubsystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YOURFIRSTHOURWITHUMG_API UClass* StaticClass<class UPlayerDataSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID YourFirstHourwithUMG_Source_YourFirstHourwithUMG_Public_PlayerDataSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
