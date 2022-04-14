// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EWeapon : uint8;
#ifdef YOURFIRSTHOURWITHUMG_InventorySubsystem_generated_h
#error "InventorySubsystem.generated.h already included, missing '#pragma once' in InventorySubsystem.h"
#endif
#define YOURFIRSTHOURWITHUMG_InventorySubsystem_generated_h

#define YourFirstHourwithUMG_Source_YourFirstHourwithUMG_Public_Services_InventorySubsystem_h_15_DELEGATE \
struct _Script_YourFirstHourwithUMG_eventWeaponChange_Parms \
{ \
	EWeapon NewWeapon; \
}; \
static inline void FWeaponChange_DelegateWrapper(const FMulticastScriptDelegate& WeaponChange, EWeapon NewWeapon) \
{ \
	_Script_YourFirstHourwithUMG_eventWeaponChange_Parms Parms; \
	Parms.NewWeapon=NewWeapon; \
	WeaponChange.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define YourFirstHourwithUMG_Source_YourFirstHourwithUMG_Public_Services_InventorySubsystem_h_20_SPARSE_DATA
#define YourFirstHourwithUMG_Source_YourFirstHourwithUMG_Public_Services_InventorySubsystem_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddWeaponToInventory); \
	DECLARE_FUNCTION(execGetCurrentWeapon); \
	DECLARE_FUNCTION(execInitializeData);


#define YourFirstHourwithUMG_Source_YourFirstHourwithUMG_Public_Services_InventorySubsystem_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddWeaponToInventory); \
	DECLARE_FUNCTION(execGetCurrentWeapon); \
	DECLARE_FUNCTION(execInitializeData);


#define YourFirstHourwithUMG_Source_YourFirstHourwithUMG_Public_Services_InventorySubsystem_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventorySubsystem(); \
	friend struct Z_Construct_UClass_UInventorySubsystem_Statics; \
public: \
	DECLARE_CLASS(UInventorySubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/YourFirstHourwithUMG"), NO_API) \
	DECLARE_SERIALIZER(UInventorySubsystem) \
	virtual UObject* _getUObject() const override { return const_cast<UInventorySubsystem*>(this); }


#define YourFirstHourwithUMG_Source_YourFirstHourwithUMG_Public_Services_InventorySubsystem_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUInventorySubsystem(); \
	friend struct Z_Construct_UClass_UInventorySubsystem_Statics; \
public: \
	DECLARE_CLASS(UInventorySubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/YourFirstHourwithUMG"), NO_API) \
	DECLARE_SERIALIZER(UInventorySubsystem) \
	virtual UObject* _getUObject() const override { return const_cast<UInventorySubsystem*>(this); }


#define YourFirstHourwithUMG_Source_YourFirstHourwithUMG_Public_Services_InventorySubsystem_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventorySubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventorySubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventorySubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventorySubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventorySubsystem(UInventorySubsystem&&); \
	NO_API UInventorySubsystem(const UInventorySubsystem&); \
public:


#define YourFirstHourwithUMG_Source_YourFirstHourwithUMG_Public_Services_InventorySubsystem_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventorySubsystem() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventorySubsystem(UInventorySubsystem&&); \
	NO_API UInventorySubsystem(const UInventorySubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventorySubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventorySubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventorySubsystem)


#define YourFirstHourwithUMG_Source_YourFirstHourwithUMG_Public_Services_InventorySubsystem_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___currentWeapon() { return STRUCT_OFFSET(UInventorySubsystem, _currentWeapon); } \
	FORCEINLINE static uint32 __PPO___weaponInventory() { return STRUCT_OFFSET(UInventorySubsystem, _weaponInventory); }


#define YourFirstHourwithUMG_Source_YourFirstHourwithUMG_Public_Services_InventorySubsystem_h_17_PROLOG
#define YourFirstHourwithUMG_Source_YourFirstHourwithUMG_Public_Services_InventorySubsystem_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	YourFirstHourwithUMG_Source_YourFirstHourwithUMG_Public_Services_InventorySubsystem_h_20_PRIVATE_PROPERTY_OFFSET \
	YourFirstHourwithUMG_Source_YourFirstHourwithUMG_Public_Services_InventorySubsystem_h_20_SPARSE_DATA \
	YourFirstHourwithUMG_Source_YourFirstHourwithUMG_Public_Services_InventorySubsystem_h_20_RPC_WRAPPERS \
	YourFirstHourwithUMG_Source_YourFirstHourwithUMG_Public_Services_InventorySubsystem_h_20_INCLASS \
	YourFirstHourwithUMG_Source_YourFirstHourwithUMG_Public_Services_InventorySubsystem_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define YourFirstHourwithUMG_Source_YourFirstHourwithUMG_Public_Services_InventorySubsystem_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	YourFirstHourwithUMG_Source_YourFirstHourwithUMG_Public_Services_InventorySubsystem_h_20_PRIVATE_PROPERTY_OFFSET \
	YourFirstHourwithUMG_Source_YourFirstHourwithUMG_Public_Services_InventorySubsystem_h_20_SPARSE_DATA \
	YourFirstHourwithUMG_Source_YourFirstHourwithUMG_Public_Services_InventorySubsystem_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	YourFirstHourwithUMG_Source_YourFirstHourwithUMG_Public_Services_InventorySubsystem_h_20_INCLASS_NO_PURE_DECLS \
	YourFirstHourwithUMG_Source_YourFirstHourwithUMG_Public_Services_InventorySubsystem_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YOURFIRSTHOURWITHUMG_API UClass* StaticClass<class UInventorySubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID YourFirstHourwithUMG_Source_YourFirstHourwithUMG_Public_Services_InventorySubsystem_h


#define FOREACH_ENUM_EWEAPON(op) \
	op(EWeapon::Pistol) \
	op(EWeapon::Rifle) 

enum class EWeapon : uint8;
template<> YOURFIRSTHOURWITHUMG_API UEnum* StaticEnum<EWeapon>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
