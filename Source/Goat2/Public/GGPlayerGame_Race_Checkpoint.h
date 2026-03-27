#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GGRaceMinigameCheckpointInterface.h"
#include "GGPlayerGame_Race_Checkpoint.generated.h"

class UParticleSystemComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGPlayerGame_Race_Checkpoint : public AActor, public IGGRaceMinigameCheckpointInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ParticleSystem;
    
public:
    AGGPlayerGame_Race_Checkpoint(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

