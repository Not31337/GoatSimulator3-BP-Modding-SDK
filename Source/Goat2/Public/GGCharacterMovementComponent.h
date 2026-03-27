#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "GameplayTagContainer.h"
#include "ECanStandUpBelowVehicle.h"
#include "EDesiredBuoyancy.h"
#include "GGClientMovementOverrideData.h"
#include "LSCharacterMovementComponent.h"
#include "LSGaitsFloat.h"
#include "OnMovementModeChangedDelegate.h"
#include "TimestampedActorReference.h"
#include "GGCharacterMovementComponent.generated.h"

class AActor;
class AGGCharacter;
class UGGCharacterMovementComponent;
class UGGConveyorComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGCharacterMovementComponent : public ULSCharacterMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMovementModeChanged OnMovementModeChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GeometryAdjustmentHitThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RagdollDamageThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BouncyRagdollOnLandedVelocityThreshold;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RagdollOnLandedVelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECanStandUpBelowVehicle CanStandUpBelowVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TagPreventingUnRagdolling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RagdollTimeUntilMedicEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PActorBaseGracePeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTimeOnGroundForStandup;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FTimestampedActorReference> ActorsThatMayNotRagdollCharacter;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGClientMovementOverrideData ClientMovementOverrideData;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsInShallowWater;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShallowWaterDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanDive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleUnderWaterBuoyancy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DiveBuoyancy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloatUpBuoyancy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLSGaitsFloat DiveSpeeds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DiveAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=UpdateCharacterMovementSettings, meta=(AllowPrivateAccess=true))
    float GeneralSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=UpdateCharacterMovementSettings, meta=(AllowPrivateAccess=true))
    float GeneralAccelerationMultiplier;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    UGGConveyorComponent* CurrentConveyor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGCharacter* OwnerCharacter;
    
public:
    UGGCharacterMovementComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetGravityScale(float NewGravityScale);
    
    UFUNCTION(BlueprintCallable)
    void SetDiveBuoyancy();
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredBuoyancy(EDesiredBuoyancy Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentConveyor(UGGConveyorComponent* NewConveyor);
    
    UFUNCTION(BlueprintCallable)
    void SetBuoyancy(float Value);
    
private:
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerSetBuoyancy(float Value);
    
public:
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerSendReplicationData(UGGCharacterMovementComponent* TargetMovementComponent, FVector_NetQuantize InLocation, FQuat InRotation, FVector_NetQuantize InVelocity);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetVelocity();
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetMeshVelocity();
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetBuoyancy();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PreventCharacterFromUnRagdollingForDuration(const FGameplayTag& SourceTag, float Duration);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetGravityScale(float NewGravityScale);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastResetVelocity();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastResetMeshVelocity() const;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastResetBase();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnConveyorBelt() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDiving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCompletelyUnderWater(bool bCheckForOxygenVolumes) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGGCharacterMovementComponent* GetGGMovementComp(const AActor* ActorWithComp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDesiredBuoyancy GetDesiredBuoyancy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDive() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddToGeneralSpeedMulti(float Value);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddToGeneralAccelerationMultiplier(float Value);
    
};

