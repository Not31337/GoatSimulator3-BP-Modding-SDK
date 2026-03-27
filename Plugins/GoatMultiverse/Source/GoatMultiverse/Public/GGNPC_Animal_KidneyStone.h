#pragma once
#include "CoreMinimal.h"
#include "GGNPC_Animal.h"
#include "Templates/SubclassOf.h"
#include "GGNPC_Animal_KidneyStone.generated.h"

class AGGGoat;
class AGGSlipperyTrail;

UCLASS(Blueprintable)
class GOATMULTIVERSE_API AGGNPC_Animal_KidneyStone : public AGGNPC_Animal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunSpeedRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGGSlipperyTrail* SlipperyTrailActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGSlipperyTrail> SlipperyTailActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceNeededForPoint;
    
    AGGNPC_Animal_KidneyStone(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StopBehavior();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartBehavior();
    
    UFUNCTION(BlueprintCallable)
    void SpawnNewSlipperyTrail();
    
    UFUNCTION(BlueprintCallable)
    void RemoveSlipperyTrail();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayDieFX();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayAttackFX(AGGGoat* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPPlayDieFX();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPPlayAttackFX(AGGGoat* Target);
    
};

