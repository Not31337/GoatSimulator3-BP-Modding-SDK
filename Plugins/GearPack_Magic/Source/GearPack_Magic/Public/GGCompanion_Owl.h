#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Pawn.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "GGHeadbuttableObjectInterface.h"
#include "GGLickableActorInterface.h"
#include "GGNamedActorInterface.h"
#include "GGSmoothNetInterpolate.h"
#include "LSReplicatedMesh.h"
#include "LSReplicatedMeshParams.h"
#include "LSReplicatedMeshRPCs.h"
#include "RecentActor.h"
#include "EGGCompanionState.h"
#include "GGCompanion.h"
#include "GGCompanionAttach.h"
#include "GGCompanionSettings.h"
#include "GGCompanion_Owl.generated.h"

class AActor;
class AGGCharacter;
class AGGGoat;
class AGGPlayerState;
class AGGVehicle;
class UAnimMontage;
class UAudioComponent;
class UGGFlyingMovementComponent;
class UGGTeleportAreaDataAsset;
class UNiagaraComponent;
class UObject;
class UParticleSystem;
class UParticleSystemComponent;
class UPhysicsHandleComponent;
class USkeletalMeshComponent;
class USoundBase;
class USphereComponent;
class USpringArmComponent;

UCLASS(Abstract, Blueprintable)
class GEARPACK_MAGIC_API AGGCompanion_Owl : public APawn, public IGGHeadbuttableObjectInterface, public IGGLickableActorInterface, public ILSReplicatedMeshRPCs, public IGGNamedActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* CollisionSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsHandleComponent* PhysicsHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGFlyingMovementComponent* MovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* TrailParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* BurstParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* AttackSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* IdleSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleCirclingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator IdleHoverRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CircleTargetRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DelayBetweenIdleSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxGoatOwnerSpeedForSeekingTargetsToGrab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTimeToWaitWhenGoatOwnerIsMovingSlowly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeightToDropTargetFrom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBetweenGrabbingTheSameActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PhysicsHandleAttachSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DropOffDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceToSitDownAfterBringingSomethingBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TagForGrabbedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TagForTargetedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FlyingTrickMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D IdleTrickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoIdleTricks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGCompanionAttach DefaultCompanionAttach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGCompanionSettings CompanionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGSmoothNetInterpolate SmoothNetInterp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLSReplicatedMeshParams MeshReplicationParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleLocationInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleRotationInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceFromPlayerToTeleportBackInM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* TeleportAwayParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* TeleportAwaySound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* TeleportArriveParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* TeleportArriveSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SitDownDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TakeoffDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToInitiateLanding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LandingDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Companion, meta=(AllowPrivateAccess=true))
    FGGCompanion Companion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGCompanion CompanionLocal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpringArmComponent* CircleTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsTargetGrabbed, meta=(AllowPrivateAccess=true))
    bool bIsTargetGrabbed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRecentActor> RecentlyGrabbedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FLSReplicatedMesh ReplicatedMesh;
    
    AGGCompanion_Owl(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnStartEnteringTeleportArea(AGGPlayerState* Player, UGGTeleportAreaDataAsset* AreaAsset);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnReturnedWithTarget(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsTargetGrabbed();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Companion();
    
    UFUNCTION(BlueprintCallable)
    void OnGoatOwnerTeleported(AGGCharacter* Character, const FTransform& OldTransform);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatOwnerHeadbutted(UObject* HeadbuttedObject, AGGGoat* HeadbuttingGoat);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatOwnerExitedVehicle(AGGCharacter* Character, AGGVehicle* Vehicle);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatOwnerEnteredVehicle(AGGCharacter* Character, AGGVehicle* Vehicle);
    
    UFUNCTION(BlueprintCallable)
    void OnEnteredTeleportArea(AGGPlayerState* Player, UGGTeleportAreaDataAsset* AreaAsset);
    
    UFUNCTION(BlueprintCallable)
    void OnCompanionStateChanged(EGGCompanionState OldState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastOnGoatOwnerTeleported(const FVector& OldLocation);
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(Reliable, Server)
    void ServerUpdateRagdollOnTarget(const TScriptInterface<ILSReplicatedMeshRPCs>& NewTarget, FVector_NetQuantize NewRagdollVelocity, FVector_NetQuantize NewActorLocation) override;// PURE_VIRTUAL(ServerUpdateRagdollOnTarget, );
    
    UFUNCTION(Server, Unreliable)
    void ServerUpdateRagdoll(FVector_NetQuantize NewRagdollVelocity, FVector_NetQuantize NewActorLocation) override;// PURE_VIRTUAL(ServerUpdateRagdoll, );
    
    UFUNCTION(Reliable, Server)
    void ServerUpdateFloatingRagdollOnTarget(const TScriptInterface<ILSReplicatedMeshRPCs>& NewTarget, FVector_NetQuantize NewRagdollVelocity, FVector_NetQuantize100 NewRagdollAngularVelocity, FVector_NetQuantize NewActorLocation) override;// PURE_VIRTUAL(ServerUpdateFloatingRagdollOnTarget,);
    
    UFUNCTION(Server, Unreliable)
    void ServerUpdateFloatingRagdoll(FVector_NetQuantize NewRagdollVelocity, FVector_NetQuantize100 NewRagdollAngularVelocity, FVector_NetQuantize NewActorLocation) override;// PURE_VIRTUAL(ServerUpdateFloatingRagdoll,);
    
    UFUNCTION(Reliable, Server)
    void ServerTeleportRagdollFinished() override;// PURE_VIRTUAL(ServerTeleportRagdollFinished, );
    
    UFUNCTION(Reliable, Server)
    void ServerTeleportRagdoll(FVector TeleportLocation) override;// PURE_VIRTUAL(ServerTeleportRagdoll, );
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastTeleportRagdoll(FVector TeleportLocation, bool bFromServer) override;// PURE_VIRTUAL(MulticastTeleportRagdoll, );
    
};

