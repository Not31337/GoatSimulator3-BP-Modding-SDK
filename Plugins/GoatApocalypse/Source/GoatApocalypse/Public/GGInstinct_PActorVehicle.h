#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GGInstinct.h"
#include "GGInstinct_PActorVehicle.generated.h"

class AGGCharacter;
class AGGVehicle;

UCLASS(Abstract, Blueprintable)
class GOATAPOCALYPSE_API AGGInstinct_PActorVehicle : public AGGInstinct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MaxPActorSize;
    
    AGGInstinct_PActorVehicle(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnPlayerEnterPActorVehicle(AGGVehicle* Vehicle, AGGCharacter* Character, bool bIsDriver);
    
};

