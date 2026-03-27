#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GGObjectDeletionsLogger.generated.h"

UCLASS(Blueprintable)
class GOAT2_API AGGObjectDeletionsLogger : public AActor {
    GENERATED_BODY()
public:
    AGGObjectDeletionsLogger(const FObjectInitializer& ObjectInitializer);

};

