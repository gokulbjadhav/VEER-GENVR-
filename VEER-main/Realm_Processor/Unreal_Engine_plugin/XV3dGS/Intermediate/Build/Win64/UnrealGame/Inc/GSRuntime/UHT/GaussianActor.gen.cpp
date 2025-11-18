// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GSRuntime/Public/GaussianActor.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGaussianActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_AActor();
GSRUNTIME_API UClass* Z_Construct_UClass_AGaussianActor();
GSRUNTIME_API UClass* Z_Construct_UClass_AGaussianActor_NoRegister();
GSRUNTIME_API UClass* Z_Construct_UClass_UGaussianComponent_NoRegister();
GSRUNTIME_API UClass* Z_Construct_UClass_UGaussianCropVolumeComponent_NoRegister();
GSRUNTIME_API UEnum* Z_Construct_UEnum_GSRuntime_EGaussianLodTVisType();
GSRUNTIME_API UEnum* Z_Construct_UEnum_GSRuntime_SelectModel();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_GSRuntime();
// End Cross Module References

// Begin Enum EGaussianLodTVisType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGaussianLodTVisType;
static UEnum* EGaussianLodTVisType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGaussianLodTVisType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGaussianLodTVisType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GSRuntime_EGaussianLodTVisType, (UObject*)Z_Construct_UPackage__Script_GSRuntime(), TEXT("EGaussianLodTVisType"));
	}
	return Z_Registration_Info_UEnum_EGaussianLodTVisType.OuterSingleton;
}
template<> GSRUNTIME_API UEnum* StaticEnum<EGaussianLodTVisType>()
{
	return EGaussianLodTVisType_StaticEnum();
}
struct Z_Construct_UEnum_GSRuntime_EGaussianLodTVisType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// for 1000k test now\n//#define MAX_NIAGARA_TEXTURE_WH 1400\n" },
		{ "LodVisSelected.DisplayName", "visit selected LodLevel" },
		{ "LodVisSelected.Name", "EGaussianLodTVisType::LodVisSelected" },
		{ "ModuleRelativePath", "Public/GaussianActor.h" },
		{ "ToolTip", "for 1000k test now\n#define MAX_NIAGARA_TEXTURE_WH 1400" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGaussianLodTVisType::LodVisSelected", (int64)EGaussianLodTVisType::LodVisSelected },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GSRuntime_EGaussianLodTVisType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GSRuntime,
	nullptr,
	"EGaussianLodTVisType",
	"EGaussianLodTVisType",
	Z_Construct_UEnum_GSRuntime_EGaussianLodTVisType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GSRuntime_EGaussianLodTVisType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GSRuntime_EGaussianLodTVisType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GSRuntime_EGaussianLodTVisType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GSRuntime_EGaussianLodTVisType()
{
	if (!Z_Registration_Info_UEnum_EGaussianLodTVisType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGaussianLodTVisType.InnerSingleton, Z_Construct_UEnum_GSRuntime_EGaussianLodTVisType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGaussianLodTVisType.InnerSingleton;
}
// End Enum EGaussianLodTVisType

// Begin Enum SelectModel
#if WITH_EDITORONLY_DATA
static FEnumRegistrationInfo Z_Registration_Info_UEnum_SelectModel;
static UEnum* SelectModel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_SelectModel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_SelectModel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GSRuntime_SelectModel, (UObject*)Z_Construct_UPackage__Script_GSRuntime(), TEXT("SelectModel"));
	}
	return Z_Registration_Info_UEnum_SelectModel.OuterSingleton;
}
template<> GSRUNTIME_API UEnum* StaticEnum<SelectModel>()
{
	return SelectModel_StaticEnum();
}
struct Z_Construct_UEnum_GSRuntime_SelectModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Add.Name", "SelectModel::Add" },
		{ "BlueprintType", "true" },
		{ "Comment", "//\xe7\xac\x94\xe5\x88\xb7\xe9\x80\x89\xe6\x8b\xa9\xe6\xa8\xa1\xe5\xbc\x8f\n" },
		{ "ModuleRelativePath", "Public/GaussianActor.h" },
		{ "Replace.Name", "SelectModel::Replace" },
		{ "Subtract.Name", "SelectModel::Subtract" },
		{ "ToolTip", "\xe7\xac\x94\xe5\x88\xb7\xe9\x80\x89\xe6\x8b\xa9\xe6\xa8\xa1\xe5\xbc\x8f" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "SelectModel::Add", (int64)SelectModel::Add },
		{ "SelectModel::Replace", (int64)SelectModel::Replace },
		{ "SelectModel::Subtract", (int64)SelectModel::Subtract },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GSRuntime_SelectModel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GSRuntime,
	nullptr,
	"SelectModel",
	"SelectModel",
	Z_Construct_UEnum_GSRuntime_SelectModel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GSRuntime_SelectModel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GSRuntime_SelectModel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GSRuntime_SelectModel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GSRuntime_SelectModel()
{
	if (!Z_Registration_Info_UEnum_SelectModel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_SelectModel.InnerSingleton, Z_Construct_UEnum_GSRuntime_SelectModel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_SelectModel.InnerSingleton;
}
#endif // WITH_EDITORONLY_DATA
// End Enum SelectModel

// Begin Class AGaussianActor Function OnCropInfoChangedHandler
struct Z_Construct_UFunction_AGaussianActor_OnCropInfoChangedHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//UNiagaraComponent* NaiveNiagaraComp;\n" },
		{ "ModuleRelativePath", "Public/GaussianActor.h" },
		{ "ToolTip", "UNiagaraComponent* NaiveNiagaraComp;" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGaussianActor_OnCropInfoChangedHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGaussianActor, nullptr, "OnCropInfoChangedHandler", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGaussianActor_OnCropInfoChangedHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGaussianActor_OnCropInfoChangedHandler_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGaussianActor_OnCropInfoChangedHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGaussianActor_OnCropInfoChangedHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGaussianActor::execOnCropInfoChangedHandler)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCropInfoChangedHandler();
	P_NATIVE_END;
}
// End Class AGaussianActor Function OnCropInfoChangedHandler

// Begin Class AGaussianActor Function OnTestHandler
struct Z_Construct_UFunction_AGaussianActor_OnTestHandler_Statics
{
	struct GaussianActor_eventOnTestHandler_Parms
	{
		FString Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GaussianActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AGaussianActor_OnTestHandler_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianActor_eventOnTestHandler_Parms, Result), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGaussianActor_OnTestHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGaussianActor_OnTestHandler_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGaussianActor_OnTestHandler_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGaussianActor_OnTestHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGaussianActor, nullptr, "OnTestHandler", nullptr, nullptr, Z_Construct_UFunction_AGaussianActor_OnTestHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaussianActor_OnTestHandler_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGaussianActor_OnTestHandler_Statics::GaussianActor_eventOnTestHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGaussianActor_OnTestHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGaussianActor_OnTestHandler_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGaussianActor_OnTestHandler_Statics::GaussianActor_eventOnTestHandler_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGaussianActor_OnTestHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGaussianActor_OnTestHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGaussianActor::execOnTestHandler)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTestHandler(Z_Param_Result);
	P_NATIVE_END;
}
// End Class AGaussianActor Function OnTestHandler

// Begin Class AGaussianActor Function reset_niagara
struct Z_Construct_UFunction_AGaussianActor_reset_niagara_Statics
{
	struct GaussianActor_eventreset_niagara_Parms
	{
		UNiagaraComponent* inNiagaraComp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GSPluginBaseTag" },
		{ "ModuleRelativePath", "Public/GaussianActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_inNiagaraComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_inNiagaraComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGaussianActor_reset_niagara_Statics::NewProp_inNiagaraComp = { "inNiagaraComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianActor_eventreset_niagara_Parms, inNiagaraComp), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_inNiagaraComp_MetaData), NewProp_inNiagaraComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGaussianActor_reset_niagara_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGaussianActor_reset_niagara_Statics::NewProp_inNiagaraComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGaussianActor_reset_niagara_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGaussianActor_reset_niagara_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGaussianActor, nullptr, "reset_niagara", nullptr, nullptr, Z_Construct_UFunction_AGaussianActor_reset_niagara_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaussianActor_reset_niagara_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGaussianActor_reset_niagara_Statics::GaussianActor_eventreset_niagara_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGaussianActor_reset_niagara_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGaussianActor_reset_niagara_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGaussianActor_reset_niagara_Statics::GaussianActor_eventreset_niagara_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGaussianActor_reset_niagara()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGaussianActor_reset_niagara_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGaussianActor::execreset_niagara)
{
	P_GET_OBJECT(UNiagaraComponent,Z_Param_inNiagaraComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->reset_niagara(Z_Param_inNiagaraComp);
	P_NATIVE_END;
}
// End Class AGaussianActor Function reset_niagara

// Begin Class AGaussianActor Function Test
#if WITH_EDITOR
struct Z_Construct_UFunction_AGaussianActor_Test_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/GaussianActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGaussianActor_Test_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGaussianActor, nullptr, "Test", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGaussianActor_Test_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGaussianActor_Test_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGaussianActor_Test()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGaussianActor_Test_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(AGaussianActor::execTest)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Test();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class AGaussianActor Function Test

// Begin Class AGaussianActor
void AGaussianActor::StaticRegisterNativesAGaussianActor()
{
	UClass* Class = AGaussianActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnCropInfoChangedHandler", &AGaussianActor::execOnCropInfoChangedHandler },
		{ "OnTestHandler", &AGaussianActor::execOnTestHandler },
		{ "reset_niagara", &AGaussianActor::execreset_niagara },
#if WITH_EDITOR
		{ "Test", &AGaussianActor::execTest },
#endif // WITH_EDITOR
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGaussianActor);
UClass* Z_Construct_UClass_AGaussianActor_NoRegister()
{
	return AGaussianActor::StaticClass();
}
struct Z_Construct_UClass_AGaussianActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GaussianActor.h" },
		{ "ModuleRelativePath", "Public/GaussianActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WithRelighting_MetaData[] = {
		{ "Category", "User Control" },
		{ "ModuleRelativePath", "Public/GaussianActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlbedoTint_MetaData[] = {
		{ "Category", "User Control" },
		{ "ModuleRelativePath", "Public/GaussianActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LodVisType_MetaData[] = {
		{ "Category", "User Control" },
		{ "ModuleRelativePath", "Public/GaussianActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LodVisLevel_MetaData[] = {
		{ "Category", "User Control" },
		{ "Comment", "//-1:dynamic lod\n" },
		{ "ModuleRelativePath", "Public/GaussianActor.h" },
		{ "ToolTip", "-1:dynamic lod" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BufferPackagePath_MetaData[] = {
		{ "Category", "GSPluginBaseTag" },
		{ "Comment", "//-1:dynamic lod\n" },
		{ "ModuleRelativePath", "Public/GaussianActor.h" },
		{ "ToolTip", "-1:dynamic lod" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClipVolumeComponent_MetaData[] = {
		{ "Category", "GSPluginBaseTag" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GaussianActor.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GaussianComponent_MetaData[] = {
		{ "Category", "GSPluginBaseTag" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GaussianActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSample_MetaData[] = {
		{ "Category", "GSPluginBaseTag" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GaussianActor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_WithRelighting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_WithRelighting;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AlbedoTint;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LodVisType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LodVisType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LodVisLevel;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BufferPackagePath;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClipVolumeComponent;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GaussianComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSample;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGaussianActor_OnCropInfoChangedHandler, "OnCropInfoChangedHandler" }, // 1232985690
		{ &Z_Construct_UFunction_AGaussianActor_OnTestHandler, "OnTestHandler" }, // 4106083571
		{ &Z_Construct_UFunction_AGaussianActor_reset_niagara, "reset_niagara" }, // 3563904105
#if WITH_EDITOR
		{ &Z_Construct_UFunction_AGaussianActor_Test, "Test" }, // 2528938779
#endif // WITH_EDITOR
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGaussianActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AGaussianActor_Statics::NewProp_WithRelighting_SetBit(void* Obj)
{
	((AGaussianActor*)Obj)->WithRelighting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGaussianActor_Statics::NewProp_WithRelighting = { "WithRelighting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGaussianActor), &Z_Construct_UClass_AGaussianActor_Statics::NewProp_WithRelighting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WithRelighting_MetaData), NewProp_WithRelighting_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGaussianActor_Statics::NewProp_AlbedoTint = { "AlbedoTint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGaussianActor, AlbedoTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlbedoTint_MetaData), NewProp_AlbedoTint_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AGaussianActor_Statics::NewProp_LodVisType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AGaussianActor_Statics::NewProp_LodVisType = { "LodVisType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGaussianActor, LodVisType), Z_Construct_UEnum_GSRuntime_EGaussianLodTVisType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LodVisType_MetaData), NewProp_LodVisType_MetaData) }; // 4099600024
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGaussianActor_Statics::NewProp_LodVisLevel = { "LodVisLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGaussianActor, LodVisLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LodVisLevel_MetaData), NewProp_LodVisLevel_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AGaussianActor_Statics::NewProp_BufferPackagePath = { "BufferPackagePath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGaussianActor, BufferPackagePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BufferPackagePath_MetaData), NewProp_BufferPackagePath_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGaussianActor_Statics::NewProp_ClipVolumeComponent = { "ClipVolumeComponent", nullptr, (EPropertyFlags)0x01140008000a200d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGaussianActor, ClipVolumeComponent), Z_Construct_UClass_UGaussianCropVolumeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClipVolumeComponent_MetaData), NewProp_ClipVolumeComponent_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGaussianActor_Statics::NewProp_GaussianComponent = { "GaussianComponent", nullptr, (EPropertyFlags)0x00100000000a200d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGaussianActor, GaussianComponent), Z_Construct_UClass_UGaussianComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GaussianComponent_MetaData), NewProp_GaussianComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGaussianActor_Statics::NewProp_NiagaraSample = { "NiagaraSample", nullptr, (EPropertyFlags)0x00100000000a200d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGaussianActor, NiagaraSample), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraSample_MetaData), NewProp_NiagaraSample_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGaussianActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaussianActor_Statics::NewProp_WithRelighting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaussianActor_Statics::NewProp_AlbedoTint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaussianActor_Statics::NewProp_LodVisType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaussianActor_Statics::NewProp_LodVisType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaussianActor_Statics::NewProp_LodVisLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaussianActor_Statics::NewProp_BufferPackagePath,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaussianActor_Statics::NewProp_ClipVolumeComponent,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaussianActor_Statics::NewProp_GaussianComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaussianActor_Statics::NewProp_NiagaraSample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGaussianActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGaussianActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GSRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGaussianActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGaussianActor_Statics::ClassParams = {
	&AGaussianActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGaussianActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGaussianActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGaussianActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AGaussianActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGaussianActor()
{
	if (!Z_Registration_Info_UClass_AGaussianActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGaussianActor.OuterSingleton, Z_Construct_UClass_AGaussianActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGaussianActor.OuterSingleton;
}
template<> GSRUNTIME_API UClass* StaticClass<AGaussianActor>()
{
	return AGaussianActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGaussianActor);
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AGaussianActor)
// End Class AGaussianActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_4_v07_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGaussianLodTVisType_StaticEnum, TEXT("EGaussianLodTVisType"), &Z_Registration_Info_UEnum_EGaussianLodTVisType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4099600024U) },
#if WITH_EDITORONLY_DATA
		{ SelectModel_StaticEnum, TEXT("SelectModel"), &Z_Registration_Info_UEnum_SelectModel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1867089496U) },
#endif // WITH_EDITORONLY_DATA
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGaussianActor, AGaussianActor::StaticClass, TEXT("AGaussianActor"), &Z_Registration_Info_UClass_AGaussianActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGaussianActor), 2095435862U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_4_v07_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_2262267942(TEXT("/Script/GSRuntime"),
	Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_4_v07_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_4_v07_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_4_v07_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_4_v07_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
