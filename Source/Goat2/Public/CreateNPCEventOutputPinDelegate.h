#pragma once
#include "CoreMinimal.h"
#include "CreateNPCEventOutputPinDelegate.generated.h"

class AGGNPCEvent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCreateNPCEventOutputPin, AGGNPCEvent*, NPCEvent);

