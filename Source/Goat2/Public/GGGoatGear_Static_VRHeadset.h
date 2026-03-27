#pragma once
#include "CoreMinimal.h"
#include "Engine/Scene.h"
#include "GameplayTagContainer.h"
#include "GGGoatGear_Static_Base.h"
#include "VRHeadsetCameraPlacementInfo.h"
#include "GGGoatGear_Static_VRHeadset.generated.h"

class AGGGoat;
class UCameraComponent;
class USceneComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGGoatGear_Static_VRHeadset : public UGGGoatGear_Static_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostProcessSettings HmdPostProcessingSettings;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* FPSCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FVRHeadsetCameraPlacementInfo> CameraPlacementInfoMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToVR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VRInstinctTag;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* MainCamera;
    
public:
    UGGGoatGear_Static_VRHeadset(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TriggerVRInstinct();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGearUpdated(AGGGoat* DaGoat, const TArray<USceneComponent*>& CurrentGoatGear);
    
};

