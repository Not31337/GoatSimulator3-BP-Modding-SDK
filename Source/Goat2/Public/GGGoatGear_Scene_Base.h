#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AltGoatOverride.h"
#include "CanEquipGear.h"
#include "ChildMeshDefaultMaterials.h"
#include "ChildMeshElement.h"
#include "EGearSlot.h"
#include "EGoatSockets.h"
#include "GGGoatGearInterface.h"
#include "GoatGearData.h"
#include "MatElement.h"
#include "Templates/SubclassOf.h"
#include "GGGoatGear_Scene_Base.generated.h"

class AGGGoat;
class UGGAlternativeGoatDataAsset;
class UGGGearAbility;
class UGGGoatGearInfoDataAsset;
class UMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, Config=GearSettings, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGGoatGear_Scene_Base : public USceneComponent, public IGGGoatGearInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AssetID;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UGGGoatGearInfoDataAsset> GearInfoDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    EGearSlot GearSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    EGoatSockets GoatSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool OverrideSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FName OverrideSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bCanChangeMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FVector OffsetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FRotator OffsetRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FVector GearScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FAltGoatOverride> AltGoatOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FVector GoatMeshLocationModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    int32 GoatMeshLocModifierPrio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FChildMeshElement> ChildMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> CanEquipThis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FCanEquipGear> CanEquipThisWithBackup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FCanEquipGear> CannotEquipThisWithBackup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GearAbilityGameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGGearAbility> GearAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowTutorialForGearAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasPassiveEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowTutorialForPassiveEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSentFirstPostNetReceive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMeshComponent*> ChildMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGGoat* Goat;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChildMeshDefaultMaterials> DefaultChildMeshMats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> PreloadedGameplayCueClasses;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bPassiveEffectActive, meta=(AllowPrivateAccess=true))
    bool bPassiveEffectActive;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEditOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEditChildMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEditTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEditEquipRestrictions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEditEnumSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEditGearSlot;
    
public:
    UGGGoatGear_Scene_Base(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldOverrideSocket(FName& SocketName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetPassiveEffectActive(bool bNewActive);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetGearHidden(bool bNewHidden);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostNetReceive_BP(bool bFirstCall);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_bPassiveEffectActive();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsPassiveEffectActive();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsASkinnedMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasPassiveEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasGearAbilityOrEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GoatMaterialUpdated(const TArray<FMatElement>& NewMaterials);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GoatCustomStencilUpdated(const bool bInUseCustomStencil, int32 CustomStencilIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPassiveEffectActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EGoatSockets GetGoatSocket();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AGGGoat* GetGoat();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EGearSlot GetGearSlot();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGoatGearData GetGearData();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<UGGGearAbility> GetGearAbility();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetAssetID();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTagContainer GetAbilityGameplayTags();
    
private:
    UFUNCTION(BlueprintCallable)
    void GameplayCuesLoaded();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanGoatEquipThis(UGGAlternativeGoatDataAsset* AltGoatAsset);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPPassiveEffectToggled(bool bNewActive);
    

    // Fix for true pure virtual functions not being implemented
};

