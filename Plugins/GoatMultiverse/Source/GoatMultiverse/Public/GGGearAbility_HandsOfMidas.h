#pragma once
#include "CoreMinimal.h"
#include "GGGearAbility.h"
#include "GGGearAbility_HandsOfMidas.generated.h"

class AActor;
class AGGGoat;
class UMaterialInstance;

UCLASS(Blueprintable)
class GOATMULTIVERSE_API UGGGearAbility_HandsOfMidas : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* GoldMaterial;
    
    UGGGearAbility_HandsOfMidas();

private:
    UFUNCTION(BlueprintCallable)
    void OnGoatHeadbutting(AGGGoat* GoatHeadbutting, bool bHitSomething, const TArray<AActor*>& HeadbuttedActors, bool bIsChargeHeadbutt);
    
};

