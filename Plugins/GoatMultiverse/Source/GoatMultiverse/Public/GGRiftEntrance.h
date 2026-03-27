#pragma once
#include "CoreMinimal.h"
#include "GGTeleportAreaEntrance.h"
#include "GGRiftEntrance.generated.h"

UCLASS(Blueprintable)
class GOATMULTIVERSE_API AGGRiftEntrance : public AGGTeleportAreaEntrance {
    GENERATED_BODY()
public:
    AGGRiftEntrance(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMegaRiftEntrance() const;
    
};

