// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dusty/PhysicsManager.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsManager() {}
// Cross Module References
	DUSTY_API UClass* Z_Construct_UClass_UPhysicsManager();
	DUSTY_API UClass* Z_Construct_UClass_UPhysicsManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_Dusty();
// End Cross Module References
	void UPhysicsManager::StaticRegisterNativesUPhysicsManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicsManager);
	UClass* Z_Construct_UClass_UPhysicsManager_NoRegister()
	{
		return UPhysicsManager::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicsManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_num_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_num;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicsManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Dusty,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PhysicsManager.h" },
		{ "ModuleRelativePath", "PhysicsManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsManager_Statics::NewProp_num_MetaData[] = {
		{ "Category", "PhysicsManager" },
		{ "Comment", "// All my variables\n" },
		{ "ModuleRelativePath", "PhysicsManager.h" },
		{ "ToolTip", "All my variables" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPhysicsManager_Statics::NewProp_num = { "num", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsManager, num), METADATA_PARAMS(Z_Construct_UClass_UPhysicsManager_Statics::NewProp_num_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsManager_Statics::NewProp_num_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicsManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsManager_Statics::NewProp_num,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicsManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsManager_Statics::ClassParams = {
		&UPhysicsManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPhysicsManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicsManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicsManager()
	{
		if (!Z_Registration_Info_UClass_UPhysicsManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsManager.OuterSingleton, Z_Construct_UClass_UPhysicsManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhysicsManager.OuterSingleton;
	}
	template<> DUSTY_API UClass* StaticClass<UPhysicsManager>()
	{
		return UPhysicsManager::StaticClass();
	}
	UPhysicsManager::UPhysicsManager() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsManager);
	UPhysicsManager::~UPhysicsManager() {}
	struct Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_PhysicsManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_PhysicsManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsManager, UPhysicsManager::StaticClass, TEXT("UPhysicsManager"), &Z_Registration_Info_UClass_UPhysicsManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsManager), 3943354843U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_PhysicsManager_h_3864320416(TEXT("/Script/Dusty"),
		Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_PhysicsManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_PhysicsManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
