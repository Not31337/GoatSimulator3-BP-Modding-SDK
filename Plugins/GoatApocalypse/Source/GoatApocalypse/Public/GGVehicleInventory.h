#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/StaticMeshComponent.h"
#include "GameplayTagContainer.h"
#include "GGCatchOptions.h"
#include "GGHeadbuttableObjectInterface.h"
#include "GGReleaseOptions.h"
#include "GGMeshCompWithMaterial.h"
#include "Templates/SubclassOf.h"
#include "GGVehicleInventory.generated.h"

class AActor;
class AGGGoat;
class UArrowComponent;
class UBoxComponent;
class UMaterialInterface;
class UParticleSystem;
class UPrimitiveComponent;
class USoundBase;
class UStaticMesh;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATAPOCALYPSE_API UGGVehicleInventory : public UStaticMeshComponent, public IGGHeadbuttableObjectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* MeshFullInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeshMaxRandomRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionalMeshOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InventorySize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* HighlightMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToScaleCatchedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToScaleReleasedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRagdollNPCsOnRelease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ReleaseDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReleaseImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> ActorFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SoundItemAddedToInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SoundItemRemovedFromInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticlesItemAddedToInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticlesItemRemovedFromInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InstinctTagAddToInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Items, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Items;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBoxComponent* OverlapVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UArrowComponent* ReleaseDirectionArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> PotentialItemsInRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ActorBeeingAddedToInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DefaultMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGGMeshCompWithMaterial> MeshComponents;
    
public:
    UGGVehicleInventory(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRemoveActorFromInventory(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerAddActorToInventory(AActor* Actor);
    
public:
    UFUNCTION(BlueprintCallable)
    AActor* RemoveLastActorFromInventory();
    
    UFUNCTION(BlueprintCallable)
    void RemoveActorFromInventory(AActor* Actor);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnStoredActorDestroyed(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Items();
    
    UFUNCTION(BlueprintCallable)
    void OnNearbyActorLicked(AActor* LickedActor, AGGGoat* LickingGoat);
    
    UFUNCTION(BlueprintCallable)
    void OnNearbyActorDropped(AActor* LickedActor, AGGGoat* LickingGoat);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractionRangeEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractionRangeBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastRemoveActorFromInventory(AActor* Actor, const FVector& ReleaseLocation, const FGGReleaseOptions& Options, FVector ParticleLocationLS);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastReInsertActors(const TArray<AActor*>& Actors);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastAddActorToInventory(AActor* Actor, const FGGCatchOptions& Options);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanActorBeStoredInInventory(const AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable)
    bool AddActorToInventory(AActor* Actor);
    

    // Fix for true pure virtual functions not being implemented
};

