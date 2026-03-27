#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GGMiniGamePlayerComp_CarRace.generated.h"

class AActor;
class AGGPlayerGame_Race_CheckpointPath;
class AGGVehicle;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGMiniGamePlayerComp_CarRace : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 NumberOfRoundsFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 NumberOfTotalRounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 LastCheckpointOverlapped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CheckpointPath, meta=(AllowPrivateAccess=true))
    AGGPlayerGame_Race_CheckpointPath* CheckpointPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGVehicle* OwnerVehicle;
    
public:
    UGGMiniGamePlayerComp_CarRace(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCheckpointPath(AGGPlayerGame_Race_CheckpointPath* NewCheckpointPath);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CheckpointPath();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCheckpointCrossed(AActor* CheckPoint, AGGVehicle* Vehicle, int32 CheckPointNumber);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFinishedAllRounds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCrossedAllCheckpoints() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void HandleCompletedRound();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetNextCheckpoint() const;
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientHandleCompletedRound();
    
};

