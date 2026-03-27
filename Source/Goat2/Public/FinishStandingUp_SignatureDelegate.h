#pragma once
#include "CoreMinimal.h"
#include "FinishStandingUp_SignatureDelegate.generated.h"

class ACharacter;
class ULSCharacterMovementComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFinishStandingUp_Signature, ULSCharacterMovementComponent*, MovementComp, ACharacter*, Character);

