#pragma once
#include "CoreMinimal.h"
#include "GGLyreSpawnedDelegate.generated.h"

class AGGLyre;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGGLyreSpawned, AGGLyre*, Lyre);

