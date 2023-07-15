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
	APITIME_API UEnum* Z_Construct_UEnum_APITime_ECity();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_APITime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECity;
	static UEnum* ECity_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECity.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_APITime_ECity, Z_Construct_UPackage__Script_APITime(), TEXT("ECity"));
		}
		return Z_Registration_Info_UEnum_ECity.OuterSingleton;
	}
	template<> APITIME_API UEnum* StaticEnum<ECity>()
	{
		return ECity_StaticEnum();
	}
	struct Z_Construct_UEnum_APITime_ECity_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_APITime_ECity_Statics::Enumerators[] = {
		{ "ECity::EC_Tokyo", (int64)ECity::EC_Tokyo },
		{ "ECity::EC_London", (int64)ECity::EC_London },
		{ "ECity::EC_NewYork", (int64)ECity::EC_NewYork },
		{ "ECity::EC_Default", (int64)ECity::EC_Default },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_APITime_ECity_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "EC_Default.Comment", "/**\n * \n */" },
		{ "EC_Default.DisplayName", "Default" },
		{ "EC_Default.Name", "ECity::EC_Default" },
		{ "EC_London.Comment", "/**\n * \n */" },
		{ "EC_London.DisplayName", "London" },
		{ "EC_London.Name", "ECity::EC_London" },
		{ "EC_NewYork.Comment", "/**\n * \n */" },
		{ "EC_NewYork.DisplayName", "NewYork" },
		{ "EC_NewYork.Name", "ECity::EC_NewYork" },
		{ "EC_Tokyo.Comment", "/**\n * \n */" },
		{ "EC_Tokyo.DisplayName", "Tokyo" },
		{ "EC_Tokyo.Name", "ECity::EC_Tokyo" },
		{ "ModuleRelativePath", "APITimeGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_APITime_ECity_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_APITime,
		nullptr,
		"ECity",
		"ECity",
		Z_Construct_UEnum_APITime_ECity_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_APITime_ECity_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_APITime_ECity_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_APITime_ECity_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_APITime_ECity()
	{
		if (!Z_Registration_Info_UEnum_ECity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECity.InnerSingleton, Z_Construct_UEnum_APITime_ECity_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECity.InnerSingleton;
	}
	DEFINE_FUNCTION(AAPITimeGameModeBase::execGetCurrentTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetCurrentTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAPITimeGameModeBase::execSwitchOnCity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchOnCity();
		P_NATIVE_END;
	}
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
			{ "GetCurrentTime", &AAPITimeGameModeBase::execGetCurrentTime },
			{ "SendHTTPGet", &AAPITimeGameModeBase::execSendHTTPGet },
			{ "SwitchOnCity", &AAPITimeGameModeBase::execSwitchOnCity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAPITimeGameModeBase_GetCurrentTime_Statics
	{
		struct APITimeGameModeBase_eventGetCurrentTime_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AAPITimeGameModeBase_GetCurrentTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APITimeGameModeBase_eventGetCurrentTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAPITimeGameModeBase_GetCurrentTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAPITimeGameModeBase_GetCurrentTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAPITimeGameModeBase_GetCurrentTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "APITimeGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAPITimeGameModeBase_GetCurrentTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAPITimeGameModeBase, nullptr, "GetCurrentTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAPITimeGameModeBase_GetCurrentTime_Statics::APITimeGameModeBase_eventGetCurrentTime_Parms), Z_Construct_UFunction_AAPITimeGameModeBase_GetCurrentTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAPITimeGameModeBase_GetCurrentTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAPITimeGameModeBase_GetCurrentTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAPITimeGameModeBase_GetCurrentTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAPITimeGameModeBase_GetCurrentTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAPITimeGameModeBase_GetCurrentTime_Statics::FuncParams);
		}
		return ReturnFunction;
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
		{ "Comment", "//used to send the HTTP request\n" },
		{ "ModuleRelativePath", "APITimeGameModeBase.h" },
		{ "ToolTip", "used to send the HTTP request" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAPITimeGameModeBase_SendHTTPGet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAPITimeGameModeBase, nullptr, "SendHTTPGet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAPITimeGameModeBase_SendHTTPGet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAPITimeGameModeBase_SendHTTPGet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAPITimeGameModeBase_SendHTTPGet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAPITimeGameModeBase_SendHTTPGet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAPITimeGameModeBase_SwitchOnCity_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAPITimeGameModeBase_SwitchOnCity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "APITimeGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAPITimeGameModeBase_SwitchOnCity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAPITimeGameModeBase, nullptr, "SwitchOnCity", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAPITimeGameModeBase_SwitchOnCity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAPITimeGameModeBase_SwitchOnCity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAPITimeGameModeBase_SwitchOnCity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAPITimeGameModeBase_SwitchOnCity_Statics::FuncParams);
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAPITimeGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_APITime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAPITimeGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAPITimeGameModeBase_GetCurrentTime, "GetCurrentTime" }, // 3795760466
		{ &Z_Construct_UFunction_AAPITimeGameModeBase_SendHTTPGet, "SendHTTPGet" }, // 1342926870
		{ &Z_Construct_UFunction_AAPITimeGameModeBase_SwitchOnCity, "SwitchOnCity" }, // 708493405
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAPITimeGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "APITimeGameModeBase.h" },
		{ "ModuleRelativePath", "APITimeGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAPITimeGameModeBase_Statics::NewProp_Time_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Time" },
		{ "ModuleRelativePath", "APITimeGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAPITimeGameModeBase_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAPITimeGameModeBase, Time), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_AAPITimeGameModeBase_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAPITimeGameModeBase_Statics::NewProp_Time_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAPITimeGameModeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAPITimeGameModeBase_Statics::NewProp_Time,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAPITimeGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAPITimeGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAPITimeGameModeBase_Statics::ClassParams = {
		&AAPITimeGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAPITimeGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAPITimeGameModeBase_Statics::PropPointers),
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
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EmanuelsProjects_UnrealEngineProjects_Time_API_APITime_Source_APITime_APITimeGameModeBase_h_Statics::EnumInfo[] = {
		{ ECity_StaticEnum, TEXT("ECity"), &Z_Registration_Info_UEnum_ECity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2258063495U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EmanuelsProjects_UnrealEngineProjects_Time_API_APITime_Source_APITime_APITimeGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAPITimeGameModeBase, AAPITimeGameModeBase::StaticClass, TEXT("AAPITimeGameModeBase"), &Z_Registration_Info_UClass_AAPITimeGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAPITimeGameModeBase), 1033237221U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EmanuelsProjects_UnrealEngineProjects_Time_API_APITime_Source_APITime_APITimeGameModeBase_h_1593400530(TEXT("/Script/APITime"),
		Z_CompiledInDeferFile_FID_EmanuelsProjects_UnrealEngineProjects_Time_API_APITime_Source_APITime_APITimeGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EmanuelsProjects_UnrealEngineProjects_Time_API_APITime_Source_APITime_APITimeGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_EmanuelsProjects_UnrealEngineProjects_Time_API_APITime_Source_APITime_APITimeGameModeBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EmanuelsProjects_UnrealEngineProjects_Time_API_APITime_Source_APITime_APITimeGameModeBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
