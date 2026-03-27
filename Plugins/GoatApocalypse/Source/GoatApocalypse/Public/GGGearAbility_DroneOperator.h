#pragma once
#include "CoreMinimal.h"
#include "GGGearAbility.h"
#include "Templates/SubclassOf.h"
#include "GGGearAbility_DroneOperator.generated.h"

class AGGCameraDrone;
class UGGGoatGear_Back_DroneOperator;

UCLASS(Blueprintable)
class GOATAPOCALYPSE_API UGGGearAbility_DroneOperator : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGCameraDrone> CameraDroneClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloseBoxAfterRelease;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGCameraDrone* CameraDrone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGGoatGear_Back_DroneOperator* DroneGear;
    
public:
    UGGGearAbility_DroneOperator();

};

