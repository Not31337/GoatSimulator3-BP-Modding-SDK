#pragma once
#include "CoreMinimal.h"
#include "GGGoatGear_Scene_Horns.h"
#include "GGGoatGear_Scene_Horns_WandHorns.generated.h"

class AActor;
class AGGGoat;
class AGGWandHornsPhysicsHandle;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GEARPACK_MAGIC_API UGGGoatGear_Scene_Horns_WandHorns : public UGGGoatGear_Scene_Horns {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGWandHornsPhysicsHandle*> PhysicsHandleActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActorRaiseSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActorWanderSpeed;
    
    UGGGoatGear_Scene_Horns_WandHorns(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnLocalGoatJumpPressed(AGGGoat* InstigatingGoat);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnLaunchCancelledMulticast(const TArray<AActor*>& GrabbedActors);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLaunchCancelled(const TArray<AActor*>& GrabbedActors);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnHoldToLaunchStartedMulticast(const TArray<AActor*>& GrabbedActors);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHoldToLaunchStarted(const TArray<AActor*>& GrabbedActors);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnGrabbedActorMulticast(bool bInitialActor, AActor* GrabbedActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGrabbedActor(bool bInitialActor, AActor* GrabbedActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnFailedToGrabActorMulticast();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFailedToGrabActor();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnEndAbilityMulticast(bool bWasCancelled, const TArray<AActor*>& GrabbedActors);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndAbility(bool bWasCancelled, const TArray<AActor*>& GrabbedActors);
    
};

