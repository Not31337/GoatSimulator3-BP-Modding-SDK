#pragma once
#include "CoreMinimal.h"
#include "EDroneState.h"
#include "DroneValues.generated.h"

class AGGGoat;
class AGGPlayerController;
class UGGGoatGear_Back_DroneOperator;

USTRUCT(BlueprintType)
struct FDroneValues {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGGoat* TargetGoat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDroneState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    AGGPlayerController* TargetPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGGoatGear_Back_DroneOperator* DroneGear;
    
    GOATAPOCALYPSE_API FDroneValues();
};

