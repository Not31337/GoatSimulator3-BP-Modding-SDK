#pragma once
#include "CoreMinimal.h"
#include "GGGameMode.h"
#include "GGGameMode_Multiverse.generated.h"

UCLASS(Blueprintable, NonTransient)
class GOATMULTIVERSE_API AGGGameMode_Multiverse : public AGGGameMode {
    GENERATED_BODY()
public:
    AGGGameMode_Multiverse(const FObjectInitializer& ObjectInitializer);

};

