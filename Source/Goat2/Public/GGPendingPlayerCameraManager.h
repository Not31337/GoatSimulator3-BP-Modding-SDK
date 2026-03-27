#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "GGPendingPlayerCameraManager.generated.h"

UCLASS(Blueprintable, NonTransient)
class GOAT2_API AGGPendingPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
    AGGPendingPlayerCameraManager(const FObjectInitializer& ObjectInitializer);

};

