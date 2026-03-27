#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GGRiftTransitionEffect.generated.h"

class AGGPlayerController;
class UGGRiftDataAsset;
class UGGRiftUserComponent;

UCLASS(Blueprintable)
class GOATMULTIVERSE_API AGGRiftTransitionEffect : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumTimeInTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumTimeInTransitionAfterLoaded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPlayerController* OwnerPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGRiftUserComponent* OwnerRiftUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGRiftDataAsset* RiftAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTeleportingInto;
    
public:
    AGGRiftTransitionEffect(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TeleportPlayer();
    
    UFUNCTION(BlueprintCallable)
    void ResetCameraVolumeChanges();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRiftTravelReady() const;
    
    UFUNCTION(BlueprintCallable)
    void EndTransitionEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StartTransition(AGGPlayerController* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_AbortTransition();
    
};

