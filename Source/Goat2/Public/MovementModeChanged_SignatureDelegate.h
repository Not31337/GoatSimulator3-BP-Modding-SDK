#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "MovementModeChanged_SignatureDelegate.generated.h"

class ULSCharacterMovementComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FMovementModeChanged_Signature, TEnumAsByte<EMovementMode>, NewMode, TEnumAsByte<EMovementMode>, PrevMode, uint8, NewCustomMode, uint8, PrevCustomMode, ULSCharacterMovementComponent*, MovementComp);

