#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "SeasonalLevels.h"
#include "GGSeasonalContentManager.generated.h"

class UWorld;

UCLASS(Blueprintable)
class GOAT2MOBILE_API AGGSeasonalContentManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FSeasonalLevels> SeasonalLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UWorld>> LevelsToLoad;
    
    AGGSeasonalContentManager(const FObjectInitializer& ObjectInitializer);

};

