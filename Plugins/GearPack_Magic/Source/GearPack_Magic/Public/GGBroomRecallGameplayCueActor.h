#pragma once
#include "CoreMinimal.h"
#include "GameplayCueNotify_Actor.h"
#include "GGBroomRecallGameplayCueActor.generated.h"

class UAudioComponent;
class UParticleSystemComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class GEARPACK_MAGIC_API AGGBroomRecallGameplayCueActor : public AGameplayCueNotify_Actor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* Particles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* Sound;
    
    AGGBroomRecallGameplayCueActor(const FObjectInitializer& ObjectInitializer);

};

