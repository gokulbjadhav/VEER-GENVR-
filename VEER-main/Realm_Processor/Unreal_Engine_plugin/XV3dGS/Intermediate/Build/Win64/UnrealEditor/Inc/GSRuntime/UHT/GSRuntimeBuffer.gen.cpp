// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GSRuntime/Public/GSRuntimeBuffer.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSRuntimeBuffer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GSRUNTIME_API UClass* Z_Construct_UClass_UGSRuntimeBuffer();
GSRUNTIME_API UClass* Z_Construct_UClass_UGSRuntimeBuffer_NoRegister();
UPackage* Z_Construct_UPackage__Script_GSRuntime();
// End Cross Module References

// Begin Class UGSRuntimeBuffer
void UGSRuntimeBuffer::StaticRegisterNativesUGSRuntimeBuffer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSRuntimeBuffer);
UClass* Z_Construct_UClass_UGSRuntimeBuffer_NoRegister()
{
	return UGSRuntimeBuffer::StaticClass();
}
struct Z_Construct_UClass_UGSRuntimeBuffer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GSRuntimeBuffer.h" },
		{ "ModuleRelativePath", "Public/GSRuntimeBuffer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSRuntimeBuffer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGSRuntimeBuffer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GSRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSRuntimeBuffer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSRuntimeBuffer_Statics::ClassParams = {
	&UGSRuntimeBuffer::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSRuntimeBuffer_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSRuntimeBuffer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSRuntimeBuffer()
{
	if (!Z_Registration_Info_UClass_UGSRuntimeBuffer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSRuntimeBuffer.OuterSingleton, Z_Construct_UClass_UGSRuntimeBuffer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSRuntimeBuffer.OuterSingleton;
}
template<> GSRUNTIME_API UClass* StaticClass<UGSRuntimeBuffer>()
{
	return UGSRuntimeBuffer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSRuntimeBuffer);
UGSRuntimeBuffer::~UGSRuntimeBuffer() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UGSRuntimeBuffer)
// End Class UGSRuntimeBuffer

// Begin Registration
struct Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_4_v07_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GSRuntimeBuffer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGSRuntimeBuffer, UGSRuntimeBuffer::StaticClass, TEXT("UGSRuntimeBuffer"), &Z_Registration_Info_UClass_UGSRuntimeBuffer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSRuntimeBuffer), 1737264800U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_4_v07_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GSRuntimeBuffer_h_2836372044(TEXT("/Script/GSRuntime"),
	Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_4_v07_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GSRuntimeBuffer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_4_v07_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GSRuntimeBuffer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
