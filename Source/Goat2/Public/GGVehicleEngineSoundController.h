#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EngineAudioRPMInput.h"
#include "EngineAudioRPMOutput.h"
#include "GGVehicleEngineSoundController.generated.h"

class AGGVehicle;
class UGGBoatVehicleMovementComponent;
class UPawnMovementComponent;
class UWheeledVehicleMovementComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGVehicleEngineSoundController : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGVehicle* OwningVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPawnMovementComponent* OwningVehicleMovementComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWheeledVehicleMovementComponent* OwningVehicleWheeledMovementComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGBoatVehicleMovementComponent* OwningVehicleBoatMovementComp;
    
public:
    UGGVehicleEngineSoundController(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGearChanged(int32 PreviousGear, int32 NewGear);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugging();
    
    UFUNCTION(BlueprintCallable)
    FEngineAudioRPMOutput CalculateAudioRPM_Internal(const FEngineAudioRPMInput& Input);
    
};

