#pragma once
#include "CoreMinimal.h"
#include "GGDialogueLine.h"
#include "GGDialogueLine_DelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGGDialogueLine_Delegate, const FGGDialogueLine&, DialogueLine);

