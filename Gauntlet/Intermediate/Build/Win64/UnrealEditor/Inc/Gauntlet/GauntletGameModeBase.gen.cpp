// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gauntlet/GauntletGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGauntletGameModeBase() {}
// Cross Module References
	GAUNTLET_API UClass* Z_Construct_UClass_AGauntletGameModeBase_NoRegister();
	GAUNTLET_API UClass* Z_Construct_UClass_AGauntletGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Gauntlet();
// End Cross Module References
	void AGauntletGameModeBase::StaticRegisterNativesAGauntletGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGauntletGameModeBase);
	UClass* Z_Construct_UClass_AGauntletGameModeBase_NoRegister()
	{
		return AGauntletGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AGauntletGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGauntletGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Gauntlet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGauntletGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GauntletGameModeBase.h" },
		{ "ModuleRelativePath", "GauntletGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGauntletGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGauntletGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGauntletGameModeBase_Statics::ClassParams = {
		&AGauntletGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGauntletGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGauntletGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGauntletGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AGauntletGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGauntletGameModeBase.OuterSingleton, Z_Construct_UClass_AGauntletGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGauntletGameModeBase.OuterSingleton;
	}
	template<> GAUNTLET_API UClass* StaticClass<AGauntletGameModeBase>()
	{
		return AGauntletGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGauntletGameModeBase);
	struct Z_CompiledInDeferFile_FID_Gauntlet_Source_Gauntlet_GauntletGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Gauntlet_Source_Gauntlet_GauntletGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGauntletGameModeBase, AGauntletGameModeBase::StaticClass, TEXT("AGauntletGameModeBase"), &Z_Registration_Info_UClass_AGauntletGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGauntletGameModeBase), 2872636895U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Gauntlet_Source_Gauntlet_GauntletGameModeBase_h_896284441(TEXT("/Script/Gauntlet"),
		Z_CompiledInDeferFile_FID_Gauntlet_Source_Gauntlet_GauntletGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Gauntlet_Source_Gauntlet_GauntletGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
