#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EGGSplineMeshSnapMode.h"
#include "GGSplineMeshMergeParameter.h"
#include "GGSplineMeshParams.h"
#include "GGSplineTool.generated.h"

class USplineComponent;
class USplineMeshComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGSplineTool : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGSplineMeshParams SplineMeshParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutomaticallyGenerateMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSnapToGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> TraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTraceOnlyAgainstLandscape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGGSplineMeshSnapMode SnapMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGSplineMeshMergeParameter MeshMergingParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* Spline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USplineMeshComponent*> SplineMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> MergedSplineMeshes;
    
    AGGSplineTool(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SnapSplinePointsToGround();
    
    UFUNCTION(BlueprintCallable)
    void ReGenerateMeshes();
    
    UFUNCTION(BlueprintCallable)
    void ForceReGenerateMeshes();
    
    UFUNCTION(BlueprintCallable)
    void DestroySplineMeshes();
    
    UFUNCTION(BlueprintCallable)
    void AlignMeshesWithSpline();
    
};

