#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnTeleportedDelegate.generated.h"

class AGGCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTeleported, AGGCharacter*, Character, const FTransform&, OldTransform);

