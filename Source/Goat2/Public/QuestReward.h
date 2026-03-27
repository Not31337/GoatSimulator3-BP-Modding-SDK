#pragma once
#include "CoreMinimal.h"
#include "QuestReward.generated.h"

class UGGGoatGearInfoDataAsset;

USTRUCT(BlueprintType)
struct GOAT2_API FQuestReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Tokens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UGGGoatGearInfoDataAsset>> GoatGear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UGGGoatGearInfoDataAsset>> StoreUnlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoEquipGear;
    
    FQuestReward();
};

