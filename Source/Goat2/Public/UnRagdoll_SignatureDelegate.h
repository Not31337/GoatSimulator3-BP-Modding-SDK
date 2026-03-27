#pragma once
#include "CoreMinimal.h"
#include "RagdollStateChangeSettings.h"
#include "UnRagdoll_SignatureDelegate.generated.h"

class ACharacter;
class ULSCharacterMovementComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FUnRagdoll_Signature, bool, bRagdollOnGround, ULSCharacterMovementComponent*, MovementComp, ACharacter*, UnRagdolledCharacter, const FRagdollStateChangeSettings&, StateChangeSettings);

