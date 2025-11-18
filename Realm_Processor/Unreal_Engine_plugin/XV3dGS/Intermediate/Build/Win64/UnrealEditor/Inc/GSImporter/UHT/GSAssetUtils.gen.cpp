// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GSImporter/Public/GSAssetUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSAssetUtils() {}

// Begin Cross Module References
GSIMPORTER_API UEnum* Z_Construct_UEnum_GSImporter_EPlyFormat();
UPackage* Z_Construct_UPackage__Script_GSImporter();
// End Cross Module References

// Begin Enum EPlyFormat
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlyFormat;
static UEnum* EPlyFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPlyFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPlyFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GSImporter_EPlyFormat, (UObject*)Z_Construct_UPackage__Script_GSImporter(), TEXT("EPlyFormat"));
	}
	return Z_Registration_Info_UEnum_EPlyFormat.OuterSingleton;
}
template<> GSIMPORTER_API UEnum* StaticEnum<EPlyFormat>()
{
	return EPlyFormat_StaticEnum();
}
struct Z_Construct_UEnum_GSImporter_EPlyFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GSAssetUtils.h" },
		{ "PF_INVALID.Name", "PF_INVALID" },
		{ "PF_Sh0.Name", "PF_Sh0" },
		{ "PF_Sh3.Name", "PF_Sh3" },
		{ "PF_SH3_RGB.Name", "PF_SH3_RGB" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "PF_Sh3", (int64)PF_Sh3 },
		{ "PF_Sh0", (int64)PF_Sh0 },
		{ "PF_SH3_RGB", (int64)PF_SH3_RGB },
		{ "PF_INVALID", (int64)PF_INVALID },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GSImporter_EPlyFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GSImporter,
	nullptr,
	"EPlyFormat",
	"EPlyFormat",
	Z_Construct_UEnum_GSImporter_EPlyFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GSImporter_EPlyFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GSImporter_EPlyFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GSImporter_EPlyFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GSImporter_EPlyFormat()
{
	if (!Z_Registration_Info_UEnum_EPlyFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlyFormat.InnerSingleton, Z_Construct_UEnum_GSImporter_EPlyFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPlyFormat.InnerSingleton;
}
// End Enum EPlyFormat

// Begin Registration
struct Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_4_v07_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSImporter_Public_GSAssetUtils_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPlyFormat_StaticEnum, TEXT("EPlyFormat"), &Z_Registration_Info_UEnum_EPlyFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1177662922U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_4_v07_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSImporter_Public_GSAssetUtils_h_3555663476(TEXT("/Script/GSImporter"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_4_v07_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSImporter_Public_GSAssetUtils_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_4_v07_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSImporter_Public_GSAssetUtils_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
