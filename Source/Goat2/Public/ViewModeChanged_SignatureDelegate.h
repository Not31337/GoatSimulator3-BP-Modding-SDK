#pragma once
#include "CoreMinimal.h"
#include "ELSViewMode.h"
#include "ViewModeChanged_SignatureDelegate.generated.h"

class ULSCharacterMovementComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FViewModeChanged_Signature, ELSViewMode, NewMode, ULSCharacterMovementComponent*, MovementComp);

