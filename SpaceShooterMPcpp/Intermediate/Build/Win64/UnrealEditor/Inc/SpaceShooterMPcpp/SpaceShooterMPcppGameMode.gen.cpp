// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceShooterMPcpp/SpaceShooterMPcppGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpaceShooterMPcppGameMode() {}
// Cross Module References
	SPACESHOOTERMPCPP_API UClass* Z_Construct_UClass_ASpaceShooterMPcppGameMode_NoRegister();
	SPACESHOOTERMPCPP_API UClass* Z_Construct_UClass_ASpaceShooterMPcppGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SpaceShooterMPcpp();
// End Cross Module References
	void ASpaceShooterMPcppGameMode::StaticRegisterNativesASpaceShooterMPcppGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpaceShooterMPcppGameMode);
	UClass* Z_Construct_UClass_ASpaceShooterMPcppGameMode_NoRegister()
	{
		return ASpaceShooterMPcppGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASpaceShooterMPcppGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpaceShooterMPcppGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceShooterMPcpp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceShooterMPcppGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SpaceShooterMPcppGameMode.h" },
		{ "ModuleRelativePath", "SpaceShooterMPcppGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpaceShooterMPcppGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpaceShooterMPcppGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpaceShooterMPcppGameMode_Statics::ClassParams = {
		&ASpaceShooterMPcppGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASpaceShooterMPcppGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceShooterMPcppGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpaceShooterMPcppGameMode()
	{
		if (!Z_Registration_Info_UClass_ASpaceShooterMPcppGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpaceShooterMPcppGameMode.OuterSingleton, Z_Construct_UClass_ASpaceShooterMPcppGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASpaceShooterMPcppGameMode.OuterSingleton;
	}
	template<> SPACESHOOTERMPCPP_API UClass* StaticClass<ASpaceShooterMPcppGameMode>()
	{
		return ASpaceShooterMPcppGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpaceShooterMPcppGameMode);
	struct Z_CompiledInDeferFile_FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASpaceShooterMPcppGameMode, ASpaceShooterMPcppGameMode::StaticClass, TEXT("ASpaceShooterMPcppGameMode"), &Z_Registration_Info_UClass_ASpaceShooterMPcppGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpaceShooterMPcppGameMode), 2707183014U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppGameMode_h_1878984404(TEXT("/Script/SpaceShooterMPcpp"),
		Z_CompiledInDeferFile_FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpaceShooterMPcpp_Source_SpaceShooterMPcpp_SpaceShooterMPcppGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
