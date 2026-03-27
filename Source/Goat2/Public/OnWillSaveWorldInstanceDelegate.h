#pragma once
#include "CoreMinimal.h"
#include "OnWillSaveWorldInstanceDelegate.generated.h"

class UGGWorldSave;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnWillSaveWorldInstance, UGGWorldSave*, WorldSaveInstance, bool&, bNeedsToUpdateArea);

