#pragma once
#include "CoreMinimal.h"
#include "RagdollStateChangeSettings.h"
#include "ToRagdoll_SignatureDelegate.generated.h"

class ACharacter;
class ULSCharacterMovementComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FToRagdoll_Signature, ULSCharacterMovementComponent*, MovementComp, ACharacter*, RagdollingCharacter, const FRagdollStateChangeSettings&, StateChangeSettings);

