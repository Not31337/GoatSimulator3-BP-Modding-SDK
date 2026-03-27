#pragma once
#include "CoreMinimal.h"
#include "Engine/TargetPoint.h"
#include "GGToxicWastePortal_Target.generated.h"

class APawn;
class UGGDynamicAssetHoldingComponent;

UCLASS(Blueprintable)
class GOATMULTIVERSE_API AGGToxicWastePortal_Target : public ATargetPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGDynamicAssetHoldingComponent* AssetHolding;
    
    AGGToxicWastePortal_Target(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnAssetsLoaded(UGGDynamicAssetHoldingComponent* AssetHoldingComponent);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastActorTeleported(APawn* AsPawn) const;
    
};

