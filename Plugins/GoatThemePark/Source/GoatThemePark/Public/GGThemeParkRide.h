#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Pawn.h"
#include "GameplayTagContainer.h"
#include "GGInteractInterface.h"
#include "GGSmoothNetInterpolate.h"
#include "GGVehicleInterface.h"
#include "GGThemeParkRide.generated.h"

class AGGGoat;
class AGGPlayerController;
class UGGAlternativeGoatDataAsset;
class UMeshComponent;

UCLASS(Abstract, Blueprintable)
class GOATTHEMEPARK_API AGGThemeParkRide : public APawn, public IGGVehicleInterface, public IGGInteractInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGGSmoothNetInterpolate SmoothNetInterpolate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PassengerSocketPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PassengerSocketNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PromptEnterAsPassenger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldTimeForEnteringAsPassenger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DriverSocketPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanHaveADriver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PromptEnterAsDriver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSweepWhileMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EjectionForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomSpinForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EffectSourceTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* PassengerAttachMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Passengers, meta=(AllowPrivateAccess=true))
    TArray<AGGGoat*> Passengers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Driver, meta=(AllowPrivateAccess=true))
    AGGGoat* Driver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPlayerController* InteractingPlayer;
    
    AGGThemeParkRide(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerExitVehicleAsDriver(FVector Impulse);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Passengers(const TArray<AGGGoat*>& PreviousPassengers);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Driver(AGGGoat* PreviousDriver);
    
    UFUNCTION(BlueprintCallable)
    void OnAltGoatChanged(AGGGoat* Goat, UGGAlternativeGoatDataAsset* NewAltGoat);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastGoatExitedVehicle(AGGGoat* Goat, bool bWasDriver, FVector Impulse);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastGoatEnteredVehicle(AGGGoat* Goat, bool bIsDriver);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> FindAllPlayerPassengerSockets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> FindAllNPCPassengerSockets() const;
    

    // Fix for true pure virtual functions not being implemented
};

