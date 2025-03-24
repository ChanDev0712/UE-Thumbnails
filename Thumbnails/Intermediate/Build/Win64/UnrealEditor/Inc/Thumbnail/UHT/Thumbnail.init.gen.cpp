// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThumbnail_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Thumbnail;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Thumbnail()
	{
		if (!Z_Registration_Info_UPackage__Script_Thumbnail.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Thumbnail",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x903DA1F3,
				0x1C8F3104,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Thumbnail.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Thumbnail.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Thumbnail(Z_Construct_UPackage__Script_Thumbnail, TEXT("/Script/Thumbnail"), Z_Registration_Info_UPackage__Script_Thumbnail, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x903DA1F3, 0x1C8F3104));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
