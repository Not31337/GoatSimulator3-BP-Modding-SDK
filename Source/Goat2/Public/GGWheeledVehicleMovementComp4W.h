#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Curves/CurveFloat.h"
#include "WheeledVehicleMovementComponent4W.h"
#include "VehicleHandling.h"
#include "GGWheeledVehicleMovementComp4W.generated.h"

class AGGVehicle;
class UTireConfig;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGWheeledVehicleMovementComp4W : public UWheeledVehicleMovementComponent4W {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGVehicle* OwningVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NPCDragCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NPCMaxRPM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve NPCTorqueCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirRollControlScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirPitchControlScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAirControlEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlipperyLatStiffValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlipperyLatStiffMaxLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlipperyLongStiffValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTireConfig* SlipperyTireConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlipperyCheckInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HandlingSettings, meta=(AllowPrivateAccess=true))
    FVehicleHandling CurrentHandlingSettings;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_VehicleScale, meta=(AllowPrivateAccess=true))
    FVector VehicleScale;
    
public:
    UGGWheeledVehicleMovementComp4W(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetIdleBrakeInput(float IdleBrake);
    
    UFUNCTION(BlueprintCallable)
    void ResetWheelToDefaultValues(int32 WheelIndex);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_VehicleScale();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_HandlingSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRawSteeringInput() const;
    
};

