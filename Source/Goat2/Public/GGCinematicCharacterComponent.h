#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GGCinematicCharacterComponent.generated.h"

class UGGGoatGearInfoDataAsset;
class UGGGoatGearManager;
class UParticleSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGCinematicCharacterComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoadGearInBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEquipGearFromLocalInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetEquippedGearWhenInventoryIsReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticleSystemInventoryReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InventoryResetUnEquipDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGGGoatGearInfoDataAsset*> CustomGearToLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasFinishedLoading;
    
public:
    UGGCinematicCharacterComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnInventoryReset();
    
    UFUNCTION(BlueprintCallable)
    void OnGearEquipped(UGGGoatGearManager* GearManager);
    
    UFUNCTION(BlueprintCallable)
    void OnDLCsUpdated();
    
    UFUNCTION(BlueprintCallable)
    void EquipGear();
    
};

