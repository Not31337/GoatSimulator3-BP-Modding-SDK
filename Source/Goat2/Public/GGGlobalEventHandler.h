#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "ELoadingScreenType.h"
#include "EPlayerGamePhase.h"
#include "ERemovalReason.h"
#include "ETowerSynchronizationEvent.h"
#include "GoatEventDelegate.h"
#include "Notification.h"
#include "OnActorTookDamageDelegate.h"
#include "OnAltGoatChangedDelegate.h"
#include "OnBouncyActorBouncedDelegate.h"
#include "OnCharacterEnteringVehicleDelegate.h"
#include "OnCharacterExitedVehicleDelegate.h"
#include "OnCharacterJumpedDelegate.h"
#include "OnCompletedAchievementDelegate.h"
#include "OnDecorateThroneRoomDelegate.h"
#include "OnEnterExitKidneyStoneDelegate.h"
#include "OnFirstInstinctPackUnlockedDelegate.h"
#include "OnGameCurrentActiveGameChangedDelegate.h"
#include "OnGoatChangedMovementModeDelegate.h"
#include "OnGoatDroppedLickedActorDelegate.h"
#include "OnGoatEnteredThroneRoomDelegate.h"
#include "OnGoatExitedThroneRoomDelegate.h"
#include "OnGoatJumpedDelegate.h"
#include "OnGoatLandedDelegate.h"
#include "OnGoatRequestConstraintBreakDelegate.h"
#include "OnGoatTowerSynchronisedDelegate.h"
#include "OnHandlerGoatBaaDelegate.h"
#include "OnHandlerGoatHeadbuttedActorDelegate.h"
#include "OnHandlerGoatLickedActorDelegate.h"
#include "OnHandlerPlayerWorldAreaEnteredDelegate.h"
#include "OnHandlerPlayerWorldAreaExitedDelegate.h"
#include "OnInstinctTriggeredDelegate.h"
#include "OnInteractedDelegate.h"
#include "OnIntroSplashCompleteDelegate.h"
#include "OnInventoryInitializedDelegate.h"
#include "OnLoadingScreenRemovedDelegate.h"
#include "OnLocalGearEquipDelegate.h"
#include "OnLocalGearUnEquipDelegate.h"
#include "OnLocalGoatActionInputDelegate.h"
#include "OnMenuActionResolveDelegate.h"
#include "OnMotorcycleSetOwnerDelegate.h"
#include "OnNPCRagdolledFromDamageDelegate.h"
#include "OnNPCReactedDelegate.h"
#include "OnNPCSpawnedIntoWorldDelegate.h"
#include "OnNotificationClearedDelegate.h"
#include "OnNotificationShownDelegate.h"
#include "OnNotificationUpdatedDelegate.h"
#include "OnPlayerGamePhaseChangedDelegate.h"
#include "OnPlayerGamePlayerInfoChangedDelegate.h"
#include "OnPlayerInfoChangedDelegate.h"
#include "OnPlayingCinematicDelegate.h"
#include "OnQuestCompletedDelegate.h"
#include "OnQuestDataUpdateDelegate.h"
#include "OnQuestTierCompletedDelegate.h"
#include "OnReachedMaxRamSettingDelegate.h"
#include "OnReceiveKarmaDelegate.h"
#include "OnResetGPUSettingWarningDelegate.h"
#include "OnShowGPUSettingWarningDelegate.h"
#include "OnStretchGoalChangedStateDelegate.h"
#include "OnStretchGoalSequenceFinnishedDelegate.h"
#include "OnUpdateLastWorldCollectionLoadedDelegate.h"
#include "OnVehicleExplodedDelegate.h"
#include "GGGlobalEventHandler.generated.h"

class AActor;
class AGGCastleStretchGoal;
class AGGCharacter;
class AGGGameState;
class AGGGoat;
class AGGGoatTower;
class AGGNPC;
class AGGPlayerController;
class AGGPlayerGame_Base;
class AGGVehicle;
class UDamageType;
class UGGInstinctPackDataAsset;
class UGGInventory;

UCLASS(Blueprintable)
class GOAT2_API UGGGlobalEventHandler : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteracted OnInteractedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActorTookDamage OnActorTookDamageDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterJumped OnCharacterJumpedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNPCRagdolledFromDamage OnNPCRagdolledFromDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNPCSpawnedIntoWorld OnNPCSpawnedIntoWorldDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVehicleExploded OnVehicleExplodedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHandlerGoatBaa OnHandlerGoatBaaDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHandlerGoatHeadbuttedActor OnHandlerGoatHeadbuttedActorDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHandlerGoatLickedActor OnHandlerGoatLickedActorDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHandlerPlayerWorldAreaEntered OnHandlerPlayerWorldAreaEnteredDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHandlerPlayerWorldAreaExited OnHandlerPlayerWorldAreaExitedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceiveKarma OnReceiveKarmaDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLocalGearEquip OnLocalGearEquipDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLocalGearUnEquip OnLocalGearUnEquipDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuestDataUpdate OnQuestUpdatedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuestCompleted OnQuestCompletedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuestTierCompleted OnQuestTierCompletedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuestTierCompleted OnQuestCollectionMilestoneReachedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCompletedAchievement OnCompletedAchievementDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDecorateThroneRoom OnDecorateThroneRoomDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInstinctTriggered OnInstinctTriggeredDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFirstInstinctPackUnlocked OnFirstInstinctPackUnlockedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerGamePhaseChanged OnPlayerGamePhaseChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameCurrentActiveGameChanged OnGameCurrentActiveGameChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerGamePlayerInfoChanged OnPlayerGamePlayerInfoChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNotificationShown OnNotificationShownDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNotificationUpdated OnNotificationUpdatedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNotificationCleared OnNotificationClearedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMenuActionResolve OnMenuActionResolve;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerInfoChanged OnPlayerInfoChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInventoryInitialized OnInventoryInitializedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGoatTowerSynchronised OnGoatTowerSynchronisedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGoatEnteredThroneRoom OnGoatEnteredThroneRoomDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGoatExitedThroneRoom OnGoatExitedThroneRoomDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStretchGoalSequenceFinnished OnStretchGoalSequenceFinnishedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReachedMaxRamSetting OnReachedMaxRamSettingDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShowGPUSettingWarning OnShowGPUSettingWarningDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnResetGPUSettingWarning OnResetGPUSettingWarningDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStretchGoalChangedState OnStretchGoalChangedStateDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIntroSplashComplete OnIntroSplashCompleteDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayingCinematic OnPlayingCinematic;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnterExitKidneyStone OnEnterExitKidneyStone;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMotorcycleSetOwner OnMotorcycleSetOwner;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadingScreenRemoved OnLoadingScreenRemovedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateLastWorldCollectionLoaded OnUpdateLastWorldCollectionLoadedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGoatEvent OnGoatSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGoatEvent OnGoatDestroyed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBouncyActorBounced OnBouncyActorBounced;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNPCReacted OnNPCReacted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAltGoatChanged OnAltGoatChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGoatJumped OnGoatJumped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGoatLanded OnGoatLanded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGoatChangedMovementMode OnGoatChangedMovementMode;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGoatDroppedLickedActor OnGoatDroppedLickedActor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterEnteringVehicle OnCharacterEnteringVehicle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterExitedVehicle OnCharacterExitedVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGoatRequestConstraintBreak OnGoatRequestConstraintBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLocalGoatActionInput OnLocalGoatJumpActionPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLocalGoatActionInput OnLocalGoatJumpActionReleased;
    
    UGGGlobalEventHandler();

    UFUNCTION(BlueprintCallable)
    void OnVehicleExploded(AGGVehicle* Vehicle);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateLastWorldCollectionLoaded();
    
    UFUNCTION(BlueprintCallable)
    void OnStretchGoalSequenceFinnished(AGGCastleStretchGoal* StretchGoal);
    
    UFUNCTION(BlueprintCallable)
    void OnShowGPUSettingWarning();
    
    UFUNCTION(BlueprintCallable)
    void OnResetGPUSettingWarning();
    
    UFUNCTION(BlueprintCallable)
    void OnReceiveKarma(AGGGoat* Goat, int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void OnReachedMaxRamSetting();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayingCinematicUpdated(bool bCinematicFinished);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerWorldAreaExited(AGGGoat* Goat, FGameplayTag LeftArea);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerWorldAreaEntered(AGGGoat* Goat, FGameplayTag NewArea);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerInfoChanged(AGGGameState* GameState);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerGamePlayerInfoChanged(AGGPlayerGame_Base* PlayerGame);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerGamePhaseChanged(AGGPlayerGame_Base* PlayerGame, TEnumAsByte<EPlayerGamePhase::Type> NewPhase);
    
    UFUNCTION(BlueprintCallable)
    void OnNPCSpawnedIntoWorld(AGGNPC* NPC);
    
    UFUNCTION(BlueprintCallable)
    void OnNPCRagdollFromDamage(AGGNPC* NPC, const UDamageType* DamageType, AActor* DamageCauser, bool bWasAlreadyRagdolled);
    
    UFUNCTION(BlueprintCallable)
    void OnNotificationUpdated(FNotification Notification);
    
    UFUNCTION(BlueprintCallable)
    void OnNotificationShown(FNotification Notification);
    
    UFUNCTION(BlueprintCallable)
    void OnNotificationCleared(FNotification Notification);
    
    UFUNCTION(BlueprintCallable)
    void OnLoadingScreenRemoved(AGGPlayerController* Controller, ELoadingScreenType InType, ERemovalReason RemovalReason);
    
    UFUNCTION(BlueprintCallable)
    void OnInventoryInitialized(UGGInventory* Inventory);
    
    UFUNCTION(BlueprintCallable)
    void OnIntroSplashComplete();
    
    UFUNCTION(BlueprintCallable)
    void OnInteracted(AActor* SourceActor, AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    void OnInstinctTriggered(AGGGoat* Goat, FGameplayTag InstinctTag);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatTowerSynchronised(AGGGoatTower* GoatTower, ETowerSynchronizationEvent SynchronizationEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatLickedActor(AGGGoat* Goat, AActor* LickedActor);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatHeadbuttedActor(AGGGoat* Goat, AActor* HeadbuttedActor);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatExitedThroneRoom(AGGGoat* Goat, AGGGoatTower* GoatTower);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatEnteredThroneRoom(AGGGoat* Goat, AGGGoatTower* GoatTower);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatBaa(AGGGoat* Goat);
    
    UFUNCTION(BlueprintCallable)
    void OnGameCurrentActiveGameChanged(AGGPlayerGame_Base* PlayerGame);
    
    UFUNCTION(BlueprintCallable)
    void OnFirstInstinctPackUnlocked(UGGInstinctPackDataAsset* Pack);
    
    UFUNCTION(BlueprintCallable)
    void OnEnterExitKidneyStoneUpdated(bool bEnteredKidneyStone);
    
    UFUNCTION(BlueprintCallable)
    void OnDecorateThroneRoomUpdate(AActor* DecorationActor);
    
    UFUNCTION(BlueprintCallable)
    void OnCompletedAchievement(const FString& AchievementID);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterJumped(AGGCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnActorTookDamage(AActor* SourceActor, AActor* TargetActor, float DamageAmount, const UDamageType* DamageType);
    
};

