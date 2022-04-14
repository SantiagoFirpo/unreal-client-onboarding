// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YourFirstHourwithUMG/Public/PlayerDataSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerDataSubsystem() {}
// Cross Module References
	YOURFIRSTHOURWITHUMG_API UClass* Z_Construct_UClass_UPlayerDataSubsystem_NoRegister();
	YOURFIRSTHOURWITHUMG_API UClass* Z_Construct_UClass_UPlayerDataSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_YourFirstHourwithUMG();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPlayerDataSubsystem::execGetPlayerDataSubsystem)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayerDataSubsystem**)Z_Param__Result=UPlayerDataSubsystem::GetPlayerDataSubsystem(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerDataSubsystem::execChangeHealth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeHealth(Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerDataSubsystem::execChangeAmmo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeAmmo(Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerDataSubsystem::execInitializeData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeData();
		P_NATIVE_END;
	}
	void UPlayerDataSubsystem::StaticRegisterNativesUPlayerDataSubsystem()
	{
		UClass* Class = UPlayerDataSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeAmmo", &UPlayerDataSubsystem::execChangeAmmo },
			{ "ChangeHealth", &UPlayerDataSubsystem::execChangeHealth },
			{ "GetPlayerDataSubsystem", &UPlayerDataSubsystem::execGetPlayerDataSubsystem },
			{ "InitializeData", &UPlayerDataSubsystem::execInitializeData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerDataSubsystem_ChangeAmmo_Statics
	{
		struct PlayerDataSubsystem_eventChangeAmmo_Parms
		{
			int32 Amount;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerDataSubsystem_ChangeAmmo_Statics::NewProp_Amount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPlayerDataSubsystem_ChangeAmmo_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerDataSubsystem_eventChangeAmmo_Parms, Amount), METADATA_PARAMS(Z_Construct_UFunction_UPlayerDataSubsystem_ChangeAmmo_Statics::NewProp_Amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerDataSubsystem_ChangeAmmo_Statics::NewProp_Amount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerDataSubsystem_ChangeAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerDataSubsystem_ChangeAmmo_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerDataSubsystem_ChangeAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerDataSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerDataSubsystem_ChangeAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerDataSubsystem, nullptr, "ChangeAmmo", nullptr, nullptr, sizeof(PlayerDataSubsystem_eventChangeAmmo_Parms), Z_Construct_UFunction_UPlayerDataSubsystem_ChangeAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerDataSubsystem_ChangeAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerDataSubsystem_ChangeAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerDataSubsystem_ChangeAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerDataSubsystem_ChangeAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerDataSubsystem_ChangeAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerDataSubsystem_ChangeHealth_Statics
	{
		struct PlayerDataSubsystem_eventChangeHealth_Parms
		{
			float Amount;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerDataSubsystem_ChangeHealth_Statics::NewProp_Amount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerDataSubsystem_ChangeHealth_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerDataSubsystem_eventChangeHealth_Parms, Amount), METADATA_PARAMS(Z_Construct_UFunction_UPlayerDataSubsystem_ChangeHealth_Statics::NewProp_Amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerDataSubsystem_ChangeHealth_Statics::NewProp_Amount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerDataSubsystem_ChangeHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerDataSubsystem_ChangeHealth_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerDataSubsystem_ChangeHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerDataSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerDataSubsystem_ChangeHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerDataSubsystem, nullptr, "ChangeHealth", nullptr, nullptr, sizeof(PlayerDataSubsystem_eventChangeHealth_Parms), Z_Construct_UFunction_UPlayerDataSubsystem_ChangeHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerDataSubsystem_ChangeHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerDataSubsystem_ChangeHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerDataSubsystem_ChangeHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerDataSubsystem_ChangeHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerDataSubsystem_ChangeHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerDataSubsystem_GetPlayerDataSubsystem_Statics
	{
		struct PlayerDataSubsystem_eventGetPlayerDataSubsystem_Parms
		{
			UObject* WorldContextObject;
			UPlayerDataSubsystem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerDataSubsystem_GetPlayerDataSubsystem_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerDataSubsystem_eventGetPlayerDataSubsystem_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerDataSubsystem_GetPlayerDataSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerDataSubsystem_eventGetPlayerDataSubsystem_Parms, ReturnValue), Z_Construct_UClass_UPlayerDataSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerDataSubsystem_GetPlayerDataSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerDataSubsystem_GetPlayerDataSubsystem_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerDataSubsystem_GetPlayerDataSubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerDataSubsystem_GetPlayerDataSubsystem_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ReSharper disable once CppUEBlueprintCallableFunctionUnused\n" },
		{ "ModuleRelativePath", "Public/PlayerDataSubsystem.h" },
		{ "ToolTip", "ReSharper disable once CppUEBlueprintCallableFunctionUnused" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerDataSubsystem_GetPlayerDataSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerDataSubsystem, nullptr, "GetPlayerDataSubsystem", nullptr, nullptr, sizeof(PlayerDataSubsystem_eventGetPlayerDataSubsystem_Parms), Z_Construct_UFunction_UPlayerDataSubsystem_GetPlayerDataSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerDataSubsystem_GetPlayerDataSubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerDataSubsystem_GetPlayerDataSubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerDataSubsystem_GetPlayerDataSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerDataSubsystem_GetPlayerDataSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerDataSubsystem_GetPlayerDataSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerDataSubsystem_InitializeData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerDataSubsystem_InitializeData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerDataSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerDataSubsystem_InitializeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerDataSubsystem, nullptr, "InitializeData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerDataSubsystem_InitializeData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerDataSubsystem_InitializeData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerDataSubsystem_InitializeData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerDataSubsystem_InitializeData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayerDataSubsystem_NoRegister()
	{
		return UPlayerDataSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerDataSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ammo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Ammo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerDataSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_YourFirstHourwithUMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerDataSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerDataSubsystem_ChangeAmmo, "ChangeAmmo" }, // 4008811281
		{ &Z_Construct_UFunction_UPlayerDataSubsystem_ChangeHealth, "ChangeHealth" }, // 914532301
		{ &Z_Construct_UFunction_UPlayerDataSubsystem_GetPlayerDataSubsystem, "GetPlayerDataSubsystem" }, // 1434253597
		{ &Z_Construct_UFunction_UPlayerDataSubsystem_InitializeData, "InitializeData" }, // 2339858136
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerDataSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PlayerDataSubsystem.h" },
		{ "ModuleRelativePath", "Public/PlayerDataSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerDataSubsystem_Statics::NewProp_Ammo_MetaData[] = {
		{ "Category", "PlayerDataSubsystem" },
		{ "ModuleRelativePath", "Public/PlayerDataSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPlayerDataSubsystem_Statics::NewProp_Ammo = { "Ammo", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerDataSubsystem, Ammo), METADATA_PARAMS(Z_Construct_UClass_UPlayerDataSubsystem_Statics::NewProp_Ammo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerDataSubsystem_Statics::NewProp_Ammo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerDataSubsystem_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "PlayerDataSubsystem" },
		{ "ModuleRelativePath", "Public/PlayerDataSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerDataSubsystem_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerDataSubsystem, Health), METADATA_PARAMS(Z_Construct_UClass_UPlayerDataSubsystem_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerDataSubsystem_Statics::NewProp_Health_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerDataSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerDataSubsystem_Statics::NewProp_Ammo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerDataSubsystem_Statics::NewProp_Health,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerDataSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerDataSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerDataSubsystem_Statics::ClassParams = {
		&UPlayerDataSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerDataSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerDataSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerDataSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerDataSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerDataSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerDataSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerDataSubsystem, 1206103050);
	template<> YOURFIRSTHOURWITHUMG_API UClass* StaticClass<UPlayerDataSubsystem>()
	{
		return UPlayerDataSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerDataSubsystem(Z_Construct_UClass_UPlayerDataSubsystem, &UPlayerDataSubsystem::StaticClass, TEXT("/Script/YourFirstHourwithUMG"), TEXT("UPlayerDataSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerDataSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
