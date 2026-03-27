#pragma once
#include "CoreMinimal.h"
#include "OnAppearanceLoadedAndSetDelegate.generated.h"

class AGGNPC_Humanoid;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAppearanceLoadedAndSet, AGGNPC_Humanoid*, NPC);

