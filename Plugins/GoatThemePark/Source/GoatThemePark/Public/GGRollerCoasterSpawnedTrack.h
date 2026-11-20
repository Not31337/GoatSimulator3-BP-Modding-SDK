#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GGGrindableSpline.h"
#include "GGSplineMeshParams.h"
#include "GGRollerCoasterSpawnedTrack.generated.h"

class UGGGrindableSplineComponent;
class UGGGrindableSplineDataAsset;
class USplineComponent;
class USplineMeshComponent;

UCLASS(Blueprintable, NotPlaceable)
class GOATTHEMEPARK_API AGGRollerCoasterSpawnedTrack : public AGGGrindableSpline {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGGSplineMeshParams TrackMeshParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FVector> GrindsplineOffsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UGGGrindableSplineDataAsset* GrindableData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float TangentMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SplineState, meta=(AllowPrivateAccess=true))
    TArray<FVector> ReplicatedSplinePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SplineState, meta=(AllowPrivateAccess=true))
    bool bReplicatedClosed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bBuildInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USplineMeshComponent*> ActualTrackMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USplineMeshComponent*> TrackMeshesPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TrackMeshesPoolSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGGGrindableSplineComponent*> GrindSplines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BuiltPointCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBuiltClosed;
    
public:
    AGGRollerCoasterSpawnedTrack(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SplineState();
    
};

