// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Graphs/Nodes/PaperZDStateGraphNode_Root.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDStateGraphNode_Root() {}
// Cross Module References
	PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDStateGraphNode();
	PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDStateGraphNode_Root();
	PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDStateGraphNode_Root_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PaperZDEditor();
// End Cross Module References
	void UPaperZDStateGraphNode_Root::StaticRegisterNativesUPaperZDStateGraphNode_Root()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperZDStateGraphNode_Root);
	UClass* Z_Construct_UClass_UPaperZDStateGraphNode_Root_NoRegister()
	{
		return UPaperZDStateGraphNode_Root::StaticClass();
	}
	struct Z_Construct_UClass_UPaperZDStateGraphNode_Root_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperZDStateGraphNode_Root_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPaperZDStateGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_PaperZDEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateGraphNode_Root_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDStateGraphNode_Root_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Entry point of the state machine.\n */" },
#endif
		{ "IncludePath", "Graphs/Nodes/PaperZDStateGraphNode_Root.h" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDStateGraphNode_Root.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Entry point of the state machine." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperZDStateGraphNode_Root_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDStateGraphNode_Root>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDStateGraphNode_Root_Statics::ClassParams = {
		&UPaperZDStateGraphNode_Root::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateGraphNode_Root_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDStateGraphNode_Root_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPaperZDStateGraphNode_Root()
	{
		if (!Z_Registration_Info_UClass_UPaperZDStateGraphNode_Root.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDStateGraphNode_Root.OuterSingleton, Z_Construct_UClass_UPaperZDStateGraphNode_Root_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaperZDStateGraphNode_Root.OuterSingleton;
	}
	template<> PAPERZDEDITOR_API UClass* StaticClass<UPaperZDStateGraphNode_Root>()
	{
		return UPaperZDStateGraphNode_Root::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDStateGraphNode_Root);
	UPaperZDStateGraphNode_Root::~UPaperZDStateGraphNode_Root() {}
	struct Z_CompiledInDeferFile_FID_BioloG_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_Root_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BioloG_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_Root_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDStateGraphNode_Root, UPaperZDStateGraphNode_Root::StaticClass, TEXT("UPaperZDStateGraphNode_Root"), &Z_Registration_Info_UClass_UPaperZDStateGraphNode_Root, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDStateGraphNode_Root), 1556019777U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BioloG_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_Root_h_1389905452(TEXT("/Script/PaperZDEditor"),
		Z_CompiledInDeferFile_FID_BioloG_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_Root_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BioloG_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_Root_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
