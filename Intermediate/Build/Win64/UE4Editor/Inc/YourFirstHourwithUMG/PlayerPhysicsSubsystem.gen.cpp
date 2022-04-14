// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YourFirstHourwithUMG/Public/Services/PlayerPhysicsSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerPhysicsSubsystem() {}
// Cross Module References
	YOURFIRSTHOURWITHUMG_API UClass* Z_Construct_UClass_UPlayerPhysicsSubsystem_NoRegister();
	YOURFIRSTHOURWITHUMG_API UClass* Z_Construct_UClass_UPlayerPhysicsSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_YourFirstHourwithUMG();
	YOURFIRSTHOURWITHUMG_API UClass* Z_Construct_UClass_UPlayerPhysicsSettings_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPlayerPhysicsSubsystem::execGetProjectileSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetProjectileSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerPhysicsSubsystem::execGetJumpVelocity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetJumpVelocity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerPhysicsSubsystem::execGetMoveSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMoveSpeed();
		P_NATIVE_END;
	}
	void UPlayerPhysicsSubsystem::StaticRegisterNativesUPlayerPhysicsSubsystem()
	{
		UClass* Class = UPlayerPhysicsSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetJumpVelocity", &UPlayerPhysicsSubsystem::execGetJumpVelocity },
			{ "GetMoveSpeed", &UPlayerPhysicsSubsystem::execGetMoveSpeed },
			{ "GetProjectileSpeed", &UPlayerPhysicsSubsystem::execGetProjectileSpeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerPhysicsSubsystem_GetJumpVelocity_Statics
	{
		struct PlayerPhysicsSubsystem_eventGetJumpVelocity_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerPhysicsSubsystem_GetJumpVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerPhysicsSubsystem_eventGetJumpVelocity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerPhysicsSubsystem_GetJumpVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerPhysicsSubsystem_GetJumpVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerPhysicsSubsystem_GetJumpVelocity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Services/PlayerPhysicsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerPhysicsSubsystem_GetJumpVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerPhysicsSubsystem, nullptr, "GetJumpVelocity", nullptr, nullptr, sizeof(PlayerPhysicsSubsystem_eventGetJumpVelocity_Parms), Z_Construct_UFunction_UPlayerPhysicsSubsystem_GetJumpVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerPhysicsSubsystem_GetJumpVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerPhysicsSubsystem_GetJumpVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerPhysicsSubsystem_GetJumpVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerPhysicsSubsystem_GetJumpVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerPhysicsSubsystem_GetJumpVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerPhysicsSubsystem_GetMoveSpeed_Statics
	{
		struct PlayerPhysicsSubsystem_eventGetMoveSpeed_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerPhysicsSubsystem_GetMoveSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerPhysicsSubsystem_eventGetMoveSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerPhysicsSubsystem_GetMoveSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerPhysicsSubsystem_GetMoveSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerPhysicsSubsystem_GetMoveSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Services/PlayerPhysicsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerPhysicsSubsystem_GetMoveSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerPhysicsSubsystem, nullptr, "GetMoveSpeed", nullptr, nullptr, sizeof(PlayerPhysicsSubsystem_eventGetMoveSpeed_Parms), Z_Construct_UFunction_UPlayerPhysicsSubsystem_GetMoveSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerPhysicsSubsystem_GetMoveSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerPhysicsSubsystem_GetMoveSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerPhysicsSubsystem_GetMoveSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerPhysicsSubsystem_GetMoveSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerPhysicsSubsystem_GetMoveSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerPhysicsSubsystem_GetProjectileSpeed_Statics
	{
		struct PlayerPhysicsSubsystem_eventGetProjectileSpeed_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerPhysicsSubsystem_GetProjectileSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerPhysicsSubsystem_eventGetProjectileSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerPhysicsSubsystem_GetProjectileSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerPhysicsSubsystem_GetProjectileSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerPhysicsSubsystem_GetProjectileSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Services/PlayerPhysicsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerPhysicsSubsystem_GetProjectileSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerPhysicsSubsystem, nullptr, "GetProjectileSpeed", nullptr, nullptr, sizeof(PlayerPhysicsSubsystem_eventGetProjectileSpeed_Parms), Z_Construct_UFunction_UPlayerPhysicsSubsystem_GetProjectileSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerPhysicsSubsystem_GetProjectileSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerPhysicsSubsystem_GetProjectileSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerPhysicsSubsystem_GetProjectileSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerPhysicsSubsystem_GetProjectileSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerPhysicsSubsystem_GetProjectileSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayerPhysicsSubsystem_NoRegister()
	{
		return UPlayerPhysicsSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerPhysicsSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__physicsSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__physicsSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerPhysicsSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_YourFirstHourwithUMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerPhysicsSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerPhysicsSubsystem_GetJumpVelocity, "GetJumpVelocity" }, // 4136834341
		{ &Z_Construct_UFunction_UPlayerPhysicsSubsystem_GetMoveSpeed, "GetMoveSpeed" }, // 2637629338
		{ &Z_Construct_UFunction_UPlayerPhysicsSubsystem_GetProjectileSpeed, "GetProjectileSpeed" }, // 539073679
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerPhysicsSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Services/PlayerPhysicsSubsystem.h" },
		{ "ModuleRelativePath", "Public/Services/PlayerPhysicsSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerPhysicsSubsystem_Statics::NewProp__physicsSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Services/PlayerPhysicsSubsystem.h" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerPhysicsSubsystem_Statics::NewProp__physicsSettings = { "_physicsSettings", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerPhysicsSubsystem, _physicsSettings), Z_Construct_UClass_UPlayerPhysicsSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerPhysicsSubsystem_Statics::NewProp__physicsSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerPhysicsSubsystem_Statics::NewProp__physicsSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerPhysicsSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerPhysicsSubsystem_Statics::NewProp__physicsSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerPhysicsSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerPhysicsSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerPhysicsSubsystem_Statics::ClassParams = {
		&UPlayerPhysicsSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerPhysicsSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerPhysicsSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerPhysicsSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerPhysicsSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerPhysicsSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerPhysicsSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerPhysicsSubsystem, 1081521161);
	template<> YOURFIRSTHOURWITHUMG_API UClass* StaticClass<UPlayerPhysicsSubsystem>()
	{
		return UPlayerPhysicsSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerPhysicsSubsystem(Z_Construct_UClass_UPlayerPhysicsSubsystem, &UPlayerPhysicsSubsystem::StaticClass, TEXT("/Script/YourFirstHourwithUMG"), TEXT("UPlayerPhysicsSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerPhysicsSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
