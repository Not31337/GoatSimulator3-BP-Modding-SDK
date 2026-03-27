#pragma once
#include "CoreMinimal.h"
#include "OnInitialQuestProgressionReplicatedDelegate.generated.h"

class AGGQuestBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInitialQuestProgressionReplicated, AGGQuestBase*, Quest);

