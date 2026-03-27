#pragma once
#include "CoreMinimal.h"
#include "GGDialogue_DelegateDelegate.generated.h"

class UGGDialogueInstance;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGGDialogue_Delegate, UGGDialogueInstance*, Dialogue);

