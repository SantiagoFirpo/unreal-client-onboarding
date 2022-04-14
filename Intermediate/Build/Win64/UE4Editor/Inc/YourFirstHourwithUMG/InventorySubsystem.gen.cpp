// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YourFirstHourwithUMG/Public/Services/InventorySubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventorySubsystem() {}
// Cross Module References
	YOURFIRSTHOURWITHUMG_API UFunction* Z_Construct_UDelegateFunction_YourFirstHourwithUMG_WeaponChange__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_YourFirstHourwithUMG();
	YOURFIRSTHOURWITHUMG_API UEnum* Z_Construct_UEnum_YourFirstHourwithUMG_EWeapon();
	YOURFIRSTHOURWITHUMG_API UClass* Z_Construct_UClass_UInventorySubsystem_NoRegister();
	YOURFIRSTHOURWITHUMG_API UClass* Z_Construct_UClass_UInventorySubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	YOURFIRSTHOURWITHUMG_API UClass* Z_Construct_UClass_UNonPersistent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_YourFirstHourwithUMG_WeaponChange__DelegateSignature_Statics
	{
		struct _Script_YourFirstHourwithUMG_eventWeaponChange_Parms
		{
			EWeapon NewWeapon;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewWeapon_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewWeapon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_YourFirstHourwithUMG_WeaponChange__DelegateSignature_Statics::NewProp_NewWeapon_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_YourFirstHourwithUMG_WeaponChange__DelegateSignature_Statics::NewProp_NewWeapon = { "NewWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_YourFirstHourwithUMG_eventWeaponChange_Parms, NewWeapon), Z_Construct_UEnum_YourFirstHourwithUMG_EWeapon, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_YourFirstHourwithUMG_WeaponChange__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_YourFirstHourwithUMG_WeaponChange__DelegateSignature_Statics::NewProp_NewWeapon_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_YourFirstHourwithUMG_WeaponChange__DelegateSignature_Statics::NewProp_NewWeapon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_YourFirstHourwithUMG_WeaponChange__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Services/InventorySubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_YourFirstHourwithUMG_WeaponChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_YourFirstHourwithUMG, nullptr, "WeaponChange__DelegateSignature", nullptr, nullptr, sizeof(_Script_YourFirstHourwithUMG_eventWeaponChange_Parms), Z_Construct_UDelegateFunction_YourFirstHourwithUMG_WeaponChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_YourFirstHourwithUMG_WeaponChange__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_YourFirstHourwithUMG_WeaponChange__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_YourFirstHourwithUMG_WeaponChange__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_YourFirstHourwithUMG_WeaponChange__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_YourFirstHourwithUMG_WeaponChange__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EWeapon_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_YourFirstHourwithUMG_EWeapon, Z_Construct_UPackage__Script_YourFirstHourwithUMG(), TEXT("EWeapon"));
		}
		return Singleton;
	}
	template<> YOURFIRSTHOURWITHUMG_API UEnum* StaticEnum<EWeapon>()
	{
		return EWeapon_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWeapon(EWeapon_StaticEnum, TEXT("/Script/YourFirstHourwithUMG"), TEXT("EWeapon"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_YourFirstHourwithUMG_EWeapon_Hash() { return 4071618903U; }
	UEnum* Z_Construct_UEnum_YourFirstHourwithUMG_EWeapon()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_YourFirstHourwithUMG();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWeapon"), 0, Get_Z_Construct_UEnum_YourFirstHourwithUMG_EWeapon_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWeapon::Pistol", (int64)EWeapon::Pistol },
				{ "EWeapon::Rifle", (int64)EWeapon::Rifle },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Services/InventorySubsystem.h" },
				{ "Pistol.Name", "EWeapon::Pistol" },
				{ "Rifle.Name", "EWeapon::Rifle" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_YourFirstHourwithUMG,
				nullptr,
				"EWeapon",
				"EWeapon",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UInventorySubsystem::execAddWeaponToInventory)
	{
		P_GET_ENUM(EWeapon,Z_Param_NewWeapon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddWeaponToInventory(EWeapon(Z_Param_NewWeapon));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventorySubsystem::execGetCurrentWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EWeapon*)Z_Param__Result=P_THIS->GetCurrentWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventorySubsystem::execInitializeData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeData();
		P_NATIVE_END;
	}
	void UInventorySubsystem::StaticRegisterNativesUInventorySubsystem()
	{
		UClass* Class = UInventorySubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddWeaponToInventory", &UInventorySubsystem::execAddWeaponToInventory },
			{ "GetCurrentWeapon", &UInventorySubsystem::execGetCurrentWeapon },
			{ "InitializeData", &UInventorySubsystem::execInitializeData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInventorySubsystem_AddWeaponToInventory_Statics
	{
		struct InventorySubsystem_eventAddWeaponToInventory_Parms
		{
			EWeapon NewWeapon;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewWeapon_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewWeapon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInventorySubsystem_AddWeaponToInventory_Statics::NewProp_NewWeapon_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInventorySubsystem_AddWeaponToInventory_Statics::NewProp_NewWeapon = { "NewWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventorySubsystem_eventAddWeaponToInventory_Parms, NewWeapon), Z_Construct_UEnum_YourFirstHourwithUMG_EWeapon, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventorySubsystem_AddWeaponToInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventorySubsystem_AddWeaponToInventory_Statics::NewProp_NewWeapon_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventorySubsystem_AddWeaponToInventory_Statics::NewProp_NewWeapon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventorySubsystem_AddWeaponToInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Services/InventorySubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventorySubsystem_AddWeaponToInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventorySubsystem, nullptr, "AddWeaponToInventory", nullptr, nullptr, sizeof(InventorySubsystem_eventAddWeaponToInventory_Parms), Z_Construct_UFunction_UInventorySubsystem_AddWeaponToInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventorySubsystem_AddWeaponToInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventorySubsystem_AddWeaponToInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventorySubsystem_AddWeaponToInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventorySubsystem_AddWeaponToInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventorySubsystem_AddWeaponToInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventorySubsystem_GetCurrentWeapon_Statics
	{
		struct InventorySubsystem_eventGetCurrentWeapon_Parms
		{
			EWeapon ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInventorySubsystem_GetCurrentWeapon_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInventorySubsystem_GetCurrentWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventorySubsystem_eventGetCurrentWeapon_Parms, ReturnValue), Z_Construct_UEnum_YourFirstHourwithUMG_EWeapon, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventorySubsystem_GetCurrentWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventorySubsystem_GetCurrentWeapon_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventorySubsystem_GetCurrentWeapon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventorySubsystem_GetCurrentWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Services/InventorySubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventorySubsystem_GetCurrentWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventorySubsystem, nullptr, "GetCurrentWeapon", nullptr, nullptr, sizeof(InventorySubsystem_eventGetCurrentWeapon_Parms), Z_Construct_UFunction_UInventorySubsystem_GetCurrentWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventorySubsystem_GetCurrentWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventorySubsystem_GetCurrentWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventorySubsystem_GetCurrentWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventorySubsystem_GetCurrentWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventorySubsystem_GetCurrentWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventorySubsystem_InitializeData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventorySubsystem_InitializeData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Services/InventorySubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventorySubsystem_InitializeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventorySubsystem, nullptr, "InitializeData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventorySubsystem_InitializeData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventorySubsystem_InitializeData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventorySubsystem_InitializeData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventorySubsystem_InitializeData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInventorySubsystem_NoRegister()
	{
		return UInventorySubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UInventorySubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__currentWeapon_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__currentWeapon;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__weaponInventory_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__weaponInventory_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__weaponInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__weaponInventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnWeaponChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWeaponChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventorySubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_YourFirstHourwithUMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInventorySubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventorySubsystem_AddWeaponToInventory, "AddWeaponToInventory" }, // 2080433645
		{ &Z_Construct_UFunction_UInventorySubsystem_GetCurrentWeapon, "GetCurrentWeapon" }, // 798457787
		{ &Z_Construct_UFunction_UInventorySubsystem_InitializeData, "InitializeData" }, // 1599541567
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventorySubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Services/InventorySubsystem.h" },
		{ "ModuleRelativePath", "Public/Services/InventorySubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInventorySubsystem_Statics::NewProp__currentWeapon_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventorySubsystem_Statics::NewProp__currentWeapon_MetaData[] = {
		{ "ModuleRelativePath", "Public/Services/InventorySubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInventorySubsystem_Statics::NewProp__currentWeapon = { "_currentWeapon", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventorySubsystem, _currentWeapon), Z_Construct_UEnum_YourFirstHourwithUMG_EWeapon, METADATA_PARAMS(Z_Construct_UClass_UInventorySubsystem_Statics::NewProp__currentWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySubsystem_Statics::NewProp__currentWeapon_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInventorySubsystem_Statics::NewProp__weaponInventory_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInventorySubsystem_Statics::NewProp__weaponInventory_Inner = { "_weaponInventory", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_YourFirstHourwithUMG_EWeapon, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventorySubsystem_Statics::NewProp__weaponInventory_MetaData[] = {
		{ "ModuleRelativePath", "Public/Services/InventorySubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventorySubsystem_Statics::NewProp__weaponInventory = { "_weaponInventory", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventorySubsystem, _weaponInventory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInventorySubsystem_Statics::NewProp__weaponInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySubsystem_Statics::NewProp__weaponInventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventorySubsystem_Statics::NewProp_OnWeaponChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/Services/InventorySubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventorySubsystem_Statics::NewProp_OnWeaponChanged = { "OnWeaponChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventorySubsystem, OnWeaponChanged), Z_Construct_UDelegateFunction_YourFirstHourwithUMG_WeaponChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInventorySubsystem_Statics::NewProp_OnWeaponChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySubsystem_Statics::NewProp_OnWeaponChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventorySubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySubsystem_Statics::NewProp__currentWeapon_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySubsystem_Statics::NewProp__currentWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySubsystem_Statics::NewProp__weaponInventory_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySubsystem_Statics::NewProp__weaponInventory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySubsystem_Statics::NewProp__weaponInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySubsystem_Statics::NewProp_OnWeaponChanged,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UInventorySubsystem_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNonPersistent_NoRegister, (int32)VTABLE_OFFSET(UInventorySubsystem, INonPersistent), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventorySubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventorySubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInventorySubsystem_Statics::ClassParams = {
		&UInventorySubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInventorySubsystem_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySubsystem_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInventorySubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventorySubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInventorySubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInventorySubsystem, 4211483418);
	template<> YOURFIRSTHOURWITHUMG_API UClass* StaticClass<UInventorySubsystem>()
	{
		return UInventorySubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInventorySubsystem(Z_Construct_UClass_UInventorySubsystem, &UInventorySubsystem::StaticClass, TEXT("/Script/YourFirstHourwithUMG"), TEXT("UInventorySubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventorySubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
