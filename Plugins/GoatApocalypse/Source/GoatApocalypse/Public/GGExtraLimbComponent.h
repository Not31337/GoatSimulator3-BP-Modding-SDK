#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "GGExtraLimbComponent.generated.h"

class AActor;
class AGGGoat;
class AGGNPC;
class UGGAlternativeGoatDataAsset;
class UGGExtraLimbComponent;
class UGGExtraLimbMeshComponent;
class UParticleSystem;
class USceneComponent;
class USkeletalMeshComponent;
class USoundBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATAPOCALYPSE_API UGGExtraLimbComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<USkeletalMeshComponent>> LimbMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalExtraLimbMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtraLimbLifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> GoatSockets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> NPCSockets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* LimbSpawnParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* LimbSpawnSound;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    TArray<UGGExtraLimbMeshComponent*> Limbs;
    
public:
    UGGExtraLimbComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveExtraLimb(UGGExtraLimbMeshComponent* LimbMesh);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveAllExtraLimbs(bool bDestroyComponent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnNPCPooledOrMoved(AGGNPC* NPC, bool bWasPooled);
    
    UFUNCTION(BlueprintCallable)
    void OnAltGoatChanged(AGGGoat* Goat, UGGAlternativeGoatDataAsset* NewAltGoat);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayLimbSpawnEffects(USceneComponent* AttachTo, FVector Location) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLimbCount() const;
    
    UFUNCTION(BlueprintCallable)
    static UGGExtraLimbComponent* GetExtraLimbComponent(AActor* Actor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddExtraLimbsToOwner();
    
};

