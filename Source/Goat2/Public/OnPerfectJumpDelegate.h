#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnPerfectJumpDelegate.generated.h"

class AGGGoat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPerfectJump, AGGGoat*, JumpingGoat, FVector, Location);

