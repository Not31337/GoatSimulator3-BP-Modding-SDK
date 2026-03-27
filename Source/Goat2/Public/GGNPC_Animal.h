#pragma once
#include "CoreMinimal.h"
#include "AnimalMaterialCollection.h"
#include "GGNPC.h"
#include "MatElement.h"
#include "WeightedElement_AnimMontage.h"
#include "GGNPC_Animal.generated.h"

class AGGAIController_Animal;
class UBehaviorTree;
class UMaterialInterface;

UCLASS(Blueprintable)
class GOAT2_API AGGNPC_Animal : public AGGNPC {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* DefaultLogicTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimalMaterialCollection> DefaultMaterialVariations;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimalMaterialCollection SelectedSoftMaterialCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DefaultMaterials, meta=(AllowPrivateAccess=true))
    TArray<FMatElement> DefaultMaterials;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedElement_AnimMontage> IdleAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WalkSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunSpeed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGAIController_Animal* AnimalController;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsGuardFromGear;
    
    AGGNPC_Animal(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StatusEffectMaterialSet(UMaterialInterface* Material);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SoftMaterialsLoaded();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDefaultMaterials(TArray<FMatElement> NewDefault);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SelectNewBaseMaterialWithOverride(const TArray<FAnimalMaterialCollection>& OverrideCollections);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SelectNewBaseMaterial();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayerColorMaterialSet(UMaterialInterface* Material);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_DefaultMaterials();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NPCEffectMaterialSet(UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MeshMaterialSet(UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGAIController_Animal* GetAnimalController();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DefaultMaterialsSet(const TArray<FMatElement>& Materials);
    
};

