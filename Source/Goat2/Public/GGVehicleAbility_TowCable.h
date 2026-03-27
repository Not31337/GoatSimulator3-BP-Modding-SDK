#pragma once
#include "CoreMinimal.h"
#include "GGVehicleAbility.h"
#include "Templates/SubclassOf.h"
#include "GGVehicleAbility_TowCable.generated.h"

class AGGTowCableActor;

UCLASS(Blueprintable)
class GOAT2_API UGGVehicleAbility_TowCable : public UGGVehicleAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGTowCableActor> TowCableActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HookImpulsePower;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGTowCableActor* TowCableActor;
    
public:
    UGGVehicleAbility_TowCable();

};

