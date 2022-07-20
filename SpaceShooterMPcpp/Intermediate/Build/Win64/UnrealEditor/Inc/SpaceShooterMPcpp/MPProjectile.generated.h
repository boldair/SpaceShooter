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
#ifdef SPACESHOOTERMPCPP_MPProjectile_generated_h
#error "MPProjectile.generated.h already included, missing '#pragma once' in MPProjectile.h"
#endif
#define SPACESHOOTERMPCPP_MPProjectile_generated_h

#define FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_MPProjectile_h_12_SPARSE_DATA
#define FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_MPProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnProjectileImpact);


#define FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_MPProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnProjectileImpact);


#define FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_MPProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMPProjectile(); \
	friend struct Z_Construct_UClass_AMPProjectile_Statics; \
public: \
	DECLARE_CLASS(AMPProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceShooterMPcpp"), NO_API) \
	DECLARE_SERIALIZER(AMPProjectile)


#define FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_MPProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMPProjectile(); \
	friend struct Z_Construct_UClass_AMPProjectile_Statics; \
public: \
	DECLARE_CLASS(AMPProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceShooterMPcpp"), NO_API) \
	DECLARE_SERIALIZER(AMPProjectile)


#define FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_MPProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMPProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMPProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMPProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMPProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMPProjectile(AMPProjectile&&); \
	NO_API AMPProjectile(const AMPProjectile&); \
public:


#define FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_MPProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMPProjectile(AMPProjectile&&); \
	NO_API AMPProjectile(const AMPProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMPProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMPProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMPProjectile)


#define FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_MPProjectile_h_9_PROLOG
#define FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_MPProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_MPProjectile_h_12_SPARSE_DATA \
	FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_MPProjectile_h_12_RPC_WRAPPERS \
	FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_MPProjectile_h_12_INCLASS \
	FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_MPProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_MPProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_MPProjectile_h_12_SPARSE_DATA \
	FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_MPProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_MPProjectile_h_12_INCLASS_NO_PURE_DECLS \
	FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_MPProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACESHOOTERMPCPP_API UClass* StaticClass<class AMPProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_MPProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
