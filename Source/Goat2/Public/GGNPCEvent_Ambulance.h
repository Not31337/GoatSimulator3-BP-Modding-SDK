#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GGNPCEvent.h"
#include "Templates/SubclassOf.h"
#include "GGNPCEvent_Ambulance.generated.h"

class AActor;
class AGGGoat;
class AGGNPC;
class AGGNPC_Humanoid;
class AGGVehicle;

UCLASS(Blueprintable)
class GOAT2_API AGGNPCEvent_Ambulance : public AGGNPCEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSplineDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineAdjustDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AllowedSirenTimeWhileStuck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGVehicle> AmbulanceClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGNPC> MedicClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceEjectWhenStuckFor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* PassedOutActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGNPC* PassedOutNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGGoat* PassedOutGoat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PassedOutAtLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGNPC_Humanoid* MedicNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGVehicle* AmbulanceVehicle;
    
public:
    AGGNPCEvent_Ambulance(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnReachedPathTargetLocation(AGGVehicle* Vehicle, FVector TargetLocation);
    
    UFUNCTION(BlueprintCallable)
    void OnReachedPathTargetActor(AGGVehicle* Vehicle, AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    void MedicExit();
    
};

