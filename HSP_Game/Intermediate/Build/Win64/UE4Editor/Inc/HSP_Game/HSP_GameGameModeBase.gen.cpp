// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HSP_Game/HSP_GameGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHSP_GameGameModeBase() {}
// Cross Module References
	HSP_GAME_API UClass* Z_Construct_UClass_AHSP_GameGameModeBase_NoRegister();
	HSP_GAME_API UClass* Z_Construct_UClass_AHSP_GameGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_HSP_Game();
// End Cross Module References
	void AHSP_GameGameModeBase::StaticRegisterNativesAHSP_GameGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AHSP_GameGameModeBase_NoRegister()
	{
		return AHSP_GameGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AHSP_GameGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHSP_GameGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HSP_Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHSP_GameGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "HSP_GameGameModeBase.h" },
		{ "ModuleRelativePath", "HSP_GameGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHSP_GameGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHSP_GameGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHSP_GameGameModeBase_Statics::ClassParams = {
		&AHSP_GameGameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AHSP_GameGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHSP_GameGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHSP_GameGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHSP_GameGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHSP_GameGameModeBase, 467145297);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHSP_GameGameModeBase(Z_Construct_UClass_AHSP_GameGameModeBase, &AHSP_GameGameModeBase::StaticClass, TEXT("/Script/HSP_Game"), TEXT("AHSP_GameGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHSP_GameGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
