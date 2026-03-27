#pragma once
#include "CoreMinimal.h"
#include "OnHeadSlotChangedDelegate.generated.h"

class AGGNPC_Humanoid;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnHeadSlotChanged, AGGNPC_Humanoid*, NPC, const FString&, OldHead, const FString&, NewHead);

