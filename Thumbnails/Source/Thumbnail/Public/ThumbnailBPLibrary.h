// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AssetThumbnail.h"
#include "UObject/ConstructorHelpers.h"
#include "UObject/Object.h"
#include "Misc/ObjectThumbnail.h"
#include "ObjectTools.h"
#include "Engine/Texture.h"
#include "EditorFramework/ThumbnailInfo.h"
#include "ThumbnailBPLibrary.generated.h"

/**
 *
 */
UCLASS()
class THUMBNAIL_API UThumbnailFunctionLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

    UFUNCTION(BlueprintCallable, Category = "T")
    static UTexture2D* MakeThumbnail(UObject* _Object, int width, int height);
};