#pragma once
#include "CoreMinimal.h"
#include "GGVehicle_Car.h"
#include "RagdollStateChangeSettings.h"
#include "Templates/SubclassOf.h"
#include "GGVehicle_Car_Raiders.generated.h"

class AActor;
class ACharacter;
class AGGNPC;
class UAnimMontage;
class UAudioComponent;
class ULSCharacterMovementComponent;
class USceneComponent;

UCLASS(Blueprintable)
class GOATAPOCALYPSE_API AGGVehicle_Car_Raiders : public AGGVehicle_Car {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RaiderSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* MusicComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGNPC> RaiderClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* GuitarMontage;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CurrentTargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGNPC* NPCOnCar;
    
public:
    AGGVehicle_Car_Raiders(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnNPCRagdolled(ULSCharacterMovementComponent* MovementComp, ACharacter* OwnerCharacter, const FRagdollStateChangeSettings& StateChangeSettings);
    
    UFUNCTION(BlueprintCallable)
    void OnNPCPooledOrMoved(AGGNPC* NPC, bool bWasPooled);
    
};

