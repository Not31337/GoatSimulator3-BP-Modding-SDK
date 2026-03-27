#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/NetSerialization.h"
#include "EGGRaceTrackCheckpointAlignment.h"
#include "GGRaceTrack.h"
#include "Templates/SubclassOf.h"
#include "GGGoatKarts_ProceduralRaceTrack.generated.h"

class UBillboardComponent;
class UPrimitiveComponent;
class USplineComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGGoatKarts_ProceduralRaceTrack : public AActor, public IGGRaceTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* TrackSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Checkpoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* Root;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DesiredTrackLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfReTriesToGenerateTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoveTowardsOppositeMapQuarter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchRadiusForFirstCheckpoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfAttemptsToFindLocationForCheckpoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SearchDistanceBetweenCheckpoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckpointSearchAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxVerticalAngleBetweenCheckpoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxVerticalDistanceBetweenCheckpoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckpointSnapDistanceToRoads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RoadPercentageEstimate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RoadFollowCheckDistanceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RoadFollowCheckpointDistanceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> CheckpointClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> StartLineClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> FinishLineClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FirstCheckpointIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D BoxTraceSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGGRaceTrackCheckpointAlignment CheckpointAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> TraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> ClassesToIgnore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> BlockingClasses;
    
public:
    AGGGoatKarts_ProceduralRaceTrack(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ReplicateTrackSpline(bool bIsSprint, const TArray<FVector_NetQuantize>& Locations, const TArray<FVector_NetQuantize>& UpVectors);
    
public:
    UFUNCTION(BlueprintCallable)
    void GenerateTrack();
    

    // Fix for true pure virtual functions not being implemented
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
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ClearTrackSpline() override PURE_VIRTUAL(ClearTrackSpline,);
    
};

