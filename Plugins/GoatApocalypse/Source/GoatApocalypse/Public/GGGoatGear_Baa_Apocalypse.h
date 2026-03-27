#pragma once
#include "CoreMinimal.h"
#include "GGGoatGear_Scene_Baa.h"
#include "Templates/SubclassOf.h"
#include "GGGoatGear_Baa_Apocalypse.generated.h"

class AGGVehicle_Motorcycle;
class UPrimaryDataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATAPOCALYPSE_API UGGGoatGear_Baa_Apocalypse : public UGGGoatGear_Scene_Baa {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGVehicle_Motorcycle> MotorcycleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AGGVehicle_Motorcycle> MotorcycleSoftClassPtr;
    
public:
    UGGGoatGear_Baa_Apocalypse(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSpawnMotorcycle(const TArray<TSoftObjectPtr<UPrimaryDataAsset>>& Equipment);
    
};

