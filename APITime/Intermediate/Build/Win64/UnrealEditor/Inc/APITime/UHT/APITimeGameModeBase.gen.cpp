// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "APITime/APITimeGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAPITimeGameModeBase() {}
// Cross Module References
	APITIME_API UClass* Z_Construct_UClass_AAPITimeGameModeBase();
	APITIME_API UClass* Z_Construct_UClass_AAPITimeGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_APITime();
// End Cross Module References
	DEFINE_FUNCTION(AAPITimeGameModeBase::execSendHTTPGet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendHTTPGet();
		P_NATIVE_END;
	}
	void AAPITimeGameModeBase::StaticRegisterNativesAAPITimeGameModeBase()
	{
		UClass* Class = AAPITimeGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SendHTTPGet", &AAPITimeGameModeBase::execSendHTTPGet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAPITimeGameModeBase_SendHTTPGet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAPITimeGameModeBase_SendHTTPGet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "APITimeGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAPITimeGameModeBase_SendHTTPGet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAPITimeGameModeBase, nullptr, "SendHTTPGet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAPITimeGameModeBase_SendHTTPGet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAPITimeGameModeBase_SendHTTPGet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAPITimeGameModeBase_SendHTTPGet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAPITimeGameModeBase_SendHTTPGet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAPITimeGameModeBase);
	UClass* Z_Construct_UClass_AAPITimeGameModeBase_NoRegister()
	{
		return AAPITimeGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AAPITimeGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAPITimeGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_APITime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAPITimeGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAPITimeGameModeBase_SendHTTPGet, "SendHTTPGet" }, // 3168589468
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAPITimeGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "APITimeGameModeBase.h" },
		{ "ModuleRelativePath", "APITimeGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAPITimeGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAPITimeGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAPITimeGameModeBase_Statics::ClassParams = {
		&AAPITimeGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AAPITimeGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAPITimeGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAPITimeGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AAPITimeGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAPITimeGameModeBase.OuterSingleton, Z_Construct_UClass_AAPITimeGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAPITimeGameModeBase.OuterSingleton;
	}
	template<> APITIME_API UClass* StaticClass<AAPITimeGameModeBase>()
	{
		return AAPITimeGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAPITimeGameModeBase);
	AAPITimeGameModeBase::~AAPITimeGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_EmanuelsProjects_UnrealEngineProjects_Time_API_APITime_Source_APITime_APITimeGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EmanuelsProjects_UnrealEngineProjects_Time_API_APITime_Source_APITime_APITimeGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAPITimeGameModeBase, AAPITimeGameModeBase::StaticClass, TEXT("AAPITimeGameModeBase"), &Z_Registration_Info_UClass_AAPITimeGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAPITimeGameModeBase), 2582766607U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EmanuelsProjects_UnrealEngineProjects_Time_API_APITime_Source_APITime_APITimeGameModeBase_h_4145822146(TEXT("/Script/APITime"),
		Z_CompiledInDeferFile_FID_EmanuelsProjects_UnrealEngineProjects_Time_API_APITime_Source_APITime_APITimeGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EmanuelsProjects_UnrealEngineProjects_Time_API_APITime_Source_APITime_APITimeGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
