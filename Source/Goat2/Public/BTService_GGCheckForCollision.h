#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTService_GGCheckForCollision.generated.h"

class AActor;
class AGGNPC;
class UParticleSystem;
class UPrimitiveComponent;
class USoundBase;

UCLASS(Blueprintable)
class GOAT2_API UBTService_GGCheckForCollision : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequiredBoundsSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLaunchBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaunchForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> HitParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> HitSound;
    
    UBTService_GGCheckForCollision();

private:
    UFUNCTION(BlueprintCallable)
    void OnNPCOverlappStatic(AGGNPC* NPC, AActor* OtherActor, UPrimitiveComponent* OtherComponent);
    
};

