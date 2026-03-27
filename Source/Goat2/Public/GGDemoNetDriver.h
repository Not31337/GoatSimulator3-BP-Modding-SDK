#pragma once
#include "CoreMinimal.h"
#include "Engine/DemoNetDriver.h"
#include "GGDemoNetDriver.generated.h"

UCLASS(Blueprintable, NonTransient)
class GOAT2_API UGGDemoNetDriver : public UDemoNetDriver {
    GENERATED_BODY()
public:
    UGGDemoNetDriver(const class FObjectInitializer& ObjectInitializer);

};

