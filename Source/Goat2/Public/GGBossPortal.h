#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GGBossPortal.generated.h"

UCLASS(Blueprintable)
class GOAT2_API AGGBossPortal : public AActor {
    GENERATED_BODY()
public:
    AGGBossPortal(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 GetTriggersWithPlayersNum();
    
};

