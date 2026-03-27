#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GGOnPushed_SignatureDelegate.generated.h"

class UGGCharacterPushComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGGOnPushed_Signature, UGGCharacterPushComponent*, Pushed, FVector, Velocity);

