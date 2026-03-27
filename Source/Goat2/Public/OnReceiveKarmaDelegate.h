#pragma once
#include "CoreMinimal.h"
#include "OnReceiveKarmaDelegate.generated.h"

class AGGGoat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnReceiveKarma, AGGGoat*, Goat, int32, Amount);

