#pragma once
#include "CoreMinimal.h"
#include "ELSRotationMode.h"
#include "RotationModeChanged_SignatureDelegate.generated.h"

class ULSCharacterMovementComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRotationModeChanged_Signature, ELSRotationMode, NewMode, ULSCharacterMovementComponent*, MovementComp);

