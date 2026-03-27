#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "AreaAssetOnSlot.h"
#include "AreaEnterParameters.h"
#include "AreaSlotData.h"
#include "ELoadingScreenStage.h"
#include "GGWorldSubsystem.h"
#include "OnPlayersLeavingFullParticipationAreaDelegate.h"
#include "OnTeleportAreaClosingDelegate.h"
#include "OnTeleportAreaOpeningDelegate.h"
#include "PendingAreaEnter.h"
#include "PendingAreaExit.h"
#include "GGTeleportAreaSubsystem.generated.h"

class AGGGoat;
class AGGPlayerController;
class AGGTeleportAreaEntrance;
class AGGTeleportAreaLogic;
class APlayerStart;
class UGGTeleportAreaDataAsset;
class ULevelStreaming;

UCLASS(Abstract, Blueprintable)
class GOAT2_API UGGTeleportAreaSubsystem : public UGGWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FAreaSlotData> AreaSlots;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayersLeavingFullParticipationArea OnPlayersLeavingFullParticipationArea;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPendingAreaEnter> PendingAreaEnters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPendingAreaExit> PendingAreaExits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UGGTeleportAreaDataAsset*, AGGTeleportAreaEntrance*> AreaEntrances;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTeleportAreaOpening OnTeleportAreaOpening;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTeleportAreaClosing OnTeleportAreaClosing;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle DelayedLightingStreamTH;
    
public:
    UGGTeleportAreaSubsystem();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ToggleLightingLevels(UGGTeleportAreaDataAsset* AreaAsset, bool bShowAreaLighting);
    
protected:
    UFUNCTION(BlueprintCallable)
    void TeleportStateUpdate(AGGPlayerController* Controller, AGGGoat* Goat, ELoadingScreenStage CurrentStage);
    
    UFUNCTION(BlueprintCallable)
    void OnLevelUnloaded(ULevelStreaming* LevelStream);
    
    UFUNCTION(BlueprintCallable)
    void OnLevelShown(ULevelStreaming* LevelStream);
    
    UFUNCTION(BlueprintCallable)
    void OnLevelLoaded(ULevelStreaming* LevelStream);
    
    UFUNCTION(BlueprintCallable)
    void OnLevelHidden(ULevelStreaming* LevelStream);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool IsSlotOccupied(int32 Slot) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool IsPlayerExitingATPArea(const AGGPlayerController* Player) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool IsPlayerEnteringATPArea(const AGGPlayerController* Player) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool IsLocationInsideAnyArea(FVector Location);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool IsAreaUnloading(int32 Slot) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool IsAreaLoading(int32 Slot) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool IsAreaAssetBeingUsedOnSlot(const UGGTeleportAreaDataAsset* AreaAsset, int32 Slot, bool bAlsoCheckForReserved);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool IsAreaAssetBeingUsed(const UGGTeleportAreaDataAsset* AreaAsset, bool bAlsoCheckForReserved);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool IsAllPlayersReadyForLightingToggle() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool HasAreaThatRequiresFullParticipation();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool HasAreaFinishedLoading(int32 Slot) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetSlotOccupiedByAreaAsset(const UGGTeleportAreaDataAsset* AreaAsset);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    TArray<APlayerStart*> GetRespawnPlayerStarts(int32 Slot);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    FAreaAssetOnSlot GetAreaThatRequiresFullParticipation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetAreaSlotLocation(int32 Slot) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    int32 GetAreaSlotForLocation(FVector Location);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    TArray<APlayerStart*> FindPlayerStartsInArea(int32 Slot);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    AGGTeleportAreaEntrance* FindMainEntranceInArea(int32 Slot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGTeleportAreaEntrance* FindEntranceForArea(UGGTeleportAreaDataAsset* AreaAsset) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    AGGTeleportAreaLogic* FindAreaLogic(int32 Slot);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool ExitTeleportAreaTogether(TArray<AGGPlayerController*> Players);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool ExitTeleportArea(AGGPlayerController* Player);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool EnterTeleportAreaTogether(UGGTeleportAreaDataAsset* AreaAsset, FAreaEnterParameters EnterParameters);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool EnterTeleportArea(AGGPlayerController* Player, UGGTeleportAreaDataAsset* AreaAsset, FAreaEnterParameters EnterParameters);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void CloseTeleportArea(int32 Slot);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool CancelAreaTravel(AGGPlayerController* Player);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AreaFinishedUnloading(int32 Slot);
    
    UFUNCTION(BlueprintCallable)
    void AreaFinishedLoading(int32 Slot);
    
};

