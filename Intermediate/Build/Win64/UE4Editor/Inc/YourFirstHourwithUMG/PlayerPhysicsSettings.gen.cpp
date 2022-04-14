// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YourFirstHourwithUMG/Public/Config/Settings/PlayerPhysicsSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerPhysicsSettings() {}
// Cross Module References
	YOURFIRSTHOURWITHUMG_API UClass* Z_Construct_UClass_UPlayerPhysicsSettings_NoRegister();
	YOURFIRSTHOURWITHUMG_API UClass* Z_Construct_UClass_UPlayerPhysicsSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_YourFirstHourwithUMG();
// End Cross Module References
	void UPlayerPhysicsSettings::StaticRegisterNativesUPlayerPhysicsSettings()
	{
	}
	UClass* Z_Construct_UClass_UPlayerPhysicsSettings_NoRegister()
	{
		return UPlayerPhysicsSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerPhysicsSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__moveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__moveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__jumpVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__jumpVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__projectileSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__projectileSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerPhysicsSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_YourFirstHourwithUMG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerPhysicsSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Player Physics Settings" },
		{ "IncludePath", "Config/Settings/PlayerPhysicsSettings.h" },
		{ "ModuleRelativePath", "Public/Config/Settings/PlayerPhysicsSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerPhysicsSettings_Statics::NewProp__moveSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Config/Settings/PlayerPhysicsSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerPhysicsSettings_Statics::NewProp__moveSpeed = { "_moveSpeed", nullptr, (EPropertyFlags)0x0040000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerPhysicsSettings, _moveSpeed), METADATA_PARAMS(Z_Construct_UClass_UPlayerPhysicsSettings_Statics::NewProp__moveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerPhysicsSettings_Statics::NewProp__moveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerPhysicsSettings_Statics::NewProp__jumpVelocity_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Config/Settings/PlayerPhysicsSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerPhysicsSettings_Statics::NewProp__jumpVelocity = { "_jumpVelocity", nullptr, (EPropertyFlags)0x0040000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerPhysicsSettings, _jumpVelocity), METADATA_PARAMS(Z_Construct_UClass_UPlayerPhysicsSettings_Statics::NewProp__jumpVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerPhysicsSettings_Statics::NewProp__jumpVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerPhysicsSettings_Statics::NewProp__projectileSpeed_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/Config/Settings/PlayerPhysicsSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerPhysicsSettings_Statics::NewProp__projectileSpeed = { "_projectileSpeed", nullptr, (EPropertyFlags)0x0040000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerPhysicsSettings, _projectileSpeed), METADATA_PARAMS(Z_Construct_UClass_UPlayerPhysicsSettings_Statics::NewProp__projectileSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerPhysicsSettings_Statics::NewProp__projectileSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerPhysicsSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerPhysicsSettings_Statics::NewProp__moveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerPhysicsSettings_Statics::NewProp__jumpVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerPhysicsSettings_Statics::NewProp__projectileSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerPhysicsSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerPhysicsSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerPhysicsSettings_Statics::ClassParams = {
		&UPlayerPhysicsSettings::StaticClass,
		"GamePort",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerPhysicsSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerPhysicsSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerPhysicsSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerPhysicsSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerPhysicsSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerPhysicsSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerPhysicsSettings, 1624544898);
	template<> YOURFIRSTHOURWITHUMG_API UClass* StaticClass<UPlayerPhysicsSettings>()
	{
		return UPlayerPhysicsSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerPhysicsSettings(Z_Construct_UClass_UPlayerPhysicsSettings, &UPlayerPhysicsSettings::StaticClass, TEXT("/Script/YourFirstHourwithUMG"), TEXT("UPlayerPhysicsSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerPhysicsSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
