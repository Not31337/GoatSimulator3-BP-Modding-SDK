#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "Engine/Scene.h"
#include "GameplayTagContainer.h"
#include "EPostProcessCameraContext.h"
#include "GGGameSetting.h"
#include "OnCameraContextChangedDelegate.h"
#include "PlayerPostProcessValue.h"
#include "GGPlayerCameraManager.generated.h"

class AGGCharacter;
class AGGGoat;
class APawn;
class APhysicsVolume;

UCLASS(Blueprintable, NonTransient)
class GOAT2_API AGGPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCameraContextChanged OnCameraContextChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FPlayerPostProcessValue> PlayerPostProcessComponents;
    
public:
    AGGPlayerCameraManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool UpdatePlayerPostProcessComponent(FGameplayTag EffectIdentifier, FPostProcessSettings NewSettings);
    
    UFUNCTION(BlueprintCallable)
    void RemovePlayerPostProcessComponent(FGameplayTag EffectIdentifier);
    
    UFUNCTION(BlueprintCallable)
    void OnPossessedGoatPhysicsVolumeChanged(APhysicsVolume* NewVolume);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPawnPossessed(APawn* NewPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatRespawn(AGGCharacter* OldCharacter, AGGCharacter* NewCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnControlledGoatReplicated(AGGGoat* NewControlledGoat);
    
    UFUNCTION(BlueprintCallable)
    void OnCameraShakeSettingChanged(FGGGameSetting& InSetting);
    
public:
    UFUNCTION(BlueprintCallable)
    EPostProcessCameraContext GetCurrentCameraContext();
    
    UFUNCTION(BlueprintCallable)
    void AddPlayerPostProcessComponent(FGameplayTag EffectIdentifier, FPostProcessSettings ComponentSettings, bool bPlayerCamVisible, bool bVehicleCamVisible, bool bWorldCamVisible);
    
};

