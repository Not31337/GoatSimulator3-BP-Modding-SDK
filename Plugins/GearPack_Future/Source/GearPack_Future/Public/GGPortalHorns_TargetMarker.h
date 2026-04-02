#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GGPortalHorns_TargetMarker.generated.h"

class UParticleSystemComponent;

UCLASS(Blueprintable)
class GEARPACK_FUTURE_API AGGPortalHorns_TargetMarker : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* Particles;
    
    AGGPortalHorns_TargetMarker(const FObjectInitializer& ObjectInitializer);

};

