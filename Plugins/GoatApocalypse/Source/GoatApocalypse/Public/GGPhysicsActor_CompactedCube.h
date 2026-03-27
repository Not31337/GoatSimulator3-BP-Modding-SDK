#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GGPhysicsActor.h"
#include "EGGCubeMadeFrom.h"
#include "GGAttachPoints.h"
#include "GGAttachedMesh.h"
#include "GGBrokeAppartCubeGrid.h"
#include "GGFadeOutMesh.h"
#include "Templates/SubclassOf.h"
#include "GGPhysicsActor_CompactedCube.generated.h"

class AActor;
class AGGGoat;
class AGGPhysicsActor_CompactedCube;
class UAudioComponent;
class UGGAttachmentPoint;
class UGGEffectsSpawnHolder;
class UMaterialInterface;
class UObject;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class GOATAPOCALYPSE_API AGGPhysicsActor_CompactedCube : public AGGPhysicsActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* HighlightMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MaterialInvalidConnection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnapSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CubeNameFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGEffectsSpawnHolder* GridBrakesAppartEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGEffectsSpawnHolder* FadeOutHighlightMeshEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurationToFadeOutHighlightMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* MuffledSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MuffledSoundReplayDelayRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MadeFrom, meta=(AllowPrivateAccess=true))
    EGGCubeMadeFrom MadeFrom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AttachedMeshes, meta=(AllowPrivateAccess=true))
    TArray<FGGAttachedMesh> AttachedMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FIntVector, UStaticMeshComponent*> AttachedMeshes_Client;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGGAttachmentPoint*> InitialAttachmentPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGPhysicsActor_CompactedCube*> CubesOverlapsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGAttachmentPoint> AttachmentPointClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGAttachPoints ClosestAttachmentPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGAttachmentPoint* AttachedTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> HighlightMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGGFadeOutMesh> HighlightMeshesFadingOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BrokeFromCubeGrid, meta=(AllowPrivateAccess=true))
    FGGBrokeAppartCubeGrid BrokeFromCubeGrid;
    
    AGGPhysicsActor_CompactedCube(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static AGGPhysicsActor_CompactedCube* TurnActorIntoCube(AActor* InActor, FTransform SpawnTransform, TSubclassOf<AGGPhysicsActor_CompactedCube> CompactedCubeClass);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayMuffledSound();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_MadeFrom();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BrokeFromCubeGrid();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AttachedMeshes(const TArray<FGGAttachedMesh>& OldValue);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnLicked(AActor* LickedActor, AGGGoat* LickingGoat);
    
    UFUNCTION(BlueprintCallable)
    void OnHeadbutted(UObject* HeadbuttedObject, AGGGoat* HeadbuttingGoat);
    
    UFUNCTION(BlueprintCallable)
    void OnDropped(AActor* LickedActor, AGGGoat* LickingGoat);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastAttachToAttachmentPoint(const FGGAttachPoints& AttachPoints, const FTransform& AttachTransform);
    
};

