#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "GGPhysicalConveyorComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGPhysicalConveyorComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UGGPhysicalConveyorComponent(const FObjectInitializer& ObjectInitializer);

};

