#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Curves/CurveFloat.h"
#include "Engine/NetSerialization.h"
#include "GameplayTagContainer.h"
#include "GGPhysicsActor.h"
#include "GGTraceParams.h"
#include "GGBalloonVariation.h"
#include "OnBalloonDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "GGPhysicsActor_BalloonHolder.generated.h"

class AActor;
class AGGGoat;
class AGGNPC;
class AGGPhysicsActor_HeldBalloon;
class UCableComponent;
class UMaterialInterface;
class UPhysicalMaterial;
class UPhysicsHandleComponent;
class USceneComponent;
class USphereComponent;
class UStaticMesh;

UCLASS(Blueprintable)
class GOATTHEMEPARK_API AGGPhysicsActor_BalloonHolder : public AGGPhysicsActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsHandleComponent* PhysHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsHandleComponent* PhysHandleReverse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCableComponent* Cable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* OverlapSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* BalloonOverlapSphere;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGPhysicsActor_HeldBalloon> HeldBalloonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoCreateBalloon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGGBalloonVariation> BalloonVariations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* BalloonPhysMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BalloonFloatDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve BalloonFloatCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UprightTorqueStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UprightTorqueDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float BalloonInflateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float VerticalForceWhileInflating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoPopAfterTimeInFreeFloat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoPopHeightInFreeFloat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StratosphereHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreeFloatRoamDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D FreeFloatRoamVerticalForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D FreeFloatRoamHorizontalForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D FreeFloatRoamImpulseInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AttachBalloonsInstinctTag;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBalloonDelegate OnBalloonSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBalloonDelegate OnBalloonInflateStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBalloonDelegate OnBalloonInflateEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BalloonPActor, meta=(AllowPrivateAccess=true))
    AGGPhysicsActor_HeldBalloon* BalloonPActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGTraceParams SyringeAttachTraceParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAttachBoneForSyringeEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SyringeDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SyringeNumRequiredForFloating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SyringeNPCFloatingForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SyringeNPCAddPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SyringePActorGravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SyringePActorMaxVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SyringePActorAddGravityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SyringeVehicleGravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SyringeVehicleMaxVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SyringeVehicleAddGravityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float FreeFloatStartTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float FreeFloatStartHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float BalloonInflateStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGBalloonVariation CurrentVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGNPC* LostNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* SyringeActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector RoamDirection;
    
public:
    AGGPhysicsActor_BalloonHolder(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SpawnDefaultBalloon();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SetBalloonOverride(TSoftObjectPtr<UStaticMesh> OverrideMesh, TSoftObjectPtr<UMaterialInterface> OverrideMaterial);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_BalloonPActor();
    
    UFUNCTION(BlueprintCallable)
    void OnBalloonShattered(AGGPhysicsActor* Balloon);
    
    UFUNCTION(BlueprintCallable)
    void OnBalloonReleasedActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnBalloonCatchedActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnBalloonBeingDestroyed(AActor* Balloon, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastOnStratosphereAchievementTriggered(AGGGoat* GoatInBalloon, AActor* Balloon);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastOnInstinctTriggered(AGGGoat* LickingGoat);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastDetachBalloonFromComponent();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastAttachToTarget(AActor* Target, FName AttachBone, FName SyringeBone, FVector_NetQuantize100 AttachOffset);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastAttachBalloonToComponent(USceneComponent* Parent, FName SocketName);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DetachBalloonFromComponent();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AttachBalloonToComponent(USceneComponent* Parent, FName SocketName);
    
};

