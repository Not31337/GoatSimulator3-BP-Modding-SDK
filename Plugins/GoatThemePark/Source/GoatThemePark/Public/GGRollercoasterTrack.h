#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SplineMeshComponent.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "EGGSplineMeshPlacement.h"
#include "GGGrindableInterface.h"
#include "GGInteractInterface.h"
#include "GGSplineMeshMergeParameter.h"
#include "GGDestroyedSection.h"
#include "GGSpecialTrackSectionParams.h"
#include "Templates/SubclassOf.h"
#include "GGRollercoasterTrack.generated.h"

class AGGRideTrackDestroyedSection;
class UGGGrindableSplineComponent;
class UGGGrindableSplineDataAsset;
class UGGRideTrackNpcAnimInstance;
class UPrimitiveComponent;
class USceneComponent;
class USplineComponent;
class USplineMeshComponent;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GOATTHEMEPARK_API AGGRollercoasterTrack : public AActor, public IGGGrindableInterface, public IGGInteractInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGGSplineMeshPlacement MeshPlacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESplineMeshAxis::Type> MeshForwardAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TagRegularTrackPiece;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollisionProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGSplineMeshMergeParameter SplineMeshMergeParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyCreateSpecialTrackSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToShowSplineDebugInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGSpecialTrackSectionParams ChainLiftSectionParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChainLiftAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGSpecialTrackSectionParams HandrailSectionParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGSpecialTrackSectionParams DestroyedSectionParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* DestroyedSectionEndMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGRideTrackDestroyedSection> DestroyedSectionActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DestroyedSectionsNpcAreaTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestroyedSectionOverlapVolumeWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestroyedSectionOverlapVolumeAdditionalLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGRideTrackNpcAnimInstance> NpcAnimInstanceClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> GrindsplineOffsetSockets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGGrindableSplineDataAsset* GrindableSplineDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* Spline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TrackSplinesRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ChainLiftsRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* HandrailsRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DestroyedSectionsRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USplineMeshComponent*> TrackSplineMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USplineMeshComponent*> ChainLiftMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USplineMeshComponent*> HandrailsMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGGDestroyedSection> DestroyedSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGGGrindableSplineComponent*> GrindSplines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> MergedSplineMeshes;
    
    AGGRollercoasterTrack(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RepairAllTrackSections();
    
    UFUNCTION(BlueprintCallable)
    void OnDestroyedSectionBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnAllDestroyedSectionRepaired();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStaticMesh* GetDestroyedSectionStartMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGGRideTrackDestroyedSection*> GetDestroyedSectionsActors() const;
    
    UFUNCTION(BlueprintCallable)
    void DestroyAllSplineMeshes();
    

    // Fix for true pure virtual functions not being implemented
};

