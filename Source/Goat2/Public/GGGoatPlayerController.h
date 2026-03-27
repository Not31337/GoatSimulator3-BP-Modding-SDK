#pragma once
#include "CoreMinimal.h"
#include "GGPlayerController.h"
#include "GGGoatPlayerController.generated.h"

class UGGWorldPersistenceComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGGoatPlayerController : public AGGPlayerController {
    GENERATED_BODY()
public:
    AGGGoatPlayerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetWorldPersistenceComponentState_Server(UGGWorldPersistenceComponent* Component, uint8 State);
    
};

