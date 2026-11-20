#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GGConveyorActor.generated.h"

class UGGConveyorComponent;
class UGGPhysicalConveyorComponent;
class UGGPhysicalConveyorReverseComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGConveyorActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGConveyorComponent* ConveyorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGPhysicalConveyorComponent* PhysicalConveyorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGPhysicalConveyorReverseComponent* ConveyorReverseComponent;
    
    AGGConveyorActor(const FObjectInitializer& ObjectInitializer);

};

