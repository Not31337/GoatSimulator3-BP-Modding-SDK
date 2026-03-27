#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GGSpookyGearEffectsActor.generated.h"

class UExponentialHeightFogComponent;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGSpookyGearEffectsActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* FollowedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* AmbientParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UExponentialHeightFogComponent* FogComponent;
    
    AGGSpookyGearEffectsActor(const FObjectInitializer& ObjectInitializer);

};

