#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "PlayerWorldAreaLocation.h"
#include "GGPlayerWorldAreaDataAsset.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class GOAT2_API UGGPlayerWorldAreaDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerWorldAreaLocation> Locations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSoftObjectPtr<UTexture2D>> LocationThumbnails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> DefaultThumbnail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LevelDataID;
    
    UGGPlayerWorldAreaDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetThumbnailForArea(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetMostRelevantArea(TArray<FGameplayTag> Tags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetAreaLocationFromAreaTag(FGameplayTag Tag, bool& bOutSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetAreaDisplayNameFromAreaTag(FGameplayTag Tag);
    
};

