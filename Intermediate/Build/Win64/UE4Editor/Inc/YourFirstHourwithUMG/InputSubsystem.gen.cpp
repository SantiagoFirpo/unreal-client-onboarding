// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YourFirstHourwithUMG/Public/Services/InputSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputSubsystem() {}
// Cross Module References
	YOURFIRSTHOURWITHUMG_API UClass* Z_Construct_UClass_UInputSubsystem_NoRegister();
	YOURFIRSTHOURWITHUMG_API UClass* Z_Construct_UClass_UInputSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_YourFirstHourwithUMG();
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
	YOURFIRSTHOURWITHUMG_API UClass* Z_Construct_UClass_UInventorySubsystem_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UInputSubsystem::execSetupInputBindings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupInputBindings();
		P_NATIVE_END;
	}
	void UInputSubsystem::StaticRegisterNativesUInputSubsystem()
	{
		UClass* Class = UInputSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetupInputBindings", &UInputSubsystem::execSetupInputBindings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInputSubsystem_SetupInputBindings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSubsystem_SetupInputBindings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Services/InputSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSubsystem_SetupInputBindings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSubsystem, nullptr, "SetupInputBindings", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputSubsystem_SetupInputBindings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSubsystem_SetupInputBindings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputSubsystem_SetupInputBindings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputSubsystem_SetupInputBindings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInputSubsystem_NoRegister()
	{
		return UInputSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UInputSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inputComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__inputComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inventorySubsystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__inventorySubsystem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_YourFirstHourwithUMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInputSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputSubsystem_SetupInputBindings, "SetupInputBindings" }, // 2077589935
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Services/InputSubsystem.h" },
		{ "ModuleRelativePath", "Public/Services/InputSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSubsystem_Statics::NewProp__inputComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Services/InputSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputSubsystem_Statics::NewProp__inputComponent = { "_inputComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputSubsystem, _inputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInputSubsystem_Statics::NewProp__inputComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSubsystem_Statics::NewProp__inputComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSubsystem_Statics::NewProp__inventorySubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/Services/InputSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputSubsystem_Statics::NewProp__inventorySubsystem = { "_inventorySubsystem", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputSubsystem, _inventorySubsystem), Z_Construct_UClass_UInventorySubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInputSubsystem_Statics::NewProp__inventorySubsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSubsystem_Statics::NewProp__inventorySubsystem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSubsystem_Statics::NewProp__inputComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSubsystem_Statics::NewProp__inventorySubsystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInputSubsystem_Statics::ClassParams = {
		&UInputSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInputSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInputSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInputSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInputSubsystem, 2803405522);
	template<> YOURFIRSTHOURWITHUMG_API UClass* StaticClass<UInputSubsystem>()
	{
		return UInputSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInputSubsystem(Z_Construct_UClass_UInputSubsystem, &UInputSubsystem::StaticClass, TEXT("/Script/YourFirstHourwithUMG"), TEXT("UInputSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
