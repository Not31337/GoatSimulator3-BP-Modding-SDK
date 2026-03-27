#pragma once
#include "CoreMinimal.h"
#include "OnPuppetCrossAttachedToNPCDelegate.generated.h"

class AGGNPC;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPuppetCrossAttachedToNPC, AGGNPC*, NPC);

