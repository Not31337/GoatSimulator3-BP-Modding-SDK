#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "GameplayTagContainer.h"
#include "GGVehicle.h"
#include "GGVehicle_Bike.generated.h"

class AGGGoat;
class USimpleWheeledVehicleMovementComponent;
class USoundBase;

UCLASS(Blueprintable)
class GOAT2_API AGGVehicle_Bike : public AGGVehicle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    USimpleWheeledVehicleMovementComponent* VehicleMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirPitchControlScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DriveTorqueScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeanForceScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InAirLeanForceScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKillRollMomentumOnOpposingLeanInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpZImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SteerMaxAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SteerAngleReduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SteerAngleInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PedallingSpeedCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* JumpSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToBike;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RideBikeInstinctTag;
    
public:
    AGGVehicle_Bike(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void TriggerInstinct(AGGGoat* Goat);
    
private:
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerPlayJumpSound();
    
public:
    UFUNCTION(Server, Unreliable)
    void ServerMove(FVector_NetQuantize100 ClientLoc, FRotator ClientRot, FVector_NetQuantize100 ClientVelocity, FVector_NetQuantize100 ClientAngularVelocity, uint8 DriveTorque, int8 SteerAngle);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayJumpSound();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPedalRotation() const;
    
};

