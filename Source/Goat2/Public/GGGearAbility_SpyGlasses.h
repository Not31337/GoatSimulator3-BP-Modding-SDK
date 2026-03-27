#pragma once
#include "CoreMinimal.h"
#include "Engine/Scene.h"
#include "GGGearAbility.h"
#include "GGGearAbility_SpyGlasses.generated.h"

class AGGPlayerController;
class UAudioComponent;
class USoundBase;

UCLASS(Blueprintable)
class GOAT2_API UGGGearAbility_SpyGlasses : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostProcessSettings ThermalPostProcessingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* ActivationSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* DeactivationSound;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* SoundComp;
    
public:
    UGGGearAbility_SpyGlasses();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnDeactivate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnActivate();
    
};

