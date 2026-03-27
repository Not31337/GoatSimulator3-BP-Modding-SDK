#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RagdollStateChangeSettings.h"
#include "GGSyringeEffectComponent.generated.h"

class ACharacter;
class ULSCharacterMovementComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGSyringeEffectComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UGGSyringeEffectComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnOwnerUnRagdoll(bool bRagdollOnGround, ULSCharacterMovementComponent* MovementComp, ACharacter* UnRagdolledCharacter, const FRagdollStateChangeSettings& StateChangeSettings);
    
};

