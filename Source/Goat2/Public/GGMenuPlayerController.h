#pragma once
#include "CoreMinimal.h"
#include "GGPlayerController.h"
#include "GGMenuPlayerController.generated.h"

UCLASS(Blueprintable)
class GOAT2_API AGGMenuPlayerController : public AGGPlayerController {
    GENERATED_BODY()
public:
    AGGMenuPlayerController(const FObjectInitializer& ObjectInitializer);

};

