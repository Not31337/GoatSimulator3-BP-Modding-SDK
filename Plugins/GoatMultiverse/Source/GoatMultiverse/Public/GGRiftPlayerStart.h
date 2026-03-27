#pragma once
#include "CoreMinimal.h"
#include "GGTeleportAreaPlayerStart.h"
#include "GGRiftPlayerStart.generated.h"

UCLASS(Blueprintable)
class GOATMULTIVERSE_API AGGRiftPlayerStart : public AGGTeleportAreaPlayerStart {
    GENERATED_BODY()
public:
    AGGRiftPlayerStart(const FObjectInitializer& ObjectInitializer);

};

