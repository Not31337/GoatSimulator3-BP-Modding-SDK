#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GGHeadbuttableObjectInterface.h"
#include "GGVehicleInventoryHeadbuttCollision.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATAPOCALYPSE_API UGGVehicleInventoryHeadbuttCollision : public UBoxComponent, public IGGHeadbuttableObjectInterface {
    GENERATED_BODY()
public:
    UGGVehicleInventoryHeadbuttCollision(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

