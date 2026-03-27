#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GGPendingPlayerController.generated.h"

UCLASS(Blueprintable)
class GOAT2_API AGGPendingPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    AGGPendingPlayerController(const FObjectInitializer& ObjectInitializer);

};

