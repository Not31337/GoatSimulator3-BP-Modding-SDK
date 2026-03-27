#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayAbilitySpec.h"
#include "GGGearAbility.h"
#include "GGGearAbility_Repulsive.generated.h"

class AActor;
class AGGGoat;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class GOAT2_API UGGGearAbility_Repulsive : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AuraTriggerDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AuraRange;
    
    UGGGearAbility_Repulsive();

    UFUNCTION(BlueprintCallable)
    void RepulsiveAura(const FGameplayAbilitySpecHandle Handle, AGGGoat* Goat);
    
    UFUNCTION(BlueprintCallable)
    void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
    
};

