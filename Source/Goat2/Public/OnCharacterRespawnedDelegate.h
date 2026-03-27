#pragma once
#include "CoreMinimal.h"
#include "OnCharacterRespawnedDelegate.generated.h"

class AGGCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCharacterRespawned, AGGCharacter*, OldCharacter, AGGCharacter*, NewCharacter);

