#pragma once
#include "CoreMinimal.h"
#include "TurnInPlaceTriggered_SignatureDelegate.generated.h"

class ULSCharacterMovementComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTurnInPlaceTriggered_Signature, ULSCharacterMovementComponent*, MovementComp, float, DeltaAngle);

