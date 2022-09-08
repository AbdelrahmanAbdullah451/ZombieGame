// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZombieGame/MuZombieGuy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMuZombieGuy() {}
// Cross Module References
	ZOMBIEGAME_API UClass* Z_Construct_UClass_AMuZombieGuy_NoRegister();
	ZOMBIEGAME_API UClass* Z_Construct_UClass_AMuZombieGuy();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ZombieGame();
// End Cross Module References
	void AMuZombieGuy::StaticRegisterNativesAMuZombieGuy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMuZombieGuy);
	UClass* Z_Construct_UClass_AMuZombieGuy_NoRegister()
	{
		return AMuZombieGuy::StaticClass();
	}
	struct Z_Construct_UClass_AMuZombieGuy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMuZombieGuy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ZombieGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuZombieGuy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MuZombieGuy.h" },
		{ "ModuleRelativePath", "MuZombieGuy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMuZombieGuy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMuZombieGuy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMuZombieGuy_Statics::ClassParams = {
		&AMuZombieGuy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMuZombieGuy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMuZombieGuy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMuZombieGuy()
	{
		if (!Z_Registration_Info_UClass_AMuZombieGuy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMuZombieGuy.OuterSingleton, Z_Construct_UClass_AMuZombieGuy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMuZombieGuy.OuterSingleton;
	}
	template<> ZOMBIEGAME_API UClass* StaticClass<AMuZombieGuy>()
	{
		return AMuZombieGuy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMuZombieGuy);
	struct Z_CompiledInDeferFile_FID_ZombieGame_Source_ZombieGame_MuZombieGuy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ZombieGame_Source_ZombieGame_MuZombieGuy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMuZombieGuy, AMuZombieGuy::StaticClass, TEXT("AMuZombieGuy"), &Z_Registration_Info_UClass_AMuZombieGuy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMuZombieGuy), 3443132430U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ZombieGame_Source_ZombieGame_MuZombieGuy_h_285092332(TEXT("/Script/ZombieGame"),
		Z_CompiledInDeferFile_FID_ZombieGame_Source_ZombieGame_MuZombieGuy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ZombieGame_Source_ZombieGame_MuZombieGuy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
