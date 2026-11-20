#pragma once
#include "CoreMinimal.h"
#include "OnGoatEnteredRaftDelegate.generated.h"

class AActor;
class AGGGoat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGoatEnteredRaft, AGGGoat*, Goat, AActor*, Raft);

