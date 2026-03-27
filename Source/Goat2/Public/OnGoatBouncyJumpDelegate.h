#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnGoatBouncyJumpDelegate.generated.h"

class AGGGoat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnGoatBouncyJump, AGGGoat*, GoatJumping, int32, JumpCount, FVector, Location);

