#pragma once
#include "CoreMinimal.h"
#include "GGGearAbility.h"
#include "Templates/SubclassOf.h"
#include "GGGearAbility_RubberDucking.generated.h"

class AActor;
class AGGPhysicsActor;
class UGGGoatGear_Static_Base;
class UParticleSystem;

UCLASS(Blueprintable)
class GOAT2_API UGGGearAbility_RubberDucking : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGPhysicsActor> DuckClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ChargeSoundClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaunchPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSpawnedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeMaxDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ThrowParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumDucksAtMaxCharge;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGPhysicsActor*> SpawnedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGGoatGear_Static_Base* Gear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SpawnedChargeSound;
    
public:
    UGGGearAbility_RubberDucking();

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartChargingSound();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerFireDucks(float ChargeDuration);
    
    UFUNCTION(BlueprintCallable)
    void OnMaxCharge();
    
    UFUNCTION(BlueprintCallable)
    void IsChargingCheck();
    
};

