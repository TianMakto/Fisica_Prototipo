// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dusty/RealPlanet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRealPlanet() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DUSTY_API UClass* Z_Construct_UClass_ARealPlanet();
	DUSTY_API UClass* Z_Construct_UClass_ARealPlanet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Dusty();
// End Cross Module References
	void ARealPlanet::StaticRegisterNativesARealPlanet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARealPlanet);
	UClass* Z_Construct_UClass_ARealPlanet_NoRegister()
	{
		return ARealPlanet::StaticClass();
	}
	struct Z_Construct_UClass_ARealPlanet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_scene_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_scene;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_distance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_distance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_initialPos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_initialPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rotationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_rotationSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARealPlanet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Dusty,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARealPlanet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RealPlanet.h" },
		{ "ModuleRelativePath", "RealPlanet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARealPlanet_Statics::NewProp_scene_MetaData[] = {
		{ "Category", "RealPlanet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RealPlanet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARealPlanet_Statics::NewProp_scene = { "scene", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARealPlanet, scene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARealPlanet_Statics::NewProp_scene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARealPlanet_Statics::NewProp_scene_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARealPlanet_Statics::NewProp_mesh_MetaData[] = {
		{ "Category", "RealPlanet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RealPlanet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARealPlanet_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARealPlanet, mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARealPlanet_Statics::NewProp_mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARealPlanet_Statics::NewProp_mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARealPlanet_Statics::NewProp_distance_MetaData[] = {
		{ "Category", "RealPlanet" },
		{ "ModuleRelativePath", "RealPlanet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARealPlanet_Statics::NewProp_distance = { "distance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARealPlanet, distance), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ARealPlanet_Statics::NewProp_distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARealPlanet_Statics::NewProp_distance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARealPlanet_Statics::NewProp_initialPos_MetaData[] = {
		{ "Category", "RealPlanet" },
		{ "ModuleRelativePath", "RealPlanet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARealPlanet_Statics::NewProp_initialPos = { "initialPos", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARealPlanet, initialPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ARealPlanet_Statics::NewProp_initialPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARealPlanet_Statics::NewProp_initialPos_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARealPlanet_Statics::NewProp_rotationSpeed_MetaData[] = {
		{ "Category", "RealPlanet" },
		{ "ModuleRelativePath", "RealPlanet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARealPlanet_Statics::NewProp_rotationSpeed = { "rotationSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARealPlanet, rotationSpeed), METADATA_PARAMS(Z_Construct_UClass_ARealPlanet_Statics::NewProp_rotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARealPlanet_Statics::NewProp_rotationSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARealPlanet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealPlanet_Statics::NewProp_scene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealPlanet_Statics::NewProp_mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealPlanet_Statics::NewProp_distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealPlanet_Statics::NewProp_initialPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealPlanet_Statics::NewProp_rotationSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARealPlanet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARealPlanet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARealPlanet_Statics::ClassParams = {
		&ARealPlanet::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARealPlanet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARealPlanet_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARealPlanet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARealPlanet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARealPlanet()
	{
		if (!Z_Registration_Info_UClass_ARealPlanet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARealPlanet.OuterSingleton, Z_Construct_UClass_ARealPlanet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARealPlanet.OuterSingleton;
	}
	template<> DUSTY_API UClass* StaticClass<ARealPlanet>()
	{
		return ARealPlanet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARealPlanet);
	ARealPlanet::~ARealPlanet() {}
	struct Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_RealPlanet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_RealPlanet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARealPlanet, ARealPlanet::StaticClass, TEXT("ARealPlanet"), &Z_Registration_Info_UClass_ARealPlanet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARealPlanet), 2045991123U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_RealPlanet_h_2858093714(TEXT("/Script/Dusty"),
		Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_RealPlanet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_RealPlanet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
