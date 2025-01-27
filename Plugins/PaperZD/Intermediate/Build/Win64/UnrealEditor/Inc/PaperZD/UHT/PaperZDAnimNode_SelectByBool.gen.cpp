// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNodes/PaperZDAnimNode_SelectByBool.h"
#include "AnimNodes/PaperZDAnimNode_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDAnimNode_SelectByBool() {}
// Cross Module References
	PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimDataLink();
	PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_Base();
	PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool();
	UPackage* Z_Construct_UPackage__Script_PaperZD();
// End Cross Module References

static_assert(std::is_polymorphic<FPaperZDAnimNode_SelectByBool>() == std::is_polymorphic<FPaperZDAnimNode_Base>(), "USTRUCT FPaperZDAnimNode_SelectByBool cannot be polymorphic unless super FPaperZDAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaperZDAnimNode_SelectByBool;
class UScriptStruct* FPaperZDAnimNode_SelectByBool::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaperZDAnimNode_SelectByBool.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaperZDAnimNode_SelectByBool.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool, (UObject*)Z_Construct_UPackage__Script_PaperZD(), TEXT("PaperZDAnimNode_SelectByBool"));
	}
	return Z_Registration_Info_UScriptStruct_PaperZDAnimNode_SelectByBool.OuterSingleton;
}
template<> PAPERZD_API UScriptStruct* StaticStruct<FPaperZDAnimNode_SelectByBool>()
{
	return FPaperZDAnimNode_SelectByBool::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSelectValue_MetaData[];
#endif
		static void NewProp_bSelectValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateInactiveAnimation_MetaData[];
#endif
		static void NewProp_bUpdateInactiveAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateInactiveAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetOnChange_MetaData[];
#endif
		static void NewProp_bResetOnChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetOnChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrueAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrueAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FalseAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FalseAnimation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Selects between two animations depending on a given boolean value.\n */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_SelectByBool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Selects between two animations depending on a given boolean value." },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperZDAnimNode_SelectByBool>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool_Statics::NewProp_bSelectValue_MetaData[] = {
		{ "AlwaysAsPin", "" },
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The value that drives the selection. */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_SelectByBool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The value that drives the selection." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool_Statics::NewProp_bSelectValue_SetBit(void* Obj)
	{
		((FPaperZDAnimNode_SelectByBool*)Obj)->bSelectValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool_Statics::NewProp_bSelectValue = { "bSelectValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPaperZDAnimNode_SelectByBool), &Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool_Statics::NewProp_bSelectValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool_Statics::NewProp_bSelectValue_MetaData), Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool_Statics::NewProp_bSelectValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool_Statics::NewProp_bUpdateInactiveAnimation_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If true, the inactive animation will still update its playback progress as if its still running.\n\x09 * Switching between animations will not reset them and they will just take from where they were.\n\x09 * Disabling this pauses animations update and the inactive animation will be \"frozen in time\" until selected again.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_SelectByBool.h" },
		{ "NeverAsPin", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the inactive animation will still update its playback progress as if its still running.\nSwitching between animations will not reset them and they will just take from where they were.\nDisabling this pauses animations update and the inactive animation will be \"frozen in time\" until selected again." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool_Statics::NewProp_bUpdateInactiveAnimation_SetBit(void* Obj)
	{
		((FPaperZDAnimNode_SelectByBool*)Obj)->bUpdateInactiveAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool_Statics::NewProp_bUpdateInactiveAnimation = { "bUpdateInactiveAnimation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPaperZDAnimNode_SelectByBool), &Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool_Statics::NewProp_bUpdateInactiveAnimation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool_Statics::NewProp_bUpdateInactiveAnimation_MetaData), Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool_Statics::NewProp_bUpdateInactiveAnimation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool_Statics::NewProp_bResetOnChange_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* If animation aren't updating while inactive this value will force them to \"reset\" to 0 when they become relevant again. */" },
#endif
		{ "EditCondition", "!bUpdateInactiveAnimation" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_SelectByBool.h" },
		{ "NeverAsPin", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If animation aren't updating while inactive this value will force them to \"reset\" to 0 when they become relevant again." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool_Statics::NewProp_bResetOnChange_SetBit(void* Obj)
	{
		((FPaperZDAnimNode_SelectByBool*)Obj)->bResetOnChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool_Statics::NewProp_bResetOnChange = { "bResetOnChange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPaperZDAnimNode_SelectByBool), &Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool_Statics::NewProp_bResetOnChange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool_Statics::NewProp_bResetOnChange_MetaData), Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool_Statics::NewProp_bResetOnChange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool_Statics::NewProp_TrueAnimation_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Animation to show when the select value is true. */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_SelectByBool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Animation to show when the select value is true." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool_Statics::NewProp_TrueAnimation = { "TrueAnimation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperZDAnimNode_SelectByBool, TrueAnimation), Z_Construct_UScriptStruct_FPaperZDAnimDataLink, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool_Statics::NewProp_TrueAnimation_MetaData), Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool_Statics::NewProp_TrueAnimation_MetaData) }; // 508956938
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool_Statics::NewProp_FalseAnimation_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Animation to show when the select value is false. */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_SelectByBool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Animation to show when the select value is false." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool_Statics::NewProp_FalseAnimation = { "FalseAnimation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperZDAnimNode_SelectByBool, FalseAnimation), Z_Construct_UScriptStruct_FPaperZDAnimDataLink, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool_Statics::NewProp_FalseAnimation_MetaData), Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool_Statics::NewProp_FalseAnimation_MetaData) }; // 508956938
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool_Statics::NewProp_bSelectValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool_Statics::NewProp_bUpdateInactiveAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool_Statics::NewProp_bResetOnChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool_Statics::NewProp_TrueAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool_Statics::NewProp_FalseAnimation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
		Z_Construct_UScriptStruct_FPaperZDAnimNode_Base,
		&NewStructOps,
		"PaperZDAnimNode_SelectByBool",
		Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool_Statics::PropPointers),
		sizeof(FPaperZDAnimNode_SelectByBool),
		alignof(FPaperZDAnimNode_SelectByBool),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool()
	{
		if (!Z_Registration_Info_UScriptStruct_PaperZDAnimNode_SelectByBool.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaperZDAnimNode_SelectByBool.InnerSingleton, Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PaperZDAnimNode_SelectByBool.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_BioloG_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_SelectByBool_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BioloG_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_SelectByBool_h_Statics::ScriptStructInfo[] = {
		{ FPaperZDAnimNode_SelectByBool::StaticStruct, Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool_Statics::NewStructOps, TEXT("PaperZDAnimNode_SelectByBool"), &Z_Registration_Info_UScriptStruct_PaperZDAnimNode_SelectByBool, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperZDAnimNode_SelectByBool), 3000941000U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BioloG_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_SelectByBool_h_2983592230(TEXT("/Script/PaperZD"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_BioloG_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_SelectByBool_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BioloG_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_SelectByBool_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
