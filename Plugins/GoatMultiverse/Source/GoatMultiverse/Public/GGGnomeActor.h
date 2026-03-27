#pragma once
#include "CoreMinimal.h"
#include "GGJumpingPActor.h"
#include "GGGnomeActor.generated.h"

UCLASS(Blueprintable)
class GOATMULTIVERSE_API AGGGnomeActor : public AGGJumpingPActor {
    GENERATED_BODY()
public:
    AGGGnomeActor(const FObjectInitializer& ObjectInitializer);

};

