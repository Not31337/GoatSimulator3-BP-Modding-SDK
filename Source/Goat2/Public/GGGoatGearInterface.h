#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "ChildMeshElement.h"
#include "EGearSlot.h"
#include "EGoatSockets.h"
#include "GoatGearData.h"
#include "MatElement.h"
#include "Templates/SubclassOf.h"
#include "GGGoatGearInterface.generated.h"

class AActor;
class AGGGoat;
class UGGAlternativeGoatDataAsset;
class UGGGearAbility;
class UMeshComponent;

UINTERFACE(Blueprintable)
class GOAT2_API UGGGoatGearInterface : public UInterface {
    GENERATED_BODY()
};

class GOAT2_API IGGGoatGearInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldOverrideSocket(FName& SocketName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetPassiveEffectActive(bool bNewActive);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetGearOwnerNoSee(const bool bGearOwnerNoSee);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetGearHidden(bool bNewHidden);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RecreateChildMeshes(AActor* PreviewGoat, UGGAlternativeGoatDataAsset* AlternativeGoat);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsPreviewGear() const;
    
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
    FTransform GetDefaultGearAttachTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FChildMeshElement> GetChildMeshes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UMeshComponent*> GetChildMeshComponents();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName GetAttachSocket();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetAssetID();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTagContainer GetAbilityGameplayTags();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GearEquipped();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DestroyAllChildMeshes();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanGoatEquipThis(UGGAlternativeGoatDataAsset* AltGoatAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AttachToSocket(FName Socket);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AttachToPreviewSocket(AActor* PreviewGoat, FName Socket, UGGAlternativeGoatDataAsset* AlternativeGoat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AbilityStopped(AGGGoat* Goat, UGGGearAbility* GearAbility, bool WasCancelled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AbilityActivated(AGGGoat* Goat, UGGGearAbility* GearAbility);
    
};

