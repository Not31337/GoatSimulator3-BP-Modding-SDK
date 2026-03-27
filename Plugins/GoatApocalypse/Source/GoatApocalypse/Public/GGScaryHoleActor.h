#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GGScaryHoleActor.generated.h"

class AGGPlayerController;

UCLASS(Blueprintable)
class AGGScaryHoleActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsForGear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPlayerController* SpawnedByPlayer;
    
    AGGScaryHoleActor(const FObjectInitializer& ObjectInitializer);

};

