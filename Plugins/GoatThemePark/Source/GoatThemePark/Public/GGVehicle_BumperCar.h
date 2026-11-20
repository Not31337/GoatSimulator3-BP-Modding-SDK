#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GGEffectSpawnHolder.h"
#include "GGVehicle_Car.h"
#include "GGVehicle_BumperCar.generated.h"

UCLASS(Blueprintable)
class GOATTHEMEPARK_API AGGVehicle_BumperCar : public AGGVehicle_Car {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpulsePower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VehicleImpulsePower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharacterImpulsePower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGEffectSpawnHolder EffectSpawnHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DriverAppearanceTag;
    
    AGGVehicle_BumperCar(const FObjectInitializer& ObjectInitializer);

};

