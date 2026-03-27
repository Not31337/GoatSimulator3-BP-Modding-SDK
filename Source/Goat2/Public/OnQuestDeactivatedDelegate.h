#pragma once
#include "CoreMinimal.h"
#include "OnQuestDeactivatedDelegate.generated.h"

class AGGQuestBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQuestDeactivated, AGGQuestBase*, Quest);

