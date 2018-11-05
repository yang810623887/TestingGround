// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestingGround/TestingGroundHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestingGroundHUD() {}
// Cross Module References
	TESTINGGROUND_API UClass* Z_Construct_UClass_ATestingGroundHUD_NoRegister();
	TESTINGGROUND_API UClass* Z_Construct_UClass_ATestingGroundHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_TestingGround();
// End Cross Module References
	void ATestingGroundHUD::StaticRegisterNativesATestingGroundHUD()
	{
	}
	UClass* Z_Construct_UClass_ATestingGroundHUD_NoRegister()
	{
		return ATestingGroundHUD::StaticClass();
	}
	struct Z_Construct_UClass_ATestingGroundHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestingGroundHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_TestingGround,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestingGroundHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "TestingGroundHUD.h" },
		{ "ModuleRelativePath", "TestingGroundHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestingGroundHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestingGroundHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATestingGroundHUD_Statics::ClassParams = {
		&ATestingGroundHUD::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008002ACu,
		nullptr, 0,
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATestingGroundHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATestingGroundHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestingGroundHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATestingGroundHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATestingGroundHUD, 2970307165);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATestingGroundHUD(Z_Construct_UClass_ATestingGroundHUD, &ATestingGroundHUD::StaticClass, TEXT("/Script/TestingGround"), TEXT("ATestingGroundHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestingGroundHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
