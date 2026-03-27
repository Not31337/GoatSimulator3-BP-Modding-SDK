#pragma once
#include "CoreMinimal.h"
#include "GGGearAbility.h"
#include "GGGearAbility_FireHat.generated.h"

class AActor;
class AGGGoat;

UCLASS(Blueprintable)
class GOAT2_API UGGGearAbility_FireHat : public UGGGearAbility {
    GENERATED_BODY()
public:
    UGGGearAbility_FireHat();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GoatHeadbuttedActor(AGGGoat* Goat, AActor* HeadbuttedActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GoatHeadbutted(AGGGoat* Goat, bool bHitSomething, const TArray<AActor*>& HeadbuttedActors, bool bIsChargeHeadbutt);
    
};

