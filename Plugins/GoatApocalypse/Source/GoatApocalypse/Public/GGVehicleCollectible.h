#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GGQuestBase.h"
#include "RadarCoordinateData.h"
#include "Templates/SubclassOf.h"
#include "GGVehicleCollectible.generated.h"

class AActor;
class UCameraShakeBase;
class UGGDynamicAssetHoldingComponent;

UCLASS(Blueprintable)
class GOATAPOCALYPSE_API AGGVehicleCollectible : public AGGQuestBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGDynamicAssetHoldingComponent* DynamicAssetHolding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyAllowPickupWithMotorcycle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxCullDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActiveByDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShakeBase> PickupCameraShakeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PickupForceFeedbackEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadarCoordinateData RadarData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsActive, meta=(AllowPrivateAccess=true))
    bool bIsPickupActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasBeenPickedUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLocalPlayerInVehicle;
    
    AGGVehicleCollectible(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetupCollectible();
    
    UFUNCTION(BlueprintCallable)
    void SetPickupActive(bool bInActive);
    
    UFUNCTION(BlueprintCallable)
    void PickUpCollectible(AActor* InInstigator);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPickedUp_BP(AActor* InInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIsActive_BP(bool bNewActive);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDynamicLoadingFinished(UGGDynamicAssetHoldingComponent* InDynAssetComp);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBeenPickedUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DeactivatePickup_BP();
    
};

