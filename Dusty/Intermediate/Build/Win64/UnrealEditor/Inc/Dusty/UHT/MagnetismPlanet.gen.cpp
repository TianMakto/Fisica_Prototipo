// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dusty/MagnetismPlanet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagnetismPlanet() {}
// Cross Module References
	DUSTY_API UClass* Z_Construct_UClass_AMagnetismPlanet();
	DUSTY_API UClass* Z_Construct_UClass_AMagnetismPlanet_NoRegister();
	DUSTY_API UClass* Z_Construct_UClass_APlanet();
	UPackage* Z_Construct_UPackage__Script_Dusty();
// End Cross Module References
	void AMagnetismPlanet::StaticRegisterNativesAMagnetismPlanet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMagnetismPlanet);
	UClass* Z_Construct_UClass_AMagnetismPlanet_NoRegister()
	{
		return AMagnetismPlanet::StaticClass();
	}
	struct Z_Construct_UClass_AMagnetismPlanet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMagnetismPlanet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlanet,
		(UObject* (*)())Z_Construct_UPackage__Script_Dusty,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagnetismPlanet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MagnetismPlanet.h" },
		{ "ModuleRelativePath", "MagnetismPlanet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMagnetismPlanet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMagnetismPlanet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMagnetismPlanet_Statics::ClassParams = {
		&AMagnetismPlanet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMagnetismPlanet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMagnetismPlanet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMagnetismPlanet()
	{
		if (!Z_Registration_Info_UClass_AMagnetismPlanet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMagnetismPlanet.OuterSingleton, Z_Construct_UClass_AMagnetismPlanet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMagnetismPlanet.OuterSingleton;
	}
	template<> DUSTY_API UClass* StaticClass<AMagnetismPlanet>()
	{
		return AMagnetismPlanet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMagnetismPlanet);
	AMagnetismPlanet::~AMagnetismPlanet() {}
	struct Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_MagnetismPlanet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_MagnetismPlanet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMagnetismPlanet, AMagnetismPlanet::StaticClass, TEXT("AMagnetismPlanet"), &Z_Registration_Info_UClass_AMagnetismPlanet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMagnetismPlanet), 3987539602U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_MagnetismPlanet_h_3824848737(TEXT("/Script/Dusty"),
		Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_MagnetismPlanet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_MagnetismPlanet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
