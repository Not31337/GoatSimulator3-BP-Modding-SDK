#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GGInteractInterface.h"
#include "GGStretchGoalTrigger.generated.h"

UCLASS(Blueprintable)
class GOAT2_API AGGStretchGoalTrigger : public AActor, public IGGInteractInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StretchGoalHoldDuration;
    
    AGGStretchGoalTrigger(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

