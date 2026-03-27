#pragma once
#include "CoreMinimal.h"
#include "OnMenuNavActionDelegate.generated.h"

class UGGUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMenuNavAction, UGGUserWidget*, Widget);

