#pragma once
#include "CoreMinimal.h"
#include "GameplayCueNotify_Actor.h"
#include "GGSoundAndParticleGameplayCueActor.generated.h"

class UAudioComponent;
class UParticleSystemComponent;
class USceneComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGSoundAndParticleGameplayCueActor : public AGameplayCueNotify_Actor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* Particles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocket;
    
public:
    AGGSoundAndParticleGameplayCueActor(const FObjectInitializer& ObjectInitializer);

};

