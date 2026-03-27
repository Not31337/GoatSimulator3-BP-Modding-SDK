#pragma once
#include "CoreMinimal.h"
#include "AreaAssetOnSlot.h"
#include "GGTeleportAreaSubsystem.h"
#include "EMegaRiftState.h"
#include "EMegaRifts.h"
#include "OnMegaRiftInitialStateSetDelegate.h"
#include "OnMegaRiftStateChangedDelegate.h"
#include "GGMultiverseRiftManager.generated.h"

class AGGCastleStretchGoal;
class UGGRiftDataAsset;

UCLASS(Blueprintable)
class GOATMULTIVERSE_API UGGMultiverseRiftManager : public UGGTeleportAreaSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAreaAssetOnSlot CurrentlyActiveMegaRift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAreaAssetOnSlot IntroRift;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMegaRiftStateChanged OnMegaRiftStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMegaRiftInitialStateSet OnMegaRiftInitialStateSet;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AGGCastleStretchGoal*, EMegaRiftState> CachedStretchGoals;
    
public:
    UGGMultiverseRiftManager();

    UFUNCTION(BlueprintCallable)
    void StartMultiview(int32 MultiviewID);
    
    UFUNCTION(BlueprintCallable)
    void RemoveMultiview(int32 MultiviewID);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool IsIntroActive();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void IntroWasCompleted();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool HasIntroBeenCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMegaRiftState GetMegaRiftState(EMegaRifts MegaRifts);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMegaRiftProgression(EMegaRifts MegaRifts);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    int32 GetCurrentMegaRiftSlot() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    UGGRiftDataAsset* GetCurrentMegaRift() const;
    
};

