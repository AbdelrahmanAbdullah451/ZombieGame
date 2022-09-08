// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieGame_init() {}
	ZOMBIEGAME_API UFunction* Z_Construct_UDelegateFunction_ZombieGame_OnPickUp__DelegateSignature();
	ZOMBIEGAME_API UFunction* Z_Construct_UDelegateFunction_ZombieGame_OnUseItem__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ZombieGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ZombieGame()
	{
		if (!Z_Registration_Info_UPackage__Script_ZombieGame.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ZombieGame_OnPickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ZombieGame_OnUseItem__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ZombieGame",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x0BFFD8A9,
				0x4C009CCF,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ZombieGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ZombieGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ZombieGame(Z_Construct_UPackage__Script_ZombieGame, TEXT("/Script/ZombieGame"), Z_Registration_Info_UPackage__Script_ZombieGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x0BFFD8A9, 0x4C009CCF));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
