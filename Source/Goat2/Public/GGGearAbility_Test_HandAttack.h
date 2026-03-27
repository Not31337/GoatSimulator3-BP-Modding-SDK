#pragma once
#include "CoreMinimal.h"
#include "GGGearAbility.h"
#include "Templates/SubclassOf.h"
#include "GGGearAbility_Test_HandAttack.generated.h"

class AGGAttackHand;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class GOAT2_API UGGGearAbility_Test_HandAttack : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGAttackHand> HandClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BeamPArticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldForSlam;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGAttackHand* AttackHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* BeamParticleComp;
    
public:
    UGGGearAbility_Test_HandAttack();

};

