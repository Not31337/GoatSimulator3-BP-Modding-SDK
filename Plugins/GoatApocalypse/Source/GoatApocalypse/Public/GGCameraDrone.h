#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "GameplayTagContainer.h"
#include "GGAlternateMovementCamera.h"
#include "DroneValues.h"
#include "EDroneState.h"
#include "Templates/SubclassOf.h"
#include "GGCameraDrone.generated.h"

class AGGCharacter;
class AGGNPC;
class AGGVehicle;
class UAnimMontage;
class UAudioComponent;
class UParticleSystemComponent;
class USkeletalMeshComponent;
class UUserWidget;

UCLASS(Blueprintable)
class AGGCameraDrone : public AGGAlternateMovementCamera {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* DroneMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* FlyingAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* TrailParticle;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraControlDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReturnInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve CameraInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* UnfoldMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FoldMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> OverlayWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RumbleTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NPCHitsForInstinct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTimeBetweenHits;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DroneValues, meta=(AllowPrivateAccess=true))
    FDroneValues DroneValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* OverlayWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGVehicle* TrackingVehicle;
    
public:
    AGGCameraDrone(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void VehicleHitNPC(AGGVehicle* Vehicle, AGGNPC* NPC);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerReturnDrone();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DroneValues();
    
    UFUNCTION(BlueprintCallable)
    void OnGoatOwnerExitedVehicle(AGGCharacter* Character, AGGVehicle* Vehicle);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatOwnerEnteredVehicle(AGGCharacter* Character, AGGVehicle* Vehicle);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastUnfoldDrone();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastFoldDrone();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDroneState GetState() const;
    
};

