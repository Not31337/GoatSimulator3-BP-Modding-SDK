#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AreaEventSpawners.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FAreaEventSpawners {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Area;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> EventSpawners;
    
    GOAT2_API FAreaEventSpawners();
};

