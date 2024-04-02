// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dusty/MyDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyDataAsset() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DUSTY_API UClass* Z_Construct_UClass_UMyDataAsset();
	DUSTY_API UClass* Z_Construct_UClass_UMyDataAsset_NoRegister();
	DUSTY_API UScriptStruct* Z_Construct_UScriptStruct_FMyAssetInfo();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Dusty();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MyAssetInfo;
class UScriptStruct* FMyAssetInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MyAssetInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MyAssetInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMyAssetInfo, (UObject*)Z_Construct_UPackage__Script_Dusty(), TEXT("MyAssetInfo"));
	}
	return Z_Registration_Info_UScriptStruct_MyAssetInfo.OuterSingleton;
}
template<> DUSTY_API UScriptStruct* StaticStruct<FMyAssetInfo>()
{
	return FMyAssetInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMyAssetInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Life_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Life;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_position;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyAssetInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "MyDataAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMyAssetInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMyAssetInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyAssetInfo_Statics::NewProp_Life_MetaData[] = {
		{ "Category", "MyAssetInfo" },
		{ "ModuleRelativePath", "MyDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FMyAssetInfo_Statics::NewProp_Life = { "Life", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMyAssetInfo, Life), METADATA_PARAMS(Z_Construct_UScriptStruct_FMyAssetInfo_Statics::NewProp_Life_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyAssetInfo_Statics::NewProp_Life_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyAssetInfo_Statics::NewProp_position_MetaData[] = {
		{ "Category", "MyAssetInfo" },
		{ "ModuleRelativePath", "MyDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMyAssetInfo_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMyAssetInfo, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMyAssetInfo_Statics::NewProp_position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyAssetInfo_Statics::NewProp_position_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMyAssetInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyAssetInfo_Statics::NewProp_Life,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyAssetInfo_Statics::NewProp_position,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMyAssetInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Dusty,
		nullptr,
		&NewStructOps,
		"MyAssetInfo",
		sizeof(FMyAssetInfo),
		alignof(FMyAssetInfo),
		Z_Construct_UScriptStruct_FMyAssetInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyAssetInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMyAssetInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyAssetInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMyAssetInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_MyAssetInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MyAssetInfo.InnerSingleton, Z_Construct_UScriptStruct_FMyAssetInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MyAssetInfo.InnerSingleton;
	}
	void UMyDataAsset::StaticRegisterNativesUMyDataAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyDataAsset);
	UClass* Z_Construct_UClass_UMyDataAsset_NoRegister()
	{
		return UMyDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UMyDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_enemies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_enemies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_enemies;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Dusty,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyDataAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyDataAsset.h" },
		{ "ModuleRelativePath", "MyDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMyDataAsset_Statics::NewProp_enemies_Inner = { "enemies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMyAssetInfo, METADATA_PARAMS(nullptr, 0) }; // 1660953504
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyDataAsset_Statics::NewProp_enemies_MetaData[] = {
		{ "Category", "MyDataAsset" },
		{ "ModuleRelativePath", "MyDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMyDataAsset_Statics::NewProp_enemies = { "enemies", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMyDataAsset, enemies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMyDataAsset_Statics::NewProp_enemies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyDataAsset_Statics::NewProp_enemies_MetaData)) }; // 1660953504
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyDataAsset_Statics::NewProp_enemies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyDataAsset_Statics::NewProp_enemies,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyDataAsset_Statics::ClassParams = {
		&UMyDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMyDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyDataAsset()
	{
		if (!Z_Registration_Info_UClass_UMyDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyDataAsset.OuterSingleton, Z_Construct_UClass_UMyDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyDataAsset.OuterSingleton;
	}
	template<> DUSTY_API UClass* StaticClass<UMyDataAsset>()
	{
		return UMyDataAsset::StaticClass();
	}
	UMyDataAsset::UMyDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyDataAsset);
	UMyDataAsset::~UMyDataAsset() {}
	struct Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_MyDataAsset_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_MyDataAsset_h_Statics::ScriptStructInfo[] = {
		{ FMyAssetInfo::StaticStruct, Z_Construct_UScriptStruct_FMyAssetInfo_Statics::NewStructOps, TEXT("MyAssetInfo"), &Z_Registration_Info_UScriptStruct_MyAssetInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMyAssetInfo), 1660953504U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_MyDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyDataAsset, UMyDataAsset::StaticClass, TEXT("UMyDataAsset"), &Z_Registration_Info_UClass_UMyDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyDataAsset), 1340775568U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_MyDataAsset_h_1575722915(TEXT("/Script/Dusty"),
		Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_MyDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_MyDataAsset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_MyDataAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_MyDataAsset_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
