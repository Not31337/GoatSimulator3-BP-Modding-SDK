#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Components/SplineMeshComponent.h"
#include "Engine/EngineTypes.h"
#include "Engine/NetSerialization.h"
#include "DestroyedFenceLocations.h"
#include "GGActorName.h"
#include "GGDestructibleInfo.h"
#include "GGDestructibleInterface.h"
#include "GGGrindableInterface.h"
#include "GGHeadbuttableObjectInterface.h"
#include "GGNamedActorInfo.h"
#include "GGNamedActorInterface.h"
#include "GGAutoFence.generated.h"

class AGGGoat;
class AGGPhysicsActor_Base;
class UDataTable;
class UGGAutoFenceAssetUserData;
class UGGGrindableSplineComponent;
class UGGGrindableSplineDataAsset;
class UGGStaticMeshComponent;
class UHierarchicalInstancedStaticMeshComponent;
class UPrimitiveComponent;
class USplineComponent;
class UStaticMesh;

UCLASS(Blueprintable)
class GOAT2_API AGGAutoFence : public AActor, public IGGDestructibleInterface, public IGGHeadbuttableObjectInterface, public IGGNamedActorInterface, public IGGGrindableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSnapToGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceLockedTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> LockedInstanceTransforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform LockedStartMeshTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform LockedEndMeshTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStaticMesh*> FenceMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* FenceSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StartMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGStaticMeshComponent* StartMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartMeshOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* EndMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EndMeshOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGStaticMeshComponent* EndMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MeshScale;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundCheckDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FenceComponentSpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAxis::Type> FenceMeshForwardAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAxis::Type> FenceMeshUpAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FenceZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlignYawAndRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InstanceCullStartDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InstanceCullEndFadeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReplicationDestroyDistCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DestroyedIndexesCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHierarchicalInstancedStaticMeshComponent*> InstancedMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddGrindableSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* GrindableSplineCollisionMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESplineMeshAxis::Type> GrindableSplineMeshForwardAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GrindableSplineOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrindableSplineScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideGrindSplineMeshAtRuntime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGGrindableSplineComponent* GrindableSplineComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DestroyedLocations, meta=(AllowPrivateAccess=true))
    FDestroyedFenceLocations DestroyedInstanceLocations;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestructible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceNotDestructible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideDestructibleInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGDestructibleInfo DestructibleInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGDestructibleInfo CurrentDestructibleInfo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HideSelf, meta=(AllowPrivateAccess=true))
    bool HideSelf;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentActorName, meta=(AllowPrivateAccess=true))
    FGGActorName CurrentActorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGNamedActorInfo DefaultActorNameInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* NameModifierTable;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideMeshNameInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGNamedActorInfo ActorNameInfo;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> ActorsGoatShouldIgnoreCollisionWith;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGGrindableSplineDataAsset* GrindableSplineDataAsset;
    
public:
    AGGAutoFence(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateSettingsWithAssetUserData(UGGAutoFenceAssetUserData* UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetupFence();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_HideSelf();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DestroyedLocations();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentActorName();
    
    UFUNCTION(BlueprintCallable)
    void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEdgeTurnedPhysicsActor(AActor* OwningActor, UGGStaticMeshComponent* GGMeshComponent, AGGPhysicsActor_Base* PhysActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDestructibleDestroyed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ObjectWasHeadbutted(AGGGoat* HeadbuttingGoat);
    
    UFUNCTION(BlueprintCallable)
    void FinishedLoadingDestructibleMeshes();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void DestroyFencePart(FVector_NetQuantize Impulse, FVector_NetQuantize InstanceLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeHeadbutted(AGGGoat* HeadbuttingGoat);
    

    // Fix for true pure virtual functions not being implemented
};

