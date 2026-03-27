#pragma once
#include "CoreMinimal.h"
#include "MovementSpeedChanged_SignatureDelegate.generated.h"

class ULSCharacterMovementComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMovementSpeedChanged_Signature, ULSCharacterMovementComponent*, MovementComp);

