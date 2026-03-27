#pragma once
#include "CoreMinimal.h"
#include "AimingChanged_SignatureDelegate.generated.h"

class ULSCharacterMovementComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAimingChanged_Signature, bool, bIsAimingNow, ULSCharacterMovementComponent*, MovementComp);

