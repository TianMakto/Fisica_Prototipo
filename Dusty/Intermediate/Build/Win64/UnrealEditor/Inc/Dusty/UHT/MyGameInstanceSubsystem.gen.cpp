// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dusty/MyGameInstanceSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameInstanceSubsystem() {}
// Cross Module References
	DUSTY_API UClass* Z_Construct_UClass_UMyGameInstanceSubsystem();
	DUSTY_API UClass* Z_Construct_UClass_UMyGameInstanceSubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_Dusty();
// End Cross Module References
	DEFINE_FUNCTION(UMyGameInstanceSubsystem::execSayHello)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SayHello();
		P_NATIVE_END;
	}
	void UMyGameInstanceSubsystem::StaticRegisterNativesUMyGameInstanceSubsystem()
	{
		UClass* Class = UMyGameInstanceSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SayHello", &UMyGameInstanceSubsystem::execSayHello },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyGameInstanceSubsystem_SayHello_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstanceSubsystem_SayHello_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGameInstanceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstanceSubsystem_SayHello_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstanceSubsystem, nullptr, "SayHello", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyGameInstanceSubsystem_SayHello_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstanceSubsystem_SayHello_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyGameInstanceSubsystem_SayHello()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyGameInstanceSubsystem_SayHello_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyGameInstanceSubsystem);
	UClass* Z_Construct_UClass_UMyGameInstanceSubsystem_NoRegister()
	{
		return UMyGameInstanceSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMyGameInstanceSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyGameInstanceSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Dusty,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyGameInstanceSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyGameInstanceSubsystem_SayHello, "SayHello" }, // 3244687179
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstanceSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyGameInstanceSubsystem.h" },
		{ "ModuleRelativePath", "MyGameInstanceSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyGameInstanceSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyGameInstanceSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyGameInstanceSubsystem_Statics::ClassParams = {
		&UMyGameInstanceSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyGameInstanceSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstanceSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyGameInstanceSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMyGameInstanceSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyGameInstanceSubsystem.OuterSingleton, Z_Construct_UClass_UMyGameInstanceSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyGameInstanceSubsystem.OuterSingleton;
	}
	template<> DUSTY_API UClass* StaticClass<UMyGameInstanceSubsystem>()
	{
		return UMyGameInstanceSubsystem::StaticClass();
	}
	UMyGameInstanceSubsystem::UMyGameInstanceSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyGameInstanceSubsystem);
	UMyGameInstanceSubsystem::~UMyGameInstanceSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_MyGameInstanceSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_MyGameInstanceSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyGameInstanceSubsystem, UMyGameInstanceSubsystem::StaticClass, TEXT("UMyGameInstanceSubsystem"), &Z_Registration_Info_UClass_UMyGameInstanceSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyGameInstanceSubsystem), 3549665544U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_MyGameInstanceSubsystem_h_1521446889(TEXT("/Script/Dusty"),
		Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_MyGameInstanceSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_MyGameInstanceSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
