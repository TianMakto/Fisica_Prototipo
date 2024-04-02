// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dusty/GravityPlanet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGravityPlanet() {}
// Cross Module References
	DUSTY_API UClass* Z_Construct_UClass_AGravityPlanet();
	DUSTY_API UClass* Z_Construct_UClass_AGravityPlanet_NoRegister();
	DUSTY_API UClass* Z_Construct_UClass_APlanet();
	UPackage* Z_Construct_UPackage__Script_Dusty();
// End Cross Module References
	void AGravityPlanet::StaticRegisterNativesAGravityPlanet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGravityPlanet);
	UClass* Z_Construct_UClass_AGravityPlanet_NoRegister()
	{
		return AGravityPlanet::StaticClass();
	}
	struct Z_Construct_UClass_AGravityPlanet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGravityPlanet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlanet,
		(UObject* (*)())Z_Construct_UPackage__Script_Dusty,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGravityPlanet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GravityPlanet.h" },
		{ "ModuleRelativePath", "GravityPlanet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGravityPlanet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGravityPlanet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGravityPlanet_Statics::ClassParams = {
		&AGravityPlanet::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_AGravityPlanet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGravityPlanet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGravityPlanet()
	{
		if (!Z_Registration_Info_UClass_AGravityPlanet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGravityPlanet.OuterSingleton, Z_Construct_UClass_AGravityPlanet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGravityPlanet.OuterSingleton;
	}
	template<> DUSTY_API UClass* StaticClass<AGravityPlanet>()
	{
		return AGravityPlanet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGravityPlanet);
	AGravityPlanet::~AGravityPlanet() {}
	struct Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_GravityPlanet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_GravityPlanet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGravityPlanet, AGravityPlanet::StaticClass, TEXT("AGravityPlanet"), &Z_Registration_Info_UClass_AGravityPlanet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGravityPlanet), 1248939761U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_GravityPlanet_h_1724326562(TEXT("/Script/Dusty"),
		Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_GravityPlanet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_GravityPlanet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
