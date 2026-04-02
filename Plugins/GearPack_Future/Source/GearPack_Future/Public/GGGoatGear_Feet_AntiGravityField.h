#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GGGoatGear_Scene_Feet.h"
#include "Templates/SubclassOf.h"
#include "GGGoatGear_Feet_AntiGravityField.generated.h"

class AGGAlternateAntiGravityFieldActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GEARPACK_FUTURE_API UGGGoatGear_Feet_AntiGravityField : public UGGGoatGear_Scene_Feet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGAlternateAntiGravityFieldActor> GravityFieldActorClass;
    
    UGGGoatGear_Feet_AntiGravityField(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SpawnFieldActor(FVector Location, FRotator Rotation, FVector BoxExtents);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocalAbilityDeactivation(bool bWasCancelled, bool bDeletedFieldActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocalAbilityActivation();
    
    UFUNCTION(BlueprintCallable)
    bool HasFieldActor();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DeleteFieldActors();
    
};

