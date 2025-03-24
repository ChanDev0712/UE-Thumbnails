// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Thumbnail/Public/ThumbnailBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThumbnailBPLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	THUMBNAIL_API UClass* Z_Construct_UClass_UThumbnailFunctionLibrary();
	THUMBNAIL_API UClass* Z_Construct_UClass_UThumbnailFunctionLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Thumbnail();
// End Cross Module References
	DEFINE_FUNCTION(UThumbnailFunctionLibrary::execMakeThumbnail)
	{
		P_GET_OBJECT(UObject,Z_Param__Object);
		P_GET_PROPERTY(FIntProperty,Z_Param_width);
		P_GET_PROPERTY(FIntProperty,Z_Param_height);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UThumbnailFunctionLibrary::MakeThumbnail(Z_Param__Object,Z_Param_width,Z_Param_height);
		P_NATIVE_END;
	}
	void UThumbnailFunctionLibrary::StaticRegisterNativesUThumbnailFunctionLibrary()
	{
		UClass* Class = UThumbnailFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MakeThumbnail", &UThumbnailFunctionLibrary::execMakeThumbnail },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UThumbnailFunctionLibrary_MakeThumbnail_Statics
	{
		struct ThumbnailFunctionLibrary_eventMakeThumbnail_Parms
		{
			UObject* _Object;
			int32 width;
			int32 height;
			UTexture2D* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp__Object;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_width;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_height;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UThumbnailFunctionLibrary_MakeThumbnail_Statics::NewProp__Object = { "_Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ThumbnailFunctionLibrary_eventMakeThumbnail_Parms, _Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UThumbnailFunctionLibrary_MakeThumbnail_Statics::NewProp_width = { "width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ThumbnailFunctionLibrary_eventMakeThumbnail_Parms, width), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UThumbnailFunctionLibrary_MakeThumbnail_Statics::NewProp_height = { "height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ThumbnailFunctionLibrary_eventMakeThumbnail_Parms, height), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UThumbnailFunctionLibrary_MakeThumbnail_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ThumbnailFunctionLibrary_eventMakeThumbnail_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThumbnailFunctionLibrary_MakeThumbnail_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThumbnailFunctionLibrary_MakeThumbnail_Statics::NewProp__Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThumbnailFunctionLibrary_MakeThumbnail_Statics::NewProp_width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThumbnailFunctionLibrary_MakeThumbnail_Statics::NewProp_height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThumbnailFunctionLibrary_MakeThumbnail_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThumbnailFunctionLibrary_MakeThumbnail_Statics::Function_MetaDataParams[] = {
		{ "Category", "T" },
		{ "ModuleRelativePath", "Public/ThumbnailBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThumbnailFunctionLibrary_MakeThumbnail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThumbnailFunctionLibrary, nullptr, "MakeThumbnail", nullptr, nullptr, sizeof(Z_Construct_UFunction_UThumbnailFunctionLibrary_MakeThumbnail_Statics::ThumbnailFunctionLibrary_eventMakeThumbnail_Parms), Z_Construct_UFunction_UThumbnailFunctionLibrary_MakeThumbnail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThumbnailFunctionLibrary_MakeThumbnail_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UThumbnailFunctionLibrary_MakeThumbnail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UThumbnailFunctionLibrary_MakeThumbnail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UThumbnailFunctionLibrary_MakeThumbnail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThumbnailFunctionLibrary_MakeThumbnail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UThumbnailFunctionLibrary);
	UClass* Z_Construct_UClass_UThumbnailFunctionLibrary_NoRegister()
	{
		return UThumbnailFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UThumbnailFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UThumbnailFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Thumbnail,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UThumbnailFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UThumbnailFunctionLibrary_MakeThumbnail, "MakeThumbnail" }, // 2547592589
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThumbnailFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "ThumbnailBPLibrary.h" },
		{ "ModuleRelativePath", "Public/ThumbnailBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UThumbnailFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UThumbnailFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UThumbnailFunctionLibrary_Statics::ClassParams = {
		&UThumbnailFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UThumbnailFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UThumbnailFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UThumbnailFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UThumbnailFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UThumbnailFunctionLibrary.OuterSingleton, Z_Construct_UClass_UThumbnailFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UThumbnailFunctionLibrary.OuterSingleton;
	}
	template<> THUMBNAIL_API UClass* StaticClass<UThumbnailFunctionLibrary>()
	{
		return UThumbnailFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UThumbnailFunctionLibrary);
	UThumbnailFunctionLibrary::~UThumbnailFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_PluginDevelopment_Plugins_Thumbnails_Source_Thumbnail_Public_ThumbnailBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginDevelopment_Plugins_Thumbnails_Source_Thumbnail_Public_ThumbnailBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UThumbnailFunctionLibrary, UThumbnailFunctionLibrary::StaticClass, TEXT("UThumbnailFunctionLibrary"), &Z_Registration_Info_UClass_UThumbnailFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UThumbnailFunctionLibrary), 1391552393U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginDevelopment_Plugins_Thumbnails_Source_Thumbnail_Public_ThumbnailBPLibrary_h_4035081639(TEXT("/Script/Thumbnail"),
		Z_CompiledInDeferFile_FID_PluginDevelopment_Plugins_Thumbnails_Source_Thumbnail_Public_ThumbnailBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginDevelopment_Plugins_Thumbnails_Source_Thumbnail_Public_ThumbnailBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
