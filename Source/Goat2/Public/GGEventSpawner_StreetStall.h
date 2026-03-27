#pragma once
#include "CoreMinimal.h"
#include "EQueueDirections.h"
#include "GGEventSpawner.h"
#include "StallSpawnElement.h"
#include "GGEventSpawner_StreetStall.generated.h"

UCLASS(Blueprintable)
class GOAT2_API AGGEventSpawner_StreetStall : public AGGEventSpawner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQueueDirections QueueDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QueueSpots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LengthUntilFirstSpot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpaceBetweenSpots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStallSpawnElement> Stalls;
    
    AGGEventSpawner_StreetStall(const FObjectInitializer& ObjectInitializer);

};

