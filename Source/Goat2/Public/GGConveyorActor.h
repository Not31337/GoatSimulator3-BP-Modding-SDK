#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GGConveyorActor.generated.h"

class UGGConveyorComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGConveyorActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGConveyorComponent* ConveyorComponent;
    
public:
    AGGConveyorActor(const FObjectInitializer& ObjectInitializer);

};

