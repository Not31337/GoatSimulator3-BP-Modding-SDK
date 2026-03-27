#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EStateChangeSource.h"
#include "EStretchGoalStates.h"
#include "GGGatherGoatActor.h"
#include "GGRadarInterface.h"
#include "RadarCoordinateData.h"
#include "GGCampUpgradePoint.generated.h"

class AGGCastleStretchGoal_Apocalypse;
class UAudioComponent;
class UBoxComponent;
class UParticleSystemComponent;
class USceneComponent;
class UStaticMeshComponent;
class UTexture2D;

UCLASS(Blueprintable)
class GOATAPOCALYPSE_API AGGCampUpgradePoint : public AGGGatherGoatActor, public IGGRadarInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* OverlapBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ActiveParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* ActiveSound;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AGGCastleStretchGoal_Apocalypse> StretchGoal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOverlapBoxForOverlaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideMeshWhenPurchased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableCollisionWhenPurchased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* DefaultRadarIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* RadarIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadarCoordinateData DefaultRadarData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadarCoordinateData RadarDataWhenUnlocked;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle DelayedDisableTH;
    
public:
    AGGCampUpgradePoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldEffectsBeActive() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTokenAmountChanged(int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void OnGoalChangedState(EStretchGoalStates NewState, EStateChangeSource ChangeSource);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CampUpgradeStateUpdated(EStretchGoalStates NewState);
    

    // Fix for true pure virtual functions not being implemented
};

