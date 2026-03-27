#pragma once
#include "CoreMinimal.h"
#include "OnGhostUnpossessingDelegate.generated.h"

class AGGGhost;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(bool, FOnGhostUnpossessing, AGGGhost*, Ghost);

