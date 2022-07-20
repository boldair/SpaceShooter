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
#ifdef SPACESHOOTERMPCPP_SpaceShooterMPcppProjectile_generated_h
#error "SpaceShooterMPcppProjectile.generated.h already included, missing '#pragma once' in SpaceShooterMPcppProjectile.h"
#endif
#define SPACESHOOTERMPCPP_SpaceShooterMPcppProjectile_generated_h

#define FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppProjectile_h_15_SPARSE_DATA
#define FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpaceShooterMPcppProjectile(); \
	friend struct Z_Construct_UClass_ASpaceShooterMPcppProjectile_Statics; \
public: \
	DECLARE_CLASS(ASpaceShooterMPcppProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceShooterMPcpp"), NO_API) \
	DECLARE_SERIALIZER(ASpaceShooterMPcppProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASpaceShooterMPcppProjectile(); \
	friend struct Z_Construct_UClass_ASpaceShooterMPcppProjectile_Statics; \
public: \
	DECLARE_CLASS(ASpaceShooterMPcppProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceShooterMPcpp"), NO_API) \
	DECLARE_SERIALIZER(ASpaceShooterMPcppProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpaceShooterMPcppProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpaceShooterMPcppProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpaceShooterMPcppProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpaceShooterMPcppProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpaceShooterMPcppProjectile(ASpaceShooterMPcppProjectile&&); \
	NO_API ASpaceShooterMPcppProjectile(const ASpaceShooterMPcppProjectile&); \
public:


#define FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpaceShooterMPcppProjectile(ASpaceShooterMPcppProjectile&&); \
	NO_API ASpaceShooterMPcppProjectile(const ASpaceShooterMPcppProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpaceShooterMPcppProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpaceShooterMPcppProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpaceShooterMPcppProjectile)


#define FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppProjectile_h_12_PROLOG
#define FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppProjectile_h_15_SPARSE_DATA \
	FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppProjectile_h_15_RPC_WRAPPERS \
	FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppProjectile_h_15_INCLASS \
	FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppProjectile_h_15_SPARSE_DATA \
	FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACESHOOTERMPCPP_API UClass* StaticClass<class ASpaceShooterMPcppProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
