#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EVehicleType.h"
#include "GGVehicleInterface.generated.h"

class AGGCharacter;
class AGGGoat;
class UCameraComponent;

UINTERFACE(Blueprintable)
class GOAT2_API UGGVehicleInterface : public UInterface {
    GENERATED_BODY()
};

class GOAT2_API IGGVehicleInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TurnVehicle(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SprintUp();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SprintDown();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ScrollUp();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ScrollDown();
    
protected:
    UFUNCTION()
    virtual void OnRep_Passengers(const TArray<AGGGoat*>& PreviousPassengers) PURE_VIRTUAL(OnRep_Passengers,);
    
    UFUNCTION()
    virtual void OnRep_Driver(AGGGoat* PreviousDriver) PURE_VIRTUAL(OnRep_Driver,);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MoveForward(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsCharacterInVehicle(const AGGCharacter* InCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsCharacterAPassenger(const AGGCharacter* InCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsCharacterADriver(const AGGCharacter* InCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HornUp();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HornDown();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandbrakeInputUp();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandbrakeInputDown();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EVehicleType GetVehicleType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UCameraComponent* GetCameraComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DriveForward(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BrakeUp();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BrakeDown();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BoostUp();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BoostDown();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AbilityUp();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AbilityDown();
    
};

