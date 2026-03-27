#pragma once
#include "CoreMinimal.h"
#include "OnCharacterJumpedDelegate.generated.h"

class AGGCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterJumped, AGGCharacter*, Character);

