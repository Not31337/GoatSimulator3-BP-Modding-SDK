#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "OnGoatJumpedDelegate.generated.h"

class AGGGoat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnGoatJumped, AGGGoat*, Goat, const FFindFloorResult&, Floor, bool, bWasBouncyJump);

