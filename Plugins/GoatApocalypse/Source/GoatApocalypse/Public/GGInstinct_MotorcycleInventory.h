#pragma once
#include "CoreMinimal.h"
#include "GGInstinct.h"
#include "GGInstinct_MotorcycleInventory.generated.h"

class AActor;
class UGGVehicleInventory;

UCLASS(Blueprintable)
class GOATAPOCALYPSE_API AGGInstinct_MotorcycleInventory : public AGGInstinct {
    GENERATED_BODY()
public:
    AGGInstinct_MotorcycleInventory(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnActorRemovedFromInventory(UGGVehicleInventory* Inventory, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnActorAddedToInventory(UGGVehicleInventory* Inventory, AActor* Actor);
    
};

