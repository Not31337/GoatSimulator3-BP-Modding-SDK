#pragma once
#include "CoreMinimal.h"
#include "GGGearAbility.h"
#include "Templates/SubclassOf.h"
#include "GGGearAbility_RadioactiveRods.generated.h"

class AActor;
class AGGGoat;
class UGGExtraLimbComponent;
class UParticleSystem;
class USoundCue;

UCLASS(Blueprintable)
class GOATAPOCALYPSE_API UGGGearAbility_RadioactiveRods : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGExtraLimbComponent> ExtraLimbComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* HitParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* HitSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtraLimbsForInstinct;
    
    UGGGearAbility_RadioactiveRods();

private:
    UFUNCTION(BlueprintCallable)
    void OnGoatHeadbutting(AGGGoat* GoatHeadbutting, bool bHitSomething, const TArray<AActor*>& HeadbuttedActors, bool bIsChargeHeadbutt);
    
};

