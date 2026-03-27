#pragma once
#include "CoreMinimal.h"
#include "Components/InputComponent.h"
#include "RagdollStateChangeSettings.h"
#include "GGObjectControlInputComponent.generated.h"

class AActor;
class ACharacter;
class AGGCharacter;
class AGGGoat;
class AGGPlayerController;
class AGGVehicle;
class ULSCharacterMovementComponent;
class UObject;

UCLASS(Blueprintable, NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGObjectControlInputComponent : public UInputComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPlayerController* OwnerPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGGoat* OwnerPlayerGoat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* ControlledObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ViewTarget;
    
public:
    UGGObjectControlInputComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void ToRagdollEvent(ULSCharacterMovementComponent* MovementComp, ACharacter* RagdollingCharacter, const FRagdollStateChangeSettings& StateChangeSettings);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterRespawned(AGGCharacter* OldCharacter, AGGCharacter* NewCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterExitedVehicle(AGGCharacter* Character, AGGVehicle* Vehicle);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterEnteringVehicle(AGGCharacter* Character, AGGVehicle* Vehicle);
    
};

