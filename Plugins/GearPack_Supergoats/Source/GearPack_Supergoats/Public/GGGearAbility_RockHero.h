#pragma once
#include "CoreMinimal.h"
#include "GGGearAbility.h"
#include "Templates/SubclassOf.h"
#include "GGGearAbility_RockHero.generated.h"

class AGGCharacter;
class AGGRockHeroBoulderActor;
class AGGVehicle;
class UObject;

UCLASS(Blueprintable)
class GEARPACK_SUPERGOATS_API UGGGearAbility_RockHero : public UGGGearAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGRockHeroBoulderActor> BoulderActorClass;
    
public:
    UGGGearAbility_RockHero();

protected:
    UFUNCTION(BlueprintCallable)
    void GoatStartedControllingObject(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void CharacterEnteringVehicle(AGGCharacter* Character, AGGVehicle* Vehicle);
    
};

