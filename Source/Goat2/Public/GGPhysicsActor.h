#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GGDestructibleInfo.h"
#include "GGDestructibleInterface.h"
#include "GGOnPActorShatteredDelegate.h"
#include "GGPhysicsActor_Base.h"
#include "OnFinishedLoadingResourcesDelegate.h"
#include "RecentlyHitCharacter.h"
#include "GGPhysicsActor.generated.h"

class UMaterialInterface;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGPhysicsActor : public AGGPhysicsActor_Base, public IGGDestructibleInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> MeshSoftPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterialInterface>> PActorOverridenMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestructible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceNotDestructible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideDestructibleInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGDestructibleInfo DestructibleInfo;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGOnPActorShattered OnPActorShattered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinishedLoadingResources OnFinishedLoadingResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayedOptimizationFallbackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle DelayedOptimizeTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChangesReplicateMovementInRuntime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentStaticMesh, meta=(AllowPrivateAccess=true))
    UStaticMesh* CurrentStaticMesh;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTimeBetweenCollisions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GoatHitGracePeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NPCHitGracePeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRecentlyHitCharacter> RecentlyHitCharacters;
    
public:
    AGGPhysicsActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StaticMeshUpdated();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void ShatterActor(FVector Impulse);
    
    UFUNCTION(BlueprintCallable)
    void SetNewMesh(UStaticMesh* NewStaticMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetIsOptimizedDelayed();
    
private:
    UFUNCTION(BlueprintCallable)
    void ReloadImpactEffect();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentStaticMesh();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDestructibleDestroyed();
    
    UFUNCTION(BlueprintCallable)
    void AddImpulse(FVector Impulse, FName BoneName, bool bVelChange);
    

    // Fix for true pure virtual functions not being implemented
};

