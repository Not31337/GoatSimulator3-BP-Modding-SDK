#pragma once
#include "CoreMinimal.h"
#include "OnNPCSpawnedDelegate.generated.h"

class AGGNPC;
class AGGNPCSpawner;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnNPCSpawned, AGGNPCSpawner*, NPCSpawner, AGGNPC*, NPC);

