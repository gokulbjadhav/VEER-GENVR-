// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GSEditor/Public/GSEditorEditorMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSEditorEditorMode() {}

// Begin Cross Module References
GSEDITOR_API UClass* Z_Construct_UClass_UGSEditorEditorMode();
GSEDITOR_API UClass* Z_Construct_UClass_UGSEditorEditorMode_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UEdMode();
UPackage* Z_Construct_UPackage__Script_GSEditor();
// End Cross Module References

// Begin Class UGSEditorEditorMode
void UGSEditorEditorMode::StaticRegisterNativesUGSEditorEditorMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSEditorEditorMode);
UClass* Z_Construct_UClass_UGSEditorEditorMode_NoRegister()
{
	return UGSEditorEditorMode::StaticClass();
}
struct Z_Construct_UClass_UGSEditorEditorMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This class provides an example of how to extend a UEdMode to add some simple tools\n * using the InteractiveTools framework. The various UEdMode input event handlers (see UEdMode.h)\n * forward events to a UEdModeInteractiveToolsContext instance, which\n * has all the logic for interacting with the InputRouter, ToolManager, etc.\n * The functions provided here are the minimum to get started inserting some custom behavior.\n * Take a look at the UEdMode markup for more extensibility options.\n */" },
		{ "IncludePath", "GSEditorEditorMode.h" },
		{ "ModuleRelativePath", "Public/GSEditorEditorMode.h" },
		{ "ToolTip", "This class provides an example of how to extend a UEdMode to add some simple tools\nusing the InteractiveTools framework. The various UEdMode input event handlers (see UEdMode.h)\nforward events to a UEdModeInteractiveToolsContext instance, which\nhas all the logic for interacting with the InputRouter, ToolManager, etc.\nThe functions provided here are the minimum to get started inserting some custom behavior.\nTake a look at the UEdMode markup for more extensibility options." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSEditorEditorMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGSEditorEditorMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdMode,
	(UObject* (*)())Z_Construct_UPackage__Script_GSEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSEditorEditorMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSEditorEditorMode_Statics::ClassParams = {
	&UGSEditorEditorMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSEditorEditorMode_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSEditorEditorMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSEditorEditorMode()
{
	if (!Z_Registration_Info_UClass_UGSEditorEditorMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSEditorEditorMode.OuterSingleton, Z_Construct_UClass_UGSEditorEditorMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSEditorEditorMode.OuterSingleton;
}
template<> GSEDITOR_API UClass* StaticClass<UGSEditorEditorMode>()
{
	return UGSEditorEditorMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSEditorEditorMode);
// End Class UGSEditorEditorMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_4_v07_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSEditor_Public_GSEditorEditorMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGSEditorEditorMode, UGSEditorEditorMode::StaticClass, TEXT("UGSEditorEditorMode"), &Z_Registration_Info_UClass_UGSEditorEditorMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSEditorEditorMode), 606640457U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_4_v07_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSEditor_Public_GSEditorEditorMode_h_1429445918(TEXT("/Script/GSEditor"),
	Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_4_v07_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSEditor_Public_GSEditorEditorMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_4_v07_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSEditor_Public_GSEditorEditorMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
