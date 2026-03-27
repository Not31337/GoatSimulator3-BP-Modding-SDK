#pragma once
#include "CoreMinimal.h"
#include "ELSMovementDirection.h"
#include "DirectionChanged_SignatureDelegate.generated.h"

class ULSCharacterMovementComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDirectionChanged_Signature, ELSMovementDirection, OldDirection, ELSMovementDirection, NewDirection, ULSCharacterMovementComponent*, MovementComp);

