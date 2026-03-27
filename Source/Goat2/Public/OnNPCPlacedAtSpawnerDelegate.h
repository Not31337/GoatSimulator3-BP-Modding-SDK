#pragma once
#include "CoreMinimal.h"
#include "OnNPCPlacedAtSpawnerDelegate.generated.h"

class AGGNPC;
class AGGNPCSpawner;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnNPCPlacedAtSpawner, AGGNPC*, NPC, AGGNPCSpawner*, Spawner);

