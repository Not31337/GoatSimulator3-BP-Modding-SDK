#pragma once
#include "CoreMinimal.h"
#include "OnAsyncSequenceActionUpdateDelegate.generated.h"

class AGGLevelSequenceActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAsyncSequenceActionUpdate, AGGLevelSequenceActor*, LevelSequenceActor);

