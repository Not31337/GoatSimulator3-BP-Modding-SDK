#pragma once
#include "CoreMinimal.h"
#include "ELSStance.h"
#include "StanceChanged_SignatureDelegate.generated.h"

class ULSCharacterMovementComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStanceChanged_Signature, ELSStance, NewStance, ULSCharacterMovementComponent*, MovementComp);

