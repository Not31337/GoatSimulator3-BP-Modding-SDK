#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GGVehicleAbility.h"
#include "GGVehicleAbility_SpeedBoost.generated.h"

class APawn;
class UGGVehicleAbility_SpeedBoost;
class UWheeledVehicleMovementComponent;

UCLASS(Blueprintable)
class GOAT2_API UGGVehicleAbility_SpeedBoost : public UGGVehicleAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Acceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GameplayCueTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxBoostDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoostRecoveryDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoostRecoverySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWheeledVehicleMovementComponent* MoveComp;
    
    UGGVehicleAbility_SpeedBoost();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGGVehicleAbility_SpeedBoost* FindSpeedBoostAbilityInstance(const APawn* Vehicle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalculateRemainingBoostDuration() const;
    
    UFUNCTION(BlueprintCallable)
    static bool AddSpeedBoostPercentage(const APawn* Vehicle, float Percentage);
    
    UFUNCTION(BlueprintCallable)
    static bool AddSpeedBoostDuration(const APawn* Vehicle, float Duration);
    
};

