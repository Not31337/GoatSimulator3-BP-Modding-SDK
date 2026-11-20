#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Pawn.h"
#include "GGInteractInterface.h"
#include "GGSignificanceInterface.h"
#include "RecentActor.h"
#include "GGRollercoasterTrainCar_DelegateDelegate.h"
#include "GGRollercoasterTrain_SingleDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "GGRollercoasterTrainCar.generated.h"

class AGGNPC_Humanoid;
class AGGRideSeat;
class AGGRollercoasterTrack;
class AGGRollercoasterTrainCar;
class UBoxComponent;
class UGGSplineMovementComponent;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class GOATTHEMEPARK_API AGGRollercoasterTrainCar : public APawn, public IGGSignificanceInterface, public IGGInteractInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGSplineMovementComponent* SplineMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* ForwardCollisionBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CarriageCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGRollercoasterTrainCar> CarriageClassOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocomotiveSpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CarriageSpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSpeedToRagdollHitCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBetweenHits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SidewaysImpulseMultiplicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForwardImpulseVelocityMultiplicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SignificanceRange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGRollercoasterTrainCar_Delegate OnStoppedAtLocation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGRollercoasterTrainCar_Delegate OnStartedMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Carriages, meta=(AllowPrivateAccess=true))
    TArray<AGGRollercoasterTrainCar*> Carriages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGRollercoasterTrack* RideTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AGGRollercoasterTrainCar* Locomotive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRecentActor> RecentHits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TrainStopDistance, meta=(AllowPrivateAccess=true))
    float TrainStopDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGNPC_Humanoid*> ApproachingNpcs;
    
    AGGRollercoasterTrainCar(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool StopTrainAtLocation(FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTrainCarriagesSpawned();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TrainStopDistance();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Carriages();
    
    UFUNCTION(BlueprintCallable)
    void OnNpcReachedTrain(AGGNPC_Humanoid* NPC, AGGRideSeat* Seat, bool bHasReachedSeat);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastOnStoppedAtLocation();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastOnStartMoving();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool MoveNpcsTowardsAndEnterTrain(TArray<AGGNPC_Humanoid*> NPCs, FGGRollercoasterTrain_SingleDelegate Callback, float SeatAssignTime);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void LaunchTrain();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStoppingAtLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocomotive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasStoppedAtLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGRollercoasterTrainCar* GetLocomotiveOrSelfConst() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGRollercoasterTrainCar* GetLocomotiveOrSelf();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGRollercoasterTrainCar* GetLocomotive() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    TArray<AGGNPC_Humanoid*> AllNpcsExitTrain();
    

    // Fix for true pure virtual functions not being implemented
};

