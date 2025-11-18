// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GSImporter/Public/GSRuntimeBufferFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSRuntimeBufferFactory() {}

// Begin Cross Module References
GSIMPORTER_API UClass* Z_Construct_UClass_UGSRuntimeBufferFactory();
GSIMPORTER_API UClass* Z_Construct_UClass_UGSRuntimeBufferFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_GSImporter();
// End Cross Module References

// Begin Class UGSRuntimeBufferFactory
void UGSRuntimeBufferFactory::StaticRegisterNativesUGSRuntimeBufferFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSRuntimeBufferFactory);
UClass* Z_Construct_UClass_UGSRuntimeBufferFactory_NoRegister()
{
	return UGSRuntimeBufferFactory::StaticClass();
}
struct Z_Construct_UClass_UGSRuntimeBufferFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GSRuntimeBufferFactory.h" },
		{ "ModuleRelativePath", "Public/GSRuntimeBufferFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSRuntimeBufferFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGSRuntimeBufferFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_GSImporter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSRuntimeBufferFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSRuntimeBufferFactory_Statics::ClassParams = {
	&UGSRuntimeBufferFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSRuntimeBufferFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSRuntimeBufferFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSRuntimeBufferFactory()
{
	if (!Z_Registration_Info_UClass_UGSRuntimeBufferFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSRuntimeBufferFactory.OuterSingleton, Z_Construct_UClass_UGSRuntimeBufferFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSRuntimeBufferFactory.OuterSingleton;
}
template<> GSIMPORTER_API UClass* StaticClass<UGSRuntimeBufferFactory>()
{
	return UGSRuntimeBufferFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSRuntimeBufferFactory);
UGSRuntimeBufferFactory::~UGSRuntimeBufferFactory() {}
// End Class UGSRuntimeBufferFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_4_v07_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSImporter_Public_GSRuntimeBufferFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGSRuntimeBufferFactory, UGSRuntimeBufferFactory::StaticClass, TEXT("UGSRuntimeBufferFactory"), &Z_Registration_Info_UClass_UGSRuntimeBufferFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSRuntimeBufferFactory), 2662004498U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_4_v07_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSImporter_Public_GSRuntimeBufferFactory_h_1505019075(TEXT("/Script/GSImporter"),
	Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_4_v07_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSImporter_Public_GSRuntimeBufferFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_4_v07_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSImporter_Public_GSRuntimeBufferFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
