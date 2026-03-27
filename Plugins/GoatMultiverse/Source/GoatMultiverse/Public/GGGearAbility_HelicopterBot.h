#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GGGearAbility.h"
#include "GGGearAbility_HelicopterBot.generated.h"

class AGGCharacter;
class AGGVehicle;
class UGGGoatGear_Back_HelicopterBot;

UCLASS(Blueprintable)
class GOATMULTIVERSE_API UGGGearAbility_HelicopterBot : public UGGGearAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ToggleAbilityHoldThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallingGravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallingMaxVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFlightHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StartupSoundGameplayCueTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag IdleSoundGameplayCueTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ShutdownSoundGameplayCueTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D HelicopterFlyingPitchAngleRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D HelicopterFlyingRollAngleRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGGoatGear_Back_HelicopterBot* HelicopterBotGear;
    
public:
    UGGGearAbility_HelicopterBot();

protected:
    UFUNCTION(BlueprintCallable)
    void OnJumped(AGGCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void CharacterOnLanded(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void CharacterEnteringVehicle(AGGCharacter* Character, AGGVehicle* Vehicle);
    
};

