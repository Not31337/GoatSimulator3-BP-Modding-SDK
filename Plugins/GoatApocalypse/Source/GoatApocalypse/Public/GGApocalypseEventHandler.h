#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GGOnActorAddedToVehicleInventory_DelegateDelegate.h"
#include "GGOnActorRemovedFromVehicleInventory_DelegateDelegate.h"
#include "GGOnCockroachKilledDelegate.h"
#include "GGOnCubeCountChanged_DelegateDelegate.h"
#include "GGOnPlayerRidingSandworm_DelegateDelegate.h"
#include "GGApocalypseEventHandler.generated.h"

class AGGGoat;

UCLASS(Blueprintable)
class UGGApocalypseEventHandler : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGOnCubeCountChanged_Delegate OnCubeCountChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGOnPlayerRidingSandworm_Delegate OnPlayerStartRidingSandworm;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGOnPlayerRidingSandworm_Delegate OnPlayerStopRidingSandworm;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGOnCockroachKilled OnCockroachKilled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGOnActorAddedToVehicleInventory_Delegate OnActorAddedToVehicleInventory;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGOnActorRemovedFromVehicleInventory_Delegate OnActorRemovedFromVehicleInventory;
    
    UGGApocalypseEventHandler();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void CockroachKilled(AGGGoat* Player) const;
    
};

