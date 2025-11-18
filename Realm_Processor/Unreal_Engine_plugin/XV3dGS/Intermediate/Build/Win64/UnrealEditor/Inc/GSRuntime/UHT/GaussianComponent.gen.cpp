// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GSRuntime/Public/GaussianComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGaussianComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GSRUNTIME_API UClass* Z_Construct_UClass_UGaussianComponent();
GSRUNTIME_API UClass* Z_Construct_UClass_UGaussianComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_GSRuntime();
// End Cross Module References

// Begin Class UGaussianComponent
void UGaussianComponent::StaticRegisterNativesUGaussianComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGaussianComponent);
UClass* Z_Construct_UClass_UGaussianComponent_NoRegister()
{
	return UGaussianComponent::StaticClass();
}
struct Z_Construct_UClass_UGaussianComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GaussianComponent.h" },
		{ "ModuleRelativePath", "Public/GaussianComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGaussianComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGaussianComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GSRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGaussianComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGaussianComponent_Statics::ClassParams = {
	&UGaussianComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGaussianComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGaussianComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGaussianComponent()
{
	if (!Z_Registration_Info_UClass_UGaussianComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGaussianComponent.OuterSingleton, Z_Construct_UClass_UGaussianComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGaussianComponent.OuterSingleton;
}
template<> GSRUNTIME_API UClass* StaticClass<UGaussianComponent>()
{
	return UGaussianComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGaussianComponent);
// End Class UGaussianComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_4_v07_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGaussianComponent, UGaussianComponent::StaticClass, TEXT("UGaussianComponent"), &Z_Registration_Info_UClass_UGaussianComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGaussianComponent), 481645723U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_4_v07_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianComponent_h_2817632801(TEXT("/Script/GSRuntime"),
	Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_4_v07_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_4_v07_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
