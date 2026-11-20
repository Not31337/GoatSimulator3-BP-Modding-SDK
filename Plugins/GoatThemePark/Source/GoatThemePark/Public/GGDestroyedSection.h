#pragma once
#include "CoreMinimal.h"
#include "GGDestroyedSection.generated.h"

class AGGRideTrackDestroyedSection;
class UBoxComponent;
class UGGGrindableSplineComponent;
class USceneComponent;
class USplineMeshComponent;

USTRUCT(BlueprintType)
struct GOATTHEMEPARK_API FGGDestroyedSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineMeshComponent* StartMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineMeshComponent* EndMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* OverlapVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SplineIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GapStartDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GapEndDistance;
    
    UPROPERTY(EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGGrindableSplineComponent* GrindSplines[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGRideTrackDestroyedSection* ActorInstance;
    
    FGGDestroyedSection();
};

