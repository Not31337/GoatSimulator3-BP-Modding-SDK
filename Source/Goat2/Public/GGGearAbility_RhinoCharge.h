#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GGGearAbility.h"
#include "Templates/SubclassOf.h"
#include "GGGearAbility_RhinoCharge.generated.h"

class UGGRadialForceComponent;

UCLASS(Blueprintable)
class GOAT2_API UGGGearAbility_RhinoCharge : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RelativeForceCompLoc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGRadialForceComponent> ForceCompClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGRadialForceComponent* ForceComp;
    
public:
    UGGGearAbility_RhinoCharge();

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetWantToSprinting(bool bWantsToSprintNow);
    
};

