#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GGOnStumble_SignatureDelegate.generated.h"

class AActor;
class UGGCharacterPushComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FGGOnStumble_Signature, UGGCharacterPushComponent*, Stumbled, AActor*, Pusher, float, Speed, FVector, Direction);

