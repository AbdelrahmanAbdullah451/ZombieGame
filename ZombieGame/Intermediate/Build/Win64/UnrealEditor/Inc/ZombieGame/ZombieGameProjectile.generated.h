// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef ZOMBIEGAME_ZombieGameProjectile_generated_h
#error "ZombieGameProjectile.generated.h already included, missing '#pragma once' in ZombieGameProjectile.h"
#endif
#define ZOMBIEGAME_ZombieGameProjectile_generated_h

#define FID_ZombieGame_Source_ZombieGame_ZombieGameProjectile_h_15_SPARSE_DATA
#define FID_ZombieGame_Source_ZombieGame_ZombieGameProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_ZombieGame_Source_ZombieGame_ZombieGameProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_ZombieGame_Source_ZombieGame_ZombieGameProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAZombieGameProjectile(); \
	friend struct Z_Construct_UClass_AZombieGameProjectile_Statics; \
public: \
	DECLARE_CLASS(AZombieGameProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ZombieGame"), NO_API) \
	DECLARE_SERIALIZER(AZombieGameProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_ZombieGame_Source_ZombieGame_ZombieGameProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAZombieGameProjectile(); \
	friend struct Z_Construct_UClass_AZombieGameProjectile_Statics; \
public: \
	DECLARE_CLASS(AZombieGameProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ZombieGame"), NO_API) \
	DECLARE_SERIALIZER(AZombieGameProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_ZombieGame_Source_ZombieGame_ZombieGameProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AZombieGameProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AZombieGameProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZombieGameProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZombieGameProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZombieGameProjectile(AZombieGameProjectile&&); \
	NO_API AZombieGameProjectile(const AZombieGameProjectile&); \
public:


#define FID_ZombieGame_Source_ZombieGame_ZombieGameProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZombieGameProjectile(AZombieGameProjectile&&); \
	NO_API AZombieGameProjectile(const AZombieGameProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZombieGameProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZombieGameProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AZombieGameProjectile)


#define FID_ZombieGame_Source_ZombieGame_ZombieGameProjectile_h_12_PROLOG
#define FID_ZombieGame_Source_ZombieGame_ZombieGameProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ZombieGame_Source_ZombieGame_ZombieGameProjectile_h_15_SPARSE_DATA \
	FID_ZombieGame_Source_ZombieGame_ZombieGameProjectile_h_15_RPC_WRAPPERS \
	FID_ZombieGame_Source_ZombieGame_ZombieGameProjectile_h_15_INCLASS \
	FID_ZombieGame_Source_ZombieGame_ZombieGameProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ZombieGame_Source_ZombieGame_ZombieGameProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ZombieGame_Source_ZombieGame_ZombieGameProjectile_h_15_SPARSE_DATA \
	FID_ZombieGame_Source_ZombieGame_ZombieGameProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ZombieGame_Source_ZombieGame_ZombieGameProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_ZombieGame_Source_ZombieGame_ZombieGameProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ZOMBIEGAME_API UClass* StaticClass<class AZombieGameProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ZombieGame_Source_ZombieGame_ZombieGameProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
