#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EGearSlot.h"
#include "GearEquipElementData.h"
#include "GearParticleSystem.h"
#include "MatElement.h"
#include "OnCommittedPreviewGearDelegate.h"
#include "OnPreviewGearUpdatedDelegate.h"
#include "PreviewGearData.h"
#include "GGGoatGearPreviewManager.generated.h"

class AGGGoat;
class UGGAlternativeGoatDataAsset;
class UGGGoatGearInfoDataAsset;
class UGGGoatGearManager;
class ULocalPlayer;
class UMeshComponent;
class UParticleSystem;
class USceneComponent;
class UStaticMesh;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGGoatGearPreviewManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid CurrentEquippedPreset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGAlternativeGoatDataAsset* DefaultAltGoat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PreviewEffectMaterialParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EquipEffectMaterialParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreviewEffectMaterialSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EquipEffectMaterialSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EGearSlot> ExcludedPreviewSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCancelPendingGearWhenRevertingSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGearParticleSystem ParticleSystemPreviewGoatGearSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGearParticleSystem ParticleSystemEquipGoatGearSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGearParticleSystem ParticleSystemBuyGoatGearSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticleSystemAltGoatSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticleSystemAltGoatBuy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParticleSystemAltGoatModuleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EquippedGearParticleSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UStaticMesh>, float> StaticGearParticleSizeOverrides;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPreviewGearUpdated OnPreviewGearUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCommittedPreviewGear OnCommittedPreviewGear;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGGoat* OwnerGoat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULocalPlayer* OwnerLocalPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGGoatGearManager* GearManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EGearSlot, USceneComponent*> CurrentPreviewGear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EGearSlot, FGearEquipElementData> CommittedPreviewGear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPreviewGearData> CurrentlyLoadingPreviewGear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMatElement> DefaultMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMatElement> CurrentEquippedMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGAlternativeGoatDataAsset* CurrentEquippedAltGoat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMeshComponent*> PreviewEffectsOnMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMeshComponent*> EquipEffectsOnMeshes;
    
public:
    UGGGoatGearPreviewManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SpawnGearParticle(FGearParticleSystem ParticleStruct, USceneComponent* InGear);
    
public:
    UFUNCTION(BlueprintCallable)
    void PreviewCommittedGear();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUnequippedPreviewGear(USceneComponent* Gear);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEquippedPreviewGear(USceneComponent* Gear);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAltGoatChanged(AGGGoat* Goat, UGGAlternativeGoatDataAsset* NewAltGoat);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGearCommitted(UGGGoatGearInfoDataAsset* DataAsset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAbilityEnabledForCommittedGearForSlot(EGearSlot Slot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<USceneComponent*> GetCurrentPreviewGear() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGGoatGearInfoDataAsset* GetCommittedGearForSlot(EGearSlot Slot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetCommittedGearAsGearIDs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGearEquipElementData> GetCommittedGearAsEquipData() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearPreview(bool bClearCommited);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPreviewSlot(EGearSlot Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPreviewGear(UGGGoatGearInfoDataAsset* DataAsset) const;
    
};

