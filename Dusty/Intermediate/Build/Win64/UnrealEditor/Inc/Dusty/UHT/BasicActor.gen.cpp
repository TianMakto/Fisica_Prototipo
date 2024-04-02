// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dusty/BasicActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicActor() {}
// Cross Module References
	DUSTY_API UClass* Z_Construct_UClass_ABasicActor();
	DUSTY_API UClass* Z_Construct_UClass_ABasicActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Dusty();
// End Cross Module References
	void ABasicActor::StaticRegisterNativesABasicActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABasicActor);
	UClass* Z_Construct_UClass_ABasicActor_NoRegister()
	{
		return ABasicActor::StaticClass();
	}
	struct Z_Construct_UClass_ABasicActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasicActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Dusty,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BasicActor.h" },
		{ "ModuleRelativePath", "BasicActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicActor_Statics::NewProp_mesh_MetaData[] = {
		{ "Category", "BasicActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BasicActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasicActor_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABasicActor, mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasicActor_Statics::NewProp_mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicActor_Statics::NewProp_mesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasicActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicActor_Statics::NewProp_mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasicActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasicActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABasicActor_Statics::ClassParams = {
		&ABasicActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABasicActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABasicActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABasicActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABasicActor()
	{
		if (!Z_Registration_Info_UClass_ABasicActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABasicActor.OuterSingleton, Z_Construct_UClass_ABasicActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABasicActor.OuterSingleton;
	}
	template<> DUSTY_API UClass* StaticClass<ABasicActor>()
	{
		return ABasicActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasicActor);
	ABasicActor::~ABasicActor() {}
	struct Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_BasicActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_BasicActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABasicActor, ABasicActor::StaticClass, TEXT("ABasicActor"), &Z_Registration_Info_UClass_ABasicActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABasicActor), 2876879212U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_BasicActor_h_2156686720(TEXT("/Script/Dusty"),
		Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_BasicActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_BasicActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
