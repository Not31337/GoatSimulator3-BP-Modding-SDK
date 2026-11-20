#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GGPhysicsActor.h"
#include "Templates/SubclassOf.h"
#include "GGPhysicsActor_HeldBalloon.generated.h"

class AActor;
class AGGGoat;
class AGGNPC;
class AGGPhysicsActor_HeldBalloon;
class AGGPlayerController;
class UParticleSystem;
class USoundBase;

UCLASS(Blueprintable)
class GOATTHEMEPARK_API AGGPhysicsActor_HeldBalloon : public AGGPhysicsActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGNPC* HeldByNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HeadbuttsRequiredToPop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadbuttShakeImpulseStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadbuttShakeAngularImpulseStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HeadbuttRumbleTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CatchedGoatSteeringForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CatchedGoatSteeringDeadzone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraBlendSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SoundHeadbutt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SoundInflate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BurstVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> InvalidCatchClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsInflating, meta=(AllowPrivateAccess=true))
    bool bIsInflating;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CatchedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CatchedGoat, meta=(AllowPrivateAccess=true))
    AGGGoat* CatchedGoat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPhysicsActor_HeldBalloon* CatchedBy;
    
public:
    AGGPhysicsActor_HeldBalloon(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerReleaseCatchedActor(AActor* ActorToRelease, FVector ReleaseLocation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerHandleCatchedPlayerJump();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerHandleCatchedPlayerHeadbutt();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsInflating();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CatchedGoat();
    
    UFUNCTION(BlueprintCallable)
    void OnCatchedPlayerJumpInput(AGGGoat* Goat);
    
    UFUNCTION(BlueprintCallable)
    void OnCatchedPlayerHeadbuttInput(AGGPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void OnCatchedNPCPooledOrMoved(AGGNPC* NPC, bool bWasPooled);
    
    UFUNCTION(BlueprintCallable)
    void OnCatchedActorBeingDestroyed(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintCallable)
    void OnBalloonShattered(AGGPhysicsActor* Balloon);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastReleaseCatchedActor(AActor* ActorToRelease, const FVector& ReleaseLocation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastHeadbuttShake(const FVector& ShakeDirection, const FVector& ShakeSpinDirection);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastCatchActor(AActor* ActorToCatch);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGGoat* GetCatchedGoat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetCatchedActor() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void BalloonCatchActor(AActor* ActorToCatch);
    
};

