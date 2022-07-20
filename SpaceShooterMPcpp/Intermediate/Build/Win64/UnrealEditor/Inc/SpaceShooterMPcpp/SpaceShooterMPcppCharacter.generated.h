// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDamageEvent;
class AController;
class AActor;
#ifdef SPACESHOOTERMPCPP_SpaceShooterMPcppCharacter_generated_h
#error "SpaceShooterMPcppCharacter.generated.h already included, missing '#pragma once' in SpaceShooterMPcppCharacter.h"
#endif
#define SPACESHOOTERMPCPP_SpaceShooterMPcppCharacter_generated_h

#define FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppCharacter_h_18_DELEGATE \
static inline void FOnUseItem_DelegateWrapper(const FMulticastScriptDelegate& OnUseItem) \
{ \
	OnUseItem.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppCharacter_h_23_SPARSE_DATA
#define FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppCharacter_h_23_RPC_WRAPPERS \
	virtual void HandleFire_Implementation(); \
 \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execSetCurrentHealth); \
	DECLARE_FUNCTION(execGetCurrentHealth); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execHandleFire); \
	DECLARE_FUNCTION(execStopFire); \
	DECLARE_FUNCTION(execStartFire); \
	DECLARE_FUNCTION(execOnRep_CurrentHealth);


#define FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void HandleFire_Implementation(); \
 \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execSetCurrentHealth); \
	DECLARE_FUNCTION(execGetCurrentHealth); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execHandleFire); \
	DECLARE_FUNCTION(execStopFire); \
	DECLARE_FUNCTION(execStartFire); \
	DECLARE_FUNCTION(execOnRep_CurrentHealth);


#define FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppCharacter_h_23_EVENT_PARMS
#define FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppCharacter_h_23_CALLBACK_WRAPPERS
#define FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpaceShooterMPcppCharacter(); \
	friend struct Z_Construct_UClass_ASpaceShooterMPcppCharacter_Statics; \
public: \
	DECLARE_CLASS(ASpaceShooterMPcppCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceShooterMPcpp"), NO_API) \
	DECLARE_SERIALIZER(ASpaceShooterMPcppCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentHealth=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentHealth	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppCharacter_h_23_INCLASS \
private: \
	static void StaticRegisterNativesASpaceShooterMPcppCharacter(); \
	friend struct Z_Construct_UClass_ASpaceShooterMPcppCharacter_Statics; \
public: \
	DECLARE_CLASS(ASpaceShooterMPcppCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceShooterMPcpp"), NO_API) \
	DECLARE_SERIALIZER(ASpaceShooterMPcppCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentHealth=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentHealth	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppCharacter_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpaceShooterMPcppCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpaceShooterMPcppCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpaceShooterMPcppCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpaceShooterMPcppCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpaceShooterMPcppCharacter(ASpaceShooterMPcppCharacter&&); \
	NO_API ASpaceShooterMPcppCharacter(const ASpaceShooterMPcppCharacter&); \
public:


#define FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpaceShooterMPcppCharacter(ASpaceShooterMPcppCharacter&&); \
	NO_API ASpaceShooterMPcppCharacter(const ASpaceShooterMPcppCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpaceShooterMPcppCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpaceShooterMPcppCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpaceShooterMPcppCharacter)


#define FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppCharacter_h_20_PROLOG \
	FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppCharacter_h_23_EVENT_PARMS


#define FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppCharacter_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppCharacter_h_23_SPARSE_DATA \
	FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppCharacter_h_23_RPC_WRAPPERS \
	FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppCharacter_h_23_CALLBACK_WRAPPERS \
	FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppCharacter_h_23_INCLASS \
	FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppCharacter_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppCharacter_h_23_SPARSE_DATA \
	FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppCharacter_h_23_CALLBACK_WRAPPERS \
	FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppCharacter_h_23_INCLASS_NO_PURE_DECLS \
	FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACESHOOTERMPCPP_API UClass* StaticClass<class ASpaceShooterMPcppCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
