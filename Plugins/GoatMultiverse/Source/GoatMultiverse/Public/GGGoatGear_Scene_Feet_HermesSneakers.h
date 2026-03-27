#pragma once
#include "CoreMinimal.h"
#include "GGGoatGear_Scene_Feet.h"
#include "GGGoatGear_Scene_Feet_HermesSneakers.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATMULTIVERSE_API UGGGoatGear_Scene_Feet_HermesSneakers : public UGGGoatGear_Scene_Feet {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SneakersActive, meta=(AllowPrivateAccess=true))
    bool bSneakersActive;
    
public:
    UGGGoatGear_Scene_Feet_HermesSneakers(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SneakersActive(bool bWasActive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActiveStateChanged(bool bActiveState);
    
};

