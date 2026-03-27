#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "GGDestructibleShard.generated.h"

UCLASS(Blueprintable)
class GOAT2_API AGGDestructibleShard : public AStaticMeshActor {
    GENERATED_BODY()
public:
    AGGDestructibleShard(const FObjectInitializer& ObjectInitializer);

};

