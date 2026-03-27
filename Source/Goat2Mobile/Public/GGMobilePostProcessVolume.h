#pragma once
#include "CoreMinimal.h"
#include "Engine/PostProcessVolume.h"
#include "GGMobilePostProcessVolume.generated.h"

UCLASS(Blueprintable)
class GOAT2MOBILE_API AGGMobilePostProcessVolume : public APostProcessVolume {
    GENERATED_BODY()
public:
    AGGMobilePostProcessVolume(const FObjectInitializer& ObjectInitializer);

};

