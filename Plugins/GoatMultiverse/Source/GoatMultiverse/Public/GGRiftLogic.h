#pragma once
#include "CoreMinimal.h"
#include "GGTeleportAreaLogic.h"
#include "GGRiftLogic.generated.h"

class AGGPlayerState;

UCLASS(Blueprintable)
class GOATMULTIVERSE_API AGGRiftLogic : public AGGTeleportAreaLogic {
    GENERATED_BODY()
public:
    AGGRiftLogic(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerExitedAreaCallback(AGGPlayerState* Player, bool bLocalPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerEnteredAreaCallback(AGGPlayerState* Player, bool bLocalPlayer);
    
};

