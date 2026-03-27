#pragma once
#include "CoreMinimal.h"
#include "OnInstinctEntryIsFinishedDelegate.generated.h"

class UGGInstinctEntryUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInstinctEntryIsFinished, UGGInstinctEntryUserWidget*, Widget);

