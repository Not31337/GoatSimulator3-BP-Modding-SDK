#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GGGearAbility.h"
#include "GGTraceParams.h"
#include "GGWheelMeshes.h"
#include "Templates/SubclassOf.h"
#include "GGGearAbility_PActorVehicle.generated.h"

class AGGPhysicsActor;
class AGGVehiclePActor;
class UMaterialInterface;

UCLASS(Abstract, Blueprintable)
class GOATAPOCALYPSE_API UGGGearAbility_PActorVehicle : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGVehiclePActor> PActorVehicleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGTraceParams TraceParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* HighlightMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GameplayCueAbilityActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GameplayCueAbilityActivatedWithoutTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GameplayCuePActorVehicleSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText VehicleNameTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPhysicsActor* HighlightedPActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGWheelMeshes PreviewWheels;
    
    UGGGearAbility_PActorVehicle();

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerConvertPActorIntoVehicle(AGGPhysicsActor* PActor);
    
};

