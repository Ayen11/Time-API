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
	void AAPITimeGameModeBase::StaticRegisterNativesAAPITimeGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAPITimeGameModeBase);
	UClass* Z_Construct_UClass_AAPITimeGameModeBase_NoRegister()
	{
		return AAPITimeGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AAPITimeGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	struct Z_CompiledInDeferFile_FID_EmanuelsProjects_UnrealEngineProjects_UnrealEngine5_API_Time_APITime_Source_APITime_APITimeGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EmanuelsProjects_UnrealEngineProjects_UnrealEngine5_API_Time_APITime_Source_APITime_APITimeGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAPITimeGameModeBase, AAPITimeGameModeBase::StaticClass, TEXT("AAPITimeGameModeBase"), &Z_Registration_Info_UClass_AAPITimeGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAPITimeGameModeBase), 2542807373U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EmanuelsProjects_UnrealEngineProjects_UnrealEngine5_API_Time_APITime_Source_APITime_APITimeGameModeBase_h_232073247(TEXT("/Script/APITime"),
		Z_CompiledInDeferFile_FID_EmanuelsProjects_UnrealEngineProjects_UnrealEngine5_API_Time_APITime_Source_APITime_APITimeGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EmanuelsProjects_UnrealEngineProjects_UnrealEngine5_API_Time_APITime_Source_APITime_APITimeGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
