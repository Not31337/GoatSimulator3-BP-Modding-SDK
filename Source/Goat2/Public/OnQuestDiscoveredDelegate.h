#pragma once
#include "CoreMinimal.h"
#include "OnQuestDiscoveredDelegate.generated.h"

class AGGQuestBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQuestDiscovered, AGGQuestBase*, Quest);

