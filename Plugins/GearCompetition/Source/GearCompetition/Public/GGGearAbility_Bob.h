#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GGGearAbility.h"
#include "GGGearAbility_Bob.generated.h"

class AActor;
class AController;
class UDamageType;

UCLASS(Blueprintable)
class GEARCOMPETITION_API UGGGearAbility_Bob : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngerOverlapInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngerOverlapRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BobInstinctTag;
    
    UGGGearAbility_Bob();

    UFUNCTION(BlueprintCallable)
    void TriggerAngerOverlap();
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerTakeDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
};

