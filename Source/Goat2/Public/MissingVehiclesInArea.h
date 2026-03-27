#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MissingVehiclesInArea.generated.h"

USTRUCT(BlueprintType)
struct FMissingVehiclesInArea {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Area;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MissingIdleCarsCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MissingIdleBikeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MissingIdleBoatCount;
    
    GOAT2_API FMissingVehiclesInArea();
};

