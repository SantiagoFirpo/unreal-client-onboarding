// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YourFirstHourwithUMG/Public/Utilities/UNonPersistent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUNonPersistent() {}
// Cross Module References
	YOURFIRSTHOURWITHUMG_API UClass* Z_Construct_UClass_UNonPersistent_NoRegister();
	YOURFIRSTHOURWITHUMG_API UClass* Z_Construct_UClass_UNonPersistent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_YourFirstHourwithUMG();
// End Cross Module References
	void UNonPersistent::StaticRegisterNativesUNonPersistent()
	{
	}
	UClass* Z_Construct_UClass_UNonPersistent_NoRegister()
	{
		return UNonPersistent::StaticClass();
	}
	struct Z_Construct_UClass_UNonPersistent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNonPersistent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_YourFirstHourwithUMG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNonPersistent_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utilities/UNonPersistent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNonPersistent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INonPersistent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNonPersistent_Statics::ClassParams = {
		&UNonPersistent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNonPersistent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNonPersistent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNonPersistent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNonPersistent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNonPersistent, 4113885377);
	template<> YOURFIRSTHOURWITHUMG_API UClass* StaticClass<UNonPersistent>()
	{
		return UNonPersistent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNonPersistent(Z_Construct_UClass_UNonPersistent, &UNonPersistent::StaticClass, TEXT("/Script/YourFirstHourwithUMG"), TEXT("UNonPersistent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNonPersistent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
