// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GSEditor/Private/Tools/GSBrushTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSBrushTool() {}

// Begin Cross Module References
GSEDITOR_API UClass* Z_Construct_UClass_UGSBrushTool();
GSEDITOR_API UClass* Z_Construct_UClass_UGSBrushTool_NoRegister();
GSEDITOR_API UClass* Z_Construct_UClass_UGSBrushToolBuilder();
GSEDITOR_API UClass* Z_Construct_UClass_UGSBrushToolBuilder_NoRegister();
GSEDITOR_API UClass* Z_Construct_UClass_UGSBrushToolProperties();
GSEDITOR_API UClass* Z_Construct_UClass_UGSBrushToolProperties_NoRegister();
GSRUNTIME_API UEnum* Z_Construct_UEnum_GSRuntime_SelectModel();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMeshSurfacePointTool();
UPackage* Z_Construct_UPackage__Script_GSEditor();
// End Cross Module References

// Begin Class UGSBrushToolBuilder
void UGSBrushToolBuilder::StaticRegisterNativesUGSBrushToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSBrushToolBuilder);
UClass* Z_Construct_UClass_UGSBrushToolBuilder_NoRegister()
{
	return UGSBrushToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UGSBrushToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/GSBrushTool.h" },
		{ "ModuleRelativePath", "Private/Tools/GSBrushTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSBrushToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGSBrushToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_GSEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSBrushToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSBrushToolBuilder_Statics::ClassParams = {
	&UGSBrushToolBuilder::StaticClass,
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
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSBrushToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSBrushToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSBrushToolBuilder()
{
	if (!Z_Registration_Info_UClass_UGSBrushToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSBrushToolBuilder.OuterSingleton, Z_Construct_UClass_UGSBrushToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSBrushToolBuilder.OuterSingleton;
}
template<> GSEDITOR_API UClass* StaticClass<UGSBrushToolBuilder>()
{
	return UGSBrushToolBuilder::StaticClass();
}
UGSBrushToolBuilder::UGSBrushToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSBrushToolBuilder);
UGSBrushToolBuilder::~UGSBrushToolBuilder() {}
// End Class UGSBrushToolBuilder

// Begin Class UGSBrushToolProperties Function Cancel
struct Z_Construct_UFunction_UGSBrushToolProperties_Cancel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Select" },
		{ "DisplayPriority", "3" },
		{ "ModuleRelativePath", "Private/Tools/GSBrushTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSBrushToolProperties_Cancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSBrushToolProperties, nullptr, "Cancel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSBrushToolProperties_Cancel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSBrushToolProperties_Cancel_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGSBrushToolProperties_Cancel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSBrushToolProperties_Cancel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSBrushToolProperties::execCancel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Cancel();
	P_NATIVE_END;
}
// End Class UGSBrushToolProperties Function Cancel

// Begin Class UGSBrushToolProperties Function Delete
struct Z_Construct_UFunction_UGSBrushToolProperties_Delete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Apply" },
		{ "Comment", "//UFUNCTION(CallInEditor, Category = \"Apply\", meta = (DisplayPriority = 1))\n//void Test();\n//\xe5\x88\xa0\xe9\x99\xa4\xe9\x80\x89\xe6\x8b\xa9\xe7\x9a\x84GS\xe7\x82\xb9\n" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Private/Tools/GSBrushTool.h" },
		{ "ToolTip", "UFUNCTION(CallInEditor, Category = \"Apply\", meta = (DisplayPriority = 1))\nvoid Test();\n\xe5\x88\xa0\xe9\x99\xa4\xe9\x80\x89\xe6\x8b\xa9\xe7\x9a\x84GS\xe7\x82\xb9" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSBrushToolProperties_Delete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSBrushToolProperties, nullptr, "Delete", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSBrushToolProperties_Delete_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSBrushToolProperties_Delete_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGSBrushToolProperties_Delete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSBrushToolProperties_Delete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSBrushToolProperties::execDelete)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Delete();
	P_NATIVE_END;
}
// End Class UGSBrushToolProperties Function Delete

// Begin Class UGSBrushToolProperties Function Redo
struct Z_Construct_UFunction_UGSBrushToolProperties_Redo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Select" },
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Private/Tools/GSBrushTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSBrushToolProperties_Redo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSBrushToolProperties, nullptr, "Redo", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSBrushToolProperties_Redo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSBrushToolProperties_Redo_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGSBrushToolProperties_Redo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSBrushToolProperties_Redo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSBrushToolProperties::execRedo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Redo();
	P_NATIVE_END;
}
// End Class UGSBrushToolProperties Function Redo

// Begin Class UGSBrushToolProperties Function Undo
struct Z_Construct_UFunction_UGSBrushToolProperties_Undo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Select" },
		{ "Comment", "//\xe4\xbf\xae\xe6\x94\xb9\xe5\xbd\x93\xe5\x89\x8d\xe9\x80\x89\xe6\x8b\xa9\n" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Private/Tools/GSBrushTool.h" },
		{ "ToolTip", "\xe4\xbf\xae\xe6\x94\xb9\xe5\xbd\x93\xe5\x89\x8d\xe9\x80\x89\xe6\x8b\xa9" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSBrushToolProperties_Undo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSBrushToolProperties, nullptr, "Undo", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSBrushToolProperties_Undo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSBrushToolProperties_Undo_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGSBrushToolProperties_Undo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSBrushToolProperties_Undo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSBrushToolProperties::execUndo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Undo();
	P_NATIVE_END;
}
// End Class UGSBrushToolProperties Function Undo

// Begin Class UGSBrushToolProperties
void UGSBrushToolProperties::StaticRegisterNativesUGSBrushToolProperties()
{
	UClass* Class = UGSBrushToolProperties::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Cancel", &UGSBrushToolProperties::execCancel },
		{ "Delete", &UGSBrushToolProperties::execDelete },
		{ "Redo", &UGSBrushToolProperties::execRedo },
		{ "Undo", &UGSBrushToolProperties::execUndo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSBrushToolProperties);
UClass* Z_Construct_UClass_UGSBrushToolProperties_NoRegister()
{
	return UGSBrushToolProperties::StaticClass();
}
struct Z_Construct_UClass_UGSBrushToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/GSBrushTool.h" },
		{ "ModuleRelativePath", "Private/Tools/GSBrushTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushRadius_MetaData[] = {
		{ "Category", "Select" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "//\xe7\xac\x94\xe5\x88\xb7\xe7\x9a\x84\xe5\x8d\x8a\xe5\xbe\x84\n" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Private/Tools/GSBrushTool.h" },
		{ "ToolTip", "\xe7\xac\x94\xe5\x88\xb7\xe7\x9a\x84\xe5\x8d\x8a\xe5\xbe\x84" },
		{ "UIMax", "500" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[] = {
		{ "Category", "Select" },
		{ "Comment", "//\xe9\x80\x89\xe6\x8b\xa9\xe6\xa8\xa1\xe5\xbc\x8f\n" },
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Private/Tools/GSBrushTool.h" },
		{ "ToolTip", "\xe9\x80\x89\xe6\x8b\xa9\xe6\xa8\xa1\xe5\xbc\x8f" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_BrushRadius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Model_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Model;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGSBrushToolProperties_Cancel, "Cancel" }, // 1492162601
		{ &Z_Construct_UFunction_UGSBrushToolProperties_Delete, "Delete" }, // 3847467851
		{ &Z_Construct_UFunction_UGSBrushToolProperties_Redo, "Redo" }, // 3792286576
		{ &Z_Construct_UFunction_UGSBrushToolProperties_Undo, "Undo" }, // 3255126352
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSBrushToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGSBrushToolProperties_Statics::NewProp_BrushRadius = { "BrushRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSBrushToolProperties, BrushRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushRadius_MetaData), NewProp_BrushRadius_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGSBrushToolProperties_Statics::NewProp_Model_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGSBrushToolProperties_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSBrushToolProperties, Model), Z_Construct_UEnum_GSRuntime_SelectModel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Model_MetaData), NewProp_Model_MetaData) }; // 1867089496
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSBrushToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSBrushToolProperties_Statics::NewProp_BrushRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSBrushToolProperties_Statics::NewProp_Model_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSBrushToolProperties_Statics::NewProp_Model,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSBrushToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGSBrushToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_GSEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSBrushToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSBrushToolProperties_Statics::ClassParams = {
	&UGSBrushToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGSBrushToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGSBrushToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSBrushToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSBrushToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSBrushToolProperties()
{
	if (!Z_Registration_Info_UClass_UGSBrushToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSBrushToolProperties.OuterSingleton, Z_Construct_UClass_UGSBrushToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSBrushToolProperties.OuterSingleton;
}
template<> GSEDITOR_API UClass* StaticClass<UGSBrushToolProperties>()
{
	return UGSBrushToolProperties::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSBrushToolProperties);
UGSBrushToolProperties::~UGSBrushToolProperties() {}
// End Class UGSBrushToolProperties

// Begin Class UGSBrushTool
void UGSBrushTool::StaticRegisterNativesUGSBrushTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSBrushTool);
UClass* Z_Construct_UClass_UGSBrushTool_NoRegister()
{
	return UGSBrushTool::StaticClass();
}
struct Z_Construct_UClass_UGSBrushTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/GSBrushTool.h" },
		{ "ModuleRelativePath", "Private/Tools/GSBrushTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushProperties_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tools/GSBrushTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrushProperties;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSBrushTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGSBrushTool_Statics::NewProp_BrushProperties = { "BrushProperties", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSBrushTool, BrushProperties), Z_Construct_UClass_UGSBrushToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushProperties_MetaData), NewProp_BrushProperties_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSBrushTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSBrushTool_Statics::NewProp_BrushProperties,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSBrushTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGSBrushTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshSurfacePointTool,
	(UObject* (*)())Z_Construct_UPackage__Script_GSEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSBrushTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSBrushTool_Statics::ClassParams = {
	&UGSBrushTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGSBrushTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGSBrushTool_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSBrushTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSBrushTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSBrushTool()
{
	if (!Z_Registration_Info_UClass_UGSBrushTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSBrushTool.OuterSingleton, Z_Construct_UClass_UGSBrushTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSBrushTool.OuterSingleton;
}
template<> GSEDITOR_API UClass* StaticClass<UGSBrushTool>()
{
	return UGSBrushTool::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSBrushTool);
UGSBrushTool::~UGSBrushTool() {}
// End Class UGSBrushTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_4_v07_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSEditor_Private_Tools_GSBrushTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGSBrushToolBuilder, UGSBrushToolBuilder::StaticClass, TEXT("UGSBrushToolBuilder"), &Z_Registration_Info_UClass_UGSBrushToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSBrushToolBuilder), 3885229657U) },
		{ Z_Construct_UClass_UGSBrushToolProperties, UGSBrushToolProperties::StaticClass, TEXT("UGSBrushToolProperties"), &Z_Registration_Info_UClass_UGSBrushToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSBrushToolProperties), 2156722389U) },
		{ Z_Construct_UClass_UGSBrushTool, UGSBrushTool::StaticClass, TEXT("UGSBrushTool"), &Z_Registration_Info_UClass_UGSBrushTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSBrushTool), 3345573872U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_4_v07_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSEditor_Private_Tools_GSBrushTool_h_780566710(TEXT("/Script/GSEditor"),
	Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_4_v07_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSEditor_Private_Tools_GSBrushTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_4_v07_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSEditor_Private_Tools_GSBrushTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
