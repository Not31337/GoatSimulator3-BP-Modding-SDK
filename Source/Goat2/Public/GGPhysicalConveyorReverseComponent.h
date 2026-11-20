#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GGPhysicalConveyorReverseComponent.generated.h"

class UGGPhysicalConveyorComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGPhysicalConveyorReverseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGPhysicalConveyorComponent* ConveyorComponent;
    
    UGGPhysicalConveyorReverseComponent(const FObjectInitializer& ObjectInitializer);

};

