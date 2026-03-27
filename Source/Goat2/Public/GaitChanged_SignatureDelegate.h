#pragma once
#include "CoreMinimal.h"
#include "ELSGait.h"
#include "GaitChanged_SignatureDelegate.generated.h"

class ULSCharacterMovementComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGaitChanged_Signature, ELSGait, NewGait, ULSCharacterMovementComponent*, MovementComp);

