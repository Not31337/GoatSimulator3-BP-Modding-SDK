#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GGVehicleAutoFlipComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGVehicleAutoFlipComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UGGVehicleAutoFlipComponent(const FObjectInitializer& ObjectInitializer);

};

