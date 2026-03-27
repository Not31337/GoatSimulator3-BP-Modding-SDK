#pragma once
#include "CoreMinimal.h"
#include "GGGearAbility.h"
#include "GGGearAbility_Leafblower.generated.h"

class AGGCharacter;
class AGGVehicle;
class UGGGoatGear_Static_Leafblower;
class UStaticMesh;

UCLASS(Blueprintable)
class GOAT2_API UGGGearAbility_Leafblower : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGGoatGear_Static_Leafblower* LeafBlower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* BlowAreaMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideConeComponent;
    
    UGGGearAbility_Leafblower();

    UFUNCTION(BlueprintCallable)
    void CharacterEnteringVehicle(AGGCharacter* Character, AGGVehicle* Vehicle);
    
};

