#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GGGearAbility.h"
#include "GGBroomReleaseAnimation.h"
#include "GGGearAbility_BroomSpawner.generated.h"

class AActor;
class AGGCharacter;
class AGGGoat;
class AGGVehicle;
class UGGAlternativeGoatDataAsset;
class UGGTeleportAreaDataAsset;
class USoundBase;

UCLASS(Blueprintable)
class GEARPACK_MAGIC_API UGGGearAbility_BroomSpawner : public UGGGearAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGBroomReleaseAnimation DefaultReleaseAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UGGAlternativeGoatDataAsset>, FGGBroomReleaseAnimation> AltGoatDeployAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UGGTeleportAreaDataAsset>> DisabledInMegaRifts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* RecallSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* ReleaseSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RecallGameplayCue;
    
public:
    UGGGearAbility_BroomSpawner();

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerPutBroomAway();
    
public:
    UFUNCTION(BlueprintCallable)
    void ReleaseAnimationFinished();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnGoatStartBeingScaled(bool bIsBeingCatched);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatEnterVehicle(AGGCharacter* Character, AGGVehicle* Vehicle);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatCatched(AActor* CatchedActor, AActor* Catcher);
    
    UFUNCTION(BlueprintCallable)
    void OnCinematicUpdated(bool bCinematicFinished);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPutBroomAwayVFX(AGGGoat* Goat);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayReleaseVFX(AGGGoat* Goat);
    
    UFUNCTION(BlueprintCallable)
    void AssignBroomSpawnerAbility();
    
};

