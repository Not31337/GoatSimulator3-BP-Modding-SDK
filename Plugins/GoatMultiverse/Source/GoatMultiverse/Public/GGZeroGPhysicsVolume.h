#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/PhysicsVolume.h"
#include "RagdollStateChangeSettings.h"
#include "GGZeroGPhysicsVolume.generated.h"

class ACharacter;
class AGGCharacter;
class AGGPhysicsActor_Base;
class ULSCharacterMovementComponent;

UCLASS(Blueprintable)
class GOATMULTIVERSE_API AGGZeroGPhysicsVolume : public APhysicsVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetToFallingWhenLeavingVolume;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AGGPhysicsActor_Base*, bool> CachedGravityEnabled;
    
public:
    AGGZeroGPhysicsVolume(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnMovementModeChanged(TEnumAsByte<EMovementMode> NewMode, TEnumAsByte<EMovementMode> PrevMode, uint8 NewCustomMode, uint8 PrevCustomMode, ULSCharacterMovementComponent* MovementComp);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterTeleported(AGGCharacter* Character, const FTransform& OldTransform);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterRagdolled(ULSCharacterMovementComponent* MovementComp, ACharacter* RagdollingCharacter, const FRagdollStateChangeSettings& StateChangeSettings);
    
};

