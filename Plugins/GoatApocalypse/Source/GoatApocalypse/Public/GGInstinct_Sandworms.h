#pragma once
#include "CoreMinimal.h"
#include "GGInstinct.h"
#include "GGInstinct_Sandworms.generated.h"

class AGGGoat;
class AGGSandWorm;

UCLASS(Blueprintable)
class AGGInstinct_Sandworms : public AGGInstinct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurationToResetSandworm;
    
    AGGInstinct_Sandworms(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnPlayerStopRidingSandworm(AGGSandWorm* Worm, AGGGoat* Player, bool bIsDriver);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerStartRidingSandworm(AGGSandWorm* Worm, AGGGoat* Player, bool bIsDriver);
    
};

