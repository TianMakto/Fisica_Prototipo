// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dusty/GravityForce.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGravityForce() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DUSTY_API UClass* Z_Construct_UClass_AGravityForce();
	DUSTY_API UClass* Z_Construct_UClass_AGravityForce_NoRegister();
	DUSTY_API UClass* Z_Construct_UClass_APlanet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Dusty();
// End Cross Module References
	void AGravityForce::StaticRegisterNativesAGravityForce()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGravityForce);
	UClass* Z_Construct_UClass_AGravityForce_NoRegister()
	{
		return AGravityForce::StaticClass();
	}
	struct Z_Construct_UClass_AGravityForce_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_object_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_object_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_object;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mass_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_force_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_force;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGravityForce_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Dusty,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGravityForce_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GravityForce.h" },
		{ "ModuleRelativePath", "GravityForce.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGravityForce_Statics::NewProp_object_Inner = { "object", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_APlanet_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGravityForce_Statics::NewProp_object_MetaData[] = {
		{ "Category", "GravityForce" },
		{ "ModuleRelativePath", "GravityForce.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGravityForce_Statics::NewProp_object = { "object", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGravityForce, object), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGravityForce_Statics::NewProp_object_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGravityForce_Statics::NewProp_object_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGravityForce_Statics::NewProp_mass_MetaData[] = {
		{ "Category", "GravityForce" },
		{ "ModuleRelativePath", "GravityForce.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGravityForce_Statics::NewProp_mass = { "mass", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGravityForce, mass), METADATA_PARAMS(Z_Construct_UClass_AGravityForce_Statics::NewProp_mass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGravityForce_Statics::NewProp_mass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGravityForce_Statics::NewProp_force_MetaData[] = {
		{ "Category", "GravityForce" },
		{ "ModuleRelativePath", "GravityForce.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGravityForce_Statics::NewProp_force = { "force", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGravityForce, force), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AGravityForce_Statics::NewProp_force_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGravityForce_Statics::NewProp_force_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGravityForce_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGravityForce_Statics::NewProp_object_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGravityForce_Statics::NewProp_object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGravityForce_Statics::NewProp_mass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGravityForce_Statics::NewProp_force,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGravityForce_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGravityForce>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGravityForce_Statics::ClassParams = {
		&AGravityForce::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGravityForce_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGravityForce_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGravityForce_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGravityForce_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGravityForce()
	{
		if (!Z_Registration_Info_UClass_AGravityForce.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGravityForce.OuterSingleton, Z_Construct_UClass_AGravityForce_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGravityForce.OuterSingleton;
	}
	template<> DUSTY_API UClass* StaticClass<AGravityForce>()
	{
		return AGravityForce::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGravityForce);
	AGravityForce::~AGravityForce() {}
	struct Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_GravityForce_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_GravityForce_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGravityForce, AGravityForce::StaticClass, TEXT("AGravityForce"), &Z_Registration_Info_UClass_AGravityForce, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGravityForce), 169302468U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_GravityForce_h_3072816398(TEXT("/Script/Dusty"),
		Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_GravityForce_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_GravityForce_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
