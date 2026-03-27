#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DLCMenuReplacementData.generated.h"

class UGGMenuDataAsset;
class UGGPlayerWorldAreaDataAsset;

USTRUCT(BlueprintType)
struct GOAT2_API FDLCMenuReplacementData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DLCName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGPlayerWorldAreaDataAsset* PlayerWorldAreaDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGGMenuDataAsset*> DLCMenuData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FGameplayTag> ReplacementMenuTags;
    
    FDLCMenuReplacementData();
};

