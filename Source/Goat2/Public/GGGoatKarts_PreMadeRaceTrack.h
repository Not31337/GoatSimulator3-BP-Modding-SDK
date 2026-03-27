#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "GGRaceTrack.h"
#include "Templates/SubclassOf.h"
#include "GGGoatKarts_PreMadeRaceTrack.generated.h"

class UPrimitiveComponent;
class USceneComponent;
class USplineComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGGoatKarts_PreMadeRaceTrack : public AActor, public IGGRaceTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* TrackSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Checkpoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> CheckpointClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> StartLineClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> FinishLineClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FirstCheckpointIndex;
    
public:
    AGGGoatKarts_PreMadeRaceTrack(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSpawnCheckpoints();
    
    UFUNCTION(BlueprintCallable)
    void DebugSpawnCheckpoints();
    
    UFUNCTION(BlueprintCallable)
    void DebugDestroyCheckpoints();
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SpawnCheckpoints() override PURE_VIRTUAL(SpawnCheckpoints,);
    
    UFUNCTION(BlueprintCallable)
    void ResetCheckpoints() override PURE_VIRTUAL(ResetCheckpoints,);
    
protected:
    UFUNCTION()
    void OnCheckpointCrossed(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override PURE_VIRTUAL(OnCheckpointCrossed,);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsTrackFullySetup() const override PURE_VIRTUAL(IsTrackFullySetup, return false;);
    
    UFUNCTION(BlueprintCallable)
    USplineComponent* GetTrackSpline() const override PURE_VIRTUAL(GetTrackSpline, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    TArray<FVector> GetCheckpointLocations() const override PURE_VIRTUAL(GetCheckpointLocations, return TArray<FVector>(););
    
    UFUNCTION(BlueprintCallable)
    int32 GetCheckpointIndex(const AActor* CheckPoint) const override PURE_VIRTUAL(GetCheckpointIndex, return 0;);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetCheckpoint(int32 Index) const override PURE_VIRTUAL(GetCheckpoint, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetAllCheckpoints() const override PURE_VIRTUAL(GetAllCheckpoints, return TArray<AActor*>(););
    
    UFUNCTION(BlueprintCallable)
    void GenerateTrack() override PURE_VIRTUAL(GenerateTrack,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ClearTrackSpline() override PURE_VIRTUAL(ClearTrackSpline,);
    
};

