#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GGGearAbility.h"
#include "GGGearAbility_TowerHat.generated.h"

class AActor;
class AGGPhysicsActor_Base;
class UGGGoatGear_Static_Base;
class UParticleSystem;

UCLASS(Blueprintable)
class GOAT2_API UGGGearAbility_TowerHat : public UGGGearAbility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KeyHoldTimeToRemoveAllHats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* StackParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HatsToCompleteInstinct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InstinctTag;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AGGPhysicsActor_Base>> EquippedHats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGGoatGear_Static_Base* GearMesh;
    
public:
    UGGGearAbility_TowerHat();

private:
    UFUNCTION(BlueprintCallable)
    void OnPActorBeingDestroyed(AActor* PActor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
};

