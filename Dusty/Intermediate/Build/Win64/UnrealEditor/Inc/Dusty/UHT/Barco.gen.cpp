// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dusty/Barco.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBarco() {}
// Cross Module References
	DUSTY_API UClass* Z_Construct_UClass_ABarco();
	DUSTY_API UClass* Z_Construct_UClass_ABarco_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Dusty();
// End Cross Module References
	DEFINE_FUNCTION(ABarco::execTurn)
	{
		P_GET_UBOOL(Z_Param_right);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Turn(Z_Param_right);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABarco::execDeccelerate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Deccelerate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABarco::execAccelerate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Accelerate();
		P_NATIVE_END;
	}
	void ABarco::StaticRegisterNativesABarco()
	{
		UClass* Class = ABarco::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Accelerate", &ABarco::execAccelerate },
			{ "Deccelerate", &ABarco::execDeccelerate },
			{ "Turn", &ABarco::execTurn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABarco_Accelerate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABarco_Accelerate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Barco.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABarco_Accelerate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABarco, nullptr, "Accelerate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABarco_Accelerate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABarco_Accelerate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABarco_Accelerate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABarco_Accelerate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABarco_Deccelerate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABarco_Deccelerate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Barco.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABarco_Deccelerate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABarco, nullptr, "Deccelerate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABarco_Deccelerate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABarco_Deccelerate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABarco_Deccelerate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABarco_Deccelerate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABarco_Turn_Statics
	{
		struct Barco_eventTurn_Parms
		{
			bool right;
		};
		static void NewProp_right_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_right;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABarco_Turn_Statics::NewProp_right_SetBit(void* Obj)
	{
		((Barco_eventTurn_Parms*)Obj)->right = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABarco_Turn_Statics::NewProp_right = { "right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Barco_eventTurn_Parms), &Z_Construct_UFunction_ABarco_Turn_Statics::NewProp_right_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABarco_Turn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABarco_Turn_Statics::NewProp_right,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABarco_Turn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Barco.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABarco_Turn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABarco, nullptr, "Turn", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABarco_Turn_Statics::Barco_eventTurn_Parms), Z_Construct_UFunction_ABarco_Turn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABarco_Turn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABarco_Turn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABarco_Turn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABarco_Turn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABarco_Turn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABarco);
	UClass* Z_Construct_UClass_ABarco_NoRegister()
	{
		return ABarco::StaticClass();
	}
	struct Z_Construct_UClass_ABarco_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_force_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_force;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_turnforce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_turnforce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LowSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpulseForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpulseForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshBarco_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshBarco;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshVela_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshVela;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABarco_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Dusty,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABarco_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABarco_Accelerate, "Accelerate" }, // 4254969038
		{ &Z_Construct_UFunction_ABarco_Deccelerate, "Deccelerate" }, // 77408446
		{ &Z_Construct_UFunction_ABarco_Turn, "Turn" }, // 1478270842
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarco_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Barco.h" },
		{ "ModuleRelativePath", "Barco.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarco_Statics::NewProp_force_MetaData[] = {
		{ "Category", "Barco" },
		{ "ModuleRelativePath", "Barco.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABarco_Statics::NewProp_force = { "force", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABarco, force), METADATA_PARAMS(Z_Construct_UClass_ABarco_Statics::NewProp_force_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABarco_Statics::NewProp_force_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarco_Statics::NewProp_turnforce_MetaData[] = {
		{ "Category", "Barco" },
		{ "ModuleRelativePath", "Barco.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABarco_Statics::NewProp_turnforce = { "turnforce", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABarco, turnforce), METADATA_PARAMS(Z_Construct_UClass_ABarco_Statics::NewProp_turnforce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABarco_Statics::NewProp_turnforce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarco_Statics::NewProp_LowSpeed_MetaData[] = {
		{ "Category", "Barco" },
		{ "ModuleRelativePath", "Barco.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABarco_Statics::NewProp_LowSpeed = { "LowSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABarco, LowSpeed), METADATA_PARAMS(Z_Construct_UClass_ABarco_Statics::NewProp_LowSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABarco_Statics::NewProp_LowSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarco_Statics::NewProp_ImpulseForce_MetaData[] = {
		{ "Category", "Barco" },
		{ "ModuleRelativePath", "Barco.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABarco_Statics::NewProp_ImpulseForce = { "ImpulseForce", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABarco, ImpulseForce), METADATA_PARAMS(Z_Construct_UClass_ABarco_Statics::NewProp_ImpulseForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABarco_Statics::NewProp_ImpulseForce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarco_Statics::NewProp_meshBarco_MetaData[] = {
		{ "Category", "Barco" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Barco.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABarco_Statics::NewProp_meshBarco = { "meshBarco", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABarco, meshBarco), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABarco_Statics::NewProp_meshBarco_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABarco_Statics::NewProp_meshBarco_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarco_Statics::NewProp_meshVela_MetaData[] = {
		{ "Category", "Barco" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Barco.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABarco_Statics::NewProp_meshVela = { "meshVela", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABarco, meshVela), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABarco_Statics::NewProp_meshVela_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABarco_Statics::NewProp_meshVela_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABarco_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABarco_Statics::NewProp_force,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABarco_Statics::NewProp_turnforce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABarco_Statics::NewProp_LowSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABarco_Statics::NewProp_ImpulseForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABarco_Statics::NewProp_meshBarco,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABarco_Statics::NewProp_meshVela,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABarco_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABarco>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABarco_Statics::ClassParams = {
		&ABarco::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABarco_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABarco_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABarco_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABarco_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABarco()
	{
		if (!Z_Registration_Info_UClass_ABarco.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABarco.OuterSingleton, Z_Construct_UClass_ABarco_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABarco.OuterSingleton;
	}
	template<> DUSTY_API UClass* StaticClass<ABarco>()
	{
		return ABarco::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABarco);
	ABarco::~ABarco() {}
	struct Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_Barco_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_Barco_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABarco, ABarco::StaticClass, TEXT("ABarco"), &Z_Registration_Info_UClass_ABarco, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABarco), 3438946967U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_Barco_h_442356120(TEXT("/Script/Dusty"),
		Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_Barco_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_carlos_caz_Documents_Unreal_Projects_Fisica_Prototipo_Dusty_Source_Dusty_Barco_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
