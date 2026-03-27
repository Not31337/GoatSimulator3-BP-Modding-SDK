#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GGCatchOptions.h"
#include "GGGearAbility.h"
#include "GGReleaseOptions.h"
#include "Templates/SubclassOf.h"
#include "GGGearAbility_Satellite.generated.h"

class AActor;
class AGGCharacter;
class AGGGoat;
class AGGVehicle;
class UGGDamageType_Base;
class USceneComponent;

UCLASS(Blueprintable)
class GOAT2_API UGGGearAbility_Satellite : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaunchPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VehicleLaunchPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGDamageType_Base> LaunchImpulseDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoLaunchIfBlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuckCapsuleRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuckCapsuleHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuckDistFromPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToScaleDownVictim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownBetweenLaunchAndPickUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AddedLaunchDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketSpawnLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketNothingInRangeEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TagNothingInRangeGameplayCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultDamageOnRelease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRagdollCharacterOnLaunch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CurrentVictim;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    USceneComponent* SatelliteGear;
    
public:
    UGGGearAbility_Satellite();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerReleaseGrabbedActor(AActor* GrabbedActor, FVector ReleaseLocation, FGGReleaseOptions Options);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerCatchActor(AActor* ActorToGrab, FGGCatchOptions Options);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerRespawned(AGGCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerPreScaled(bool bIsBeingCatched);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerEnteredVehicle(AGGCharacter* Character, AGGVehicle* Vehicle);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerCatched(AActor* CatchedActor, AActor* Catcher);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastReleaseGrabbedActor(AActor* GrabbedActor, FVector ReleaseLocation, FGGReleaseOptions Options);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastCatchActor(AActor* ActorToGrab, AGGGoat* GrabbingGoat, FGGCatchOptions Options);
    
    UFUNCTION(BlueprintCallable)
    void ForceReleaseVictim();
    
};

