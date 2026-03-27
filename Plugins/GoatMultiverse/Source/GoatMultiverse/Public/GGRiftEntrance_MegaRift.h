#pragma once
#include "CoreMinimal.h"
#include "GGRadarInterface.h"
#include "GGRiftEntrance.h"
#include "GGRiftEntrance_MegaRift.generated.h"

UCLASS(Blueprintable)
class GOATMULTIVERSE_API AGGRiftEntrance_MegaRift : public AGGRiftEntrance, public IGGRadarInterface {
    GENERATED_BODY()
public:
    AGGRiftEntrance_MegaRift(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

