#pragma once
#include "CoreMinimal.h"
#include "OnCharacterHasJumpedDelegate.generated.h"

class AGGCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterHasJumped, AGGCharacter*, Character);

