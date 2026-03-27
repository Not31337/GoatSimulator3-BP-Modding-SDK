#pragma once
#include "CoreMinimal.h"
#include "OnQuestActivatedDelegate.generated.h"

class AGGQuestBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQuestActivated, AGGQuestBase*, Quest);

