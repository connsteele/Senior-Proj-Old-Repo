// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HSP_Game/ProtagCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProtagCharacter() {}
// Cross Module References
	HSP_GAME_API UClass* Z_Construct_UClass_AProtagCharacter_NoRegister();
	HSP_GAME_API UClass* Z_Construct_UClass_AProtagCharacter();
	PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter();
	UPackage* Z_Construct_UPackage__Script_HSP_Game();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
// End Cross Module References
	void AProtagCharacter::StaticRegisterNativesAProtagCharacter()
	{
	}
	UClass* Z_Construct_UClass_AProtagCharacter_NoRegister()
	{
		return AProtagCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AProtagCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CamBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CamBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_walkRightAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_walkRightAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_idleAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_idleAnim;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProtagCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaperCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_HSP_Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProtagCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ProtagCharacter.h" },
		{ "ModuleRelativePath", "ProtagCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProtagCharacter_Statics::NewProp_CamBoom_MetaData[] = {
		{ "Category", "ProtagCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProtagCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProtagCharacter_Statics::NewProp_CamBoom = { UE4CodeGen_Private::EPropertyClass::Object, "CamBoom", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AProtagCharacter, CamBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProtagCharacter_Statics::NewProp_CamBoom_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProtagCharacter_Statics::NewProp_CamBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProtagCharacter_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "ProtagCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProtagCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProtagCharacter_Statics::NewProp_Camera = { UE4CodeGen_Private::EPropertyClass::Object, "Camera", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AProtagCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProtagCharacter_Statics::NewProp_Camera_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProtagCharacter_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProtagCharacter_Statics::NewProp_walkRightAnim_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "ProtagCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProtagCharacter_Statics::NewProp_walkRightAnim = { UE4CodeGen_Private::EPropertyClass::Object, "walkRightAnim", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AProtagCharacter, walkRightAnim), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProtagCharacter_Statics::NewProp_walkRightAnim_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProtagCharacter_Statics::NewProp_walkRightAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProtagCharacter_Statics::NewProp_idleAnim_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "ProtagCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProtagCharacter_Statics::NewProp_idleAnim = { UE4CodeGen_Private::EPropertyClass::Object, "idleAnim", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AProtagCharacter, idleAnim), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProtagCharacter_Statics::NewProp_idleAnim_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProtagCharacter_Statics::NewProp_idleAnim_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProtagCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProtagCharacter_Statics::NewProp_CamBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProtagCharacter_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProtagCharacter_Statics::NewProp_walkRightAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProtagCharacter_Statics::NewProp_idleAnim,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProtagCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProtagCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProtagCharacter_Statics::ClassParams = {
		&AProtagCharacter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AProtagCharacter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AProtagCharacter_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AProtagCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AProtagCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProtagCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProtagCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProtagCharacter, 2842354148);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProtagCharacter(Z_Construct_UClass_AProtagCharacter, &AProtagCharacter::StaticClass, TEXT("/Script/HSP_Game"), TEXT("AProtagCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProtagCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
