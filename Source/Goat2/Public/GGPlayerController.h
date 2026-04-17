#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "GameFramework/PlayerInput.h"
#include "GameFramework/PlayerInput.h"
#include "GameFramework/PlayerController.h"
#include "Engine/NetSerialization.h"
#include "Camera/PlayerCameraManager.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "InputCoreTypes.h"
#include "ECastResult.h"
#include "EGearEquipContext.h"
#include "EKeyMappingInputMode.h"
#include "EMenuRequest.h"
#include "ENotificationCommand.h"
#include "EPostProcessCameraContext.h"
#include "EResourceAcquisitionType.h"
#include "EResourceSpendType.h"
#include "GoatInTriggers.h"
#include "MenuNavigationContext.h"
#include "MenuNavigationContextContainer.h"
#include "MenuStructureData.h"
#include "Notification.h"
#include "OnBaaDownDelegate.h"
#include "OnControlledGoatReplicatedDelegate.h"
#include "OnEnterUFODelegate.h"
#include "OnEnteredMedusaMobileDelegate.h"
#include "OnExitMedusaMobileDelegate.h"
#include "OnExitUFODelegate.h"
#include "OnGamepadChangedDelegate.h"
#include "OnGoatReplacedDelegate.h"
#include "OnHeadbuttDownDelegate.h"
#include "OnInteractWithEggDelegate.h"
#include "OnKarmaSentFromClientDelegate.h"
#include "OnLickDownDelegate.h"
#include "OnMenuAboutToBeOpenedDelegate.h"
#include "OnMenuClosedDelegate.h"
#include "OnMenuEnterDelegate.h"
#include "OnMenuNavigationDelegate.h"
#include "OnMenuOpenedDelegate.h"
#include "OnMobileUpdateInteractableDelegate.h"
#include "OnObjectControlEndedDelegate.h"
#include "OnObjectControlStartedDelegate.h"
#include "OnPlayerFinishedSequenceDelegate.h"
#include "OnPlayerInputKeyDelegate.h"
#include "OnScrollInputDelegate.h"
#include "OnStartedBrowsingDelegate.h"
#include "OnStoppedBrowsingDelegate.h"
#include "OnTouchEndedDelegate.h"
#include "OnTouchStartedDelegate.h"
#include "QuestTier.h"
#include "ReplicatedObjectControl.h"
#include "TeleportData.h"
#include "Templates/SubclassOf.h"
#include "TimedRagdollAuthorityOfNPC.h"
#include "GGPlayerController.generated.h"

class AActor;
class AGGCastleStretchGoal;
class AGGGoat;
class AGGGoatTower;
class AGGPlayerCameraManager;
class AGGPlayerController;
class AGGPlayerGameStartingPoint;
class AGGPlayerState;
class AGGQuestBase;
class AGGTutorial;
class AGGVehicle;
class APlayerState;
class UActorComponent;
class UDataAsset;
class UGGChaosCounterListener;
class UGGControllerRumbleComponent;
class UGGCustomCheatManager;
class UGGCustomCheatManager_Base;
class UGGGoatGearInfoDataAsset;
class UGGGoatGearStyleDataAsset;
class UGGGrindableSplineComponent;
class UGGHUDUserWidgetBase;
class UGGIntroComponent;
class UGGInventory;
class UGGLoadingScreenComponent;
class UGGLocalPlayer;
class UGGMenuComponent;
class UGGNotificationDispatcher;
class UGGObjectControlInputComponent;
class UGGPlayerDialogueComponent;
class UGGPlayerGameDataAsset;
class UGGPlayerSubtitleComponent;
class UGGPlaytestOverlayUserWidget;
class UGGRadarComponent;
class UGGTeleportationComponent;
class UGGTutorialComponent;
class UObject;
class USoundBase;
class USoundMix;
class UUserWidget;

UCLASS(Blueprintable)
class GOAT2_API AGGPlayerController : public APlayerController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGPlayerDialogueComponent* PlayerDialogueComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseTurnRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseLookUpRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ToggleSprintGracePeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RagdollAfterStandUpDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadInputThresholdForSprinting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MobileInputThresholdForSprinting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPlayerCameraManager* GGPlayerCameraManager;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector ForcedMovementInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bForceSprint;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsingGamepad;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGamepadChanged OnGamepadChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKarmaSentFromClient OnKarmaSentFromClient;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerInputKey OnPlayerInputKey;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGCustomCheatManager* CustomCheatManager_Vanilla;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGControllerRumbleComponent> RumbleComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGControllerRumbleComponent* RumbleComponent;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGoatReplaced OnGoatReplaced;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnControlledGoatReplicated OnControlledGoatReplicated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WaterLaunchVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaterLaunchDelay;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGoatInTriggers> GoatsInTriggers;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundMix* SlowMotionSoundMix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* ActivateSlomo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* DeativateSlomo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableMotionBlurDuringSlowMo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGObjectControlInputComponent* ObjectControlInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ClientObjectControl, meta=(AllowPrivateAccess=true))
    FReplicatedObjectControl ClientObjectControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* LastControlledObject;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnObjectControlStarted OnObjectControlStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnObjectControlEnded OnObjectControlEnded;
    
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractWithEgg OnInteractWithEgg;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGLoadingScreenComponent* LoadingScreenComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTeleportData TeleportData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGTeleportationComponent* TeleportationComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGGoatTower* TowerBeingSynced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGCastleStretchGoal* GoalBeingUnlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HijackTextFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* TargetedInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractCheckInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrackballDeceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrackballSmoothing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrackballSmoothingThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TouchHorizontalTurnRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TouchVerticalTurnRate;
    
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnterUFO OnEnterUFO;
    
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExitUFO OnExitUFO;
    
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartedBrowsing OnStartedBrowsing;
    
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStoppedBrowsing OnStoppedBrowsing;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnteredMedusaMobile OnEnteredMedusaMobile;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExitMedusaMobile OnExitMedusaMobile;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMobileUpdateInteractable OnMobileUpdateInteractable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTouchStarted OnTouchStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTouchEnded OnTouchEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> MobileHUDControlsWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> MobileDistanceWarningWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGGHUDUserWidgetBase> HUDWidgetClassMobile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* MobileHUDWidgetInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* MobileDistanceWarningInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGGHUDUserWidgetBase> HUDWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMenuStructureData> MenuClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* ActiveMenuWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer WidgetTagsToHideInOtherCameras;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer WidgetTagsToHideInCutscenes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGHUDUserWidgetBase* HUDWidgetInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundMix* MenuSoundMix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGMenuComponent* MenuComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGNotificationDispatcher* NotificationDispatcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGRadarComponent* RadarComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGTutorialComponent* TutorialComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGIntroComponent* IntroComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGPlayerSubtitleComponent* PlayerSubtitleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGChaosCounterListener* ChaosCounterListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NearestQuestCheckInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateInstinctsCheckInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountOfActiveInstinctsToShow;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerFinishedSequence OnPlayerFinishedSequence;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTimedRagdollAuthorityOfNPC> TimedRagdollAuthorityNPCs;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UActorComponent*> ComponentsWithExec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FVector_NetQuantize> LocationsAffectingSignificance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGPlaytestOverlayUserWidget> PlaytestOverlayWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGPlaytestOverlayUserWidget* PlaytestOverlayWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> DemoOverlayWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* DemoOverlayWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> DemoEndplateWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* DemoEndplateWidget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMenuNavigation OnMenuNavigation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMenuOpened OnMenuOpened;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMenuAboutToBeOpened OnMenuAboutToBeOpened;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMenuClosed OnMenuClosed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMenuEnter OnMenuEnter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TabsToDisableInBossFight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TabsToDisableInTeleportArea;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ControlledGoat, meta=(AllowPrivateAccess=true))
    AGGGoat* ControlledGoat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGGrindableSplineComponent* NearbyGrindSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHoldingHeadbutt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadbuttDownTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHoldingWalk;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGQuestBase* CachedNearestQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGQuestBase*> CachedActiveInstincts;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHeadbuttDown OnHeadbuttDown;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnScrollInput OnScrollInput;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBaaDown OnBaaDown;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLickDown OnLickDown;
    
    AGGPlayerController(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void WaterMixVolChange(bool InWater, USoundMix* SoundMix);
    
    UFUNCTION(BlueprintCallable)
    void VehicleHornUp();
    
    UFUNCTION(BlueprintCallable)
    void VehicleHornDown();
    
    UFUNCTION(BlueprintCallable)
    void VehicleHandbrakeUp();
    
    UFUNCTION(BlueprintCallable)
    void VehicleHandbrakeDown();
    
    UFUNCTION(BlueprintCallable)
    void VehicleBoostUp();
    
    UFUNCTION(BlueprintCallable)
    void VehicleBoostDown();
    
    UFUNCTION(BlueprintCallable)
    void UpdateTutorial(const FDataTableRowHandle& TutorialRowHandle);
    
    UFUNCTION(BlueprintCallable)
    void UpdateTargetInteractableHint(UObject* TargetInteractable, bool InteractableChanged, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void UpdateTargetInteractable(bool bBypassInterval);
    
    UFUNCTION(BlueprintCallable)
    void UpdateNearestQuest();
    
private:
    UFUNCTION(BlueprintCallable)
    void UpdateInstincts();
    
public:
    UFUNCTION(BlueprintCallable)
    static void UnlockAndEquipGear(AGGPlayerController* PlayerController, UGGGoatGearInfoDataAsset* Gear, FGameplayTag UnlockContext, EGearEquipContext EquipContext, bool bEquipIfAlreadyUnlocked, bool bGiveAbility, bool bCancelPendingGearInSameSlot, UGGGoatGearStyleDataAsset* StyleData);
    
    UFUNCTION(BlueprintCallable)
    void ToggleRagdoll();
    
    UFUNCTION(BlueprintCallable)
    void ToggleEmotes();
    
    UFUNCTION(BlueprintCallable)
    bool StartControllingObject(UObject* Object, AActor* ViewTarget, FViewTargetTransitionParams ViewTransition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    bool SpawnedIntoThisWorld(const UObject* WorldContextObject) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void SoundMixChange(bool InWater, USoundMix* SoundMix);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SlowMotionMixChange(bool IsSlowMotion);
    
    UFUNCTION(BlueprintCallable)
    void SlowMotion();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SkipIntro();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowSplash(const FText& SplashText, const FText& SplashDescription);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ShowDemoEndplate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldTabBeDisabled(FGameplayTag TabTag);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetInteractable(UObject* TargetInteractable);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void SetPlayerName(const FString& NewName);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetForceSprint(bool ForceSprint);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetForcedMovementInput(FVector ForcedMovement);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoManageActiveCameraTarget(bool bAutoManageCamera);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerVehicleAbilityReleased(uint8 AbilityIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerVehicleAbilityPressed(uint8 AbilityIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerStartPlayerGameFromStartingPoint(AGGPlayerGameStartingPoint* StartingPoint);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerStartPlayerGame(UGGPlayerGameDataAsset* MiniGameAsset);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartControllingObject(UObject* Object, AActor* ViewTarget, FViewTargetTransitionParams ViewTransition);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSendPlayerGameInviteResponse(bool bAccepted);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSendKarmaAmountToServer(int32 KarmaAmount);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRespawn(bool BypassCheck);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerResetObjectControl(FViewTargetTransitionParams ViewTransition);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestServerTime(APlayerController* Requester, float RequestWorldTime);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerOnMenuEnter(FGameplayTag MenuTag);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerLeavePlayerGame();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerInteractUp(UObject* InteractWith, float HeldFor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerInteractDown(UObject* InteractWith);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerFinishedWatchingSequence(FGameplayTag SequenceTag);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerChat(const FString& Msg);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerCancelPlayerGame();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerBaaReleased();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerBaaPressed();
    
    UFUNCTION(BlueprintCallable)
    void SavePlayerName(const FString& NewName);
    
    UFUNCTION(BlueprintCallable)
    void ResetObjectControl(FViewTargetTransitionParams ViewTransition);
    
    UFUNCTION(BlueprintCallable)
    void ResetIntroSubtitleOverride();
    
    UFUNCTION(BlueprintCallable)
    bool RequestTabNavigation(FGameplayTag InTag, FMenuNavigationContext Context);
    
    UFUNCTION(BlueprintCallable)
    bool RequestMenuNavigation(FGameplayTag MenuTag, TEnumAsByte<EMenuRequest::Type> Request, FMenuNavigationContext MenuContext, UUserWidget*& OutWidget);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveTutorial(const FDataTableRowHandle& TutorialRowHandle, bool bComplete, UObject* TutorialObject, bool bCompleteEvenIfNotActive);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAreaEnterNotifications();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceivedLogoutMessage(APlayerState* LeavingPlayerState);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceivedLoginMessage(APlayerState* JoiningPlayerState);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceivedChatMessage(APlayerState* SenderPlayerState, const FString& S, FName Type, float MsgLifeTime);
    
    UFUNCTION(BlueprintCallable)
    void QuestMenu();
    
    UFUNCTION(BlueprintCallable)
    void PS5EnableAdaptiveTriggers(const float FireTriggerThreshold);
    
    UFUNCTION(BlueprintCallable)
    void PS5ChangeLightBarColor(const FColor NewLightBarColor);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintCheatManagerNames();
    
    UFUNCTION(BlueprintCallable)
    void OverrideIntroSubtitleSetting();
    
    UFUNCTION(BlueprintCallable)
    void OptionsMenu();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ControlledGoat();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ClientObjectControl();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRemovedContext(FMenuNavigationContextContainer ContextContainer, AGGPlayerController* PC);
    
    UFUNCTION(BlueprintCallable)
    void OnQuestUpdated(AGGQuestBase* Quest, FGameplayTag UpdateTag);
    
    UFUNCTION(BlueprintCallable)
    void OnQuestTierCompleted(AGGQuestBase* Quest, const FQuestTier& Tier);
    
    UFUNCTION(BlueprintCallable)
    void OnQuestCompleted(AGGQuestBase* Quest, AGGPlayerState* OptionalPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnRagdolled();
    
    UFUNCTION(BlueprintCallable)
    void OnInventoryUnlockedDelegate(UDataAsset* Asset, FGameplayTag Context, AGGPlayerController* OptionalPC);
    
    UFUNCTION(BlueprintCallable)
    void OnEndAbility(const FAbilityEndedData& AbilityEndedData);
    
    UFUNCTION(BlueprintCallable)
    void OnCameraContextChanged(EPostProcessCameraContext CameraContext, AActor* NewTarget);
    
    UFUNCTION(BlueprintCallable)
    void OnAreaExited(AGGGoat* Goat, FGameplayTag AreaTag);
    
    UFUNCTION(BlueprintCallable)
    void OnAreaEntered(AGGGoat* Goat, FGameplayTag AreaTag);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastMobileClientDistanceCheck(FVector HostPosition, FRotator HostRotator, bool bIsInVehicle);
    
public:
    UFUNCTION(BlueprintCallable)
    void MobileShowInteractUI();
    
private:
    UFUNCTION(BlueprintCallable)
    void MobileManageClientHostDistance();
    
public:
    UFUNCTION(BlueprintCallable)
    void MobileHideInteractUI();
    
    UFUNCTION(BlueprintCallable)
    void MiddleMouseDown();
    
    UFUNCTION(BlueprintCallable)
    void MapMenu();
    
    UFUNCTION(BlueprintCallable)
    void LickAbilityUp();
    
    UFUNCTION(BlueprintCallable)
    void LickAbilityDown();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void LevelTravelFadeOut(float FadeDuration, FColor FadeColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool KeyMatchesActionBinding(FKey InKey, FName InAction) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsTutorialCompleted(const FDataTableRowHandle& TutorialRowHandle);
    
    UFUNCTION(BlueprintCallable)
    bool IsSwitchSplitScreenMainPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPrimaryPlayerBlueprint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOverridingAudioListener() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInIntro();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsControllingObject() const;
    
    UFUNCTION(BlueprintCallable)
    void InteractUp();
    
    UFUNCTION(BlueprintCallable)
    void InteractDown();
    
private:
    UFUNCTION(BlueprintCallable)
    void InitMobileControlsWidget();
    
    UFUNCTION(BlueprintCallable)
    void InitHUDWidgets();
    
public:
    UFUNCTION(BlueprintCallable)
    void IgnoreMoveInputForDuration(float Duration);
    
    UFUNCTION(BlueprintCallable)
    void HeadbuttUp();
    
    UFUNCTION(BlueprintCallable)
    void Headbutt();
    
    UFUNCTION(BlueprintCallable)
    void GoatBaaUp();
    
    UFUNCTION(BlueprintCallable)
    void GoatBaaDown();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetRadarWidgetVisibilityDebugString(FGameplayTag FilterTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FInputAxisKeyMapping GetPrimaryKeyMappingForAxis(FName ActionMapping, float Scale, EKeyMappingInputMode InputMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FInputActionKeyMapping GetPrimaryKeyMappingForAction(FName ActionMapping, EKeyMappingInputMode InputMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPlayerViewPointAndRot(FVector& Location, FRotator& Rotation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPawnVelocity();
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetLookingAtDirections();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLocalPlayerID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGInventory* GetInventory() const;
    
    UFUNCTION(BlueprintCallable)
    UGGHUDUserWidgetBase* GetHUDWidgetInstanceCast(TSubclassOf<UGGHUDUserWidgetBase> WidgetClass, ECastResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGPlayerState* GetGGPlayerState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGLocalPlayer* GetGGLocalPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetForceSprint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetForcedMovementInput() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UGGCustomCheatManager_Base*> GetCustomCheatManagers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGCustomCheatManager* GetCustomCheatManager_Vanilla();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKeyMappingInputMode GetCurrentKeyMappingInputMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGGoat* GetControlledGoat() const;
    
    UFUNCTION(BlueprintCallable)
    UUserWidget* GetActiveMenuWidgetCast(TSubclassOf<UUserWidget> WidgetClass, ECastResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAccurateServerTimeDelta() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAccurateServerTime() const;
    
    UFUNCTION(BlueprintCallable)
    void GameMenu();
    
    UFUNCTION(BlueprintCallable)
    void ForceUpdateTargetInteractableHint();
    
    UFUNCTION(BlueprintCallable)
    void FinishedWatchingSequence(FGameplayTag SequenceTag);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void DispatchNotificationToClient(FNotification Notification);
    
    UFUNCTION(BlueprintCallable)
    void Decline();
    
    UFUNCTION(BlueprintCallable)
    bool CreateTutorialWithTutorialObject(const FDataTableRowHandle& TutorialRowHandle, UObject* TutorialObject, AGGTutorial*& OutCreatedTutorial);
    
    UFUNCTION(BlueprintCallable)
    bool CreateTutorial(const FDataTableRowHandle& TutorialRowHandle, AGGTutorial*& OutCreatedTutorial);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientUnlockAndEquipGear(UGGGoatGearInfoDataAsset* Gear, FGameplayTag UnlockContext, EGearEquipContext EquipContext, bool bEquipIfAlreadyUnlocked, bool bGiveAbility, bool bCancelPendingGearInSameSlot, UGGGoatGearStyleDataAsset* StyleData);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientUnlockAchievements(const TArray<FString>& AchievementIDs);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientTriggerInstinct(FGameplayTag InstinctTag);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSpendTokens(int32 TokenAmount, EResourceSpendType SpendType, const FString& SpendActionID, const FString& SpendSourceID);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientResetObjectControl(FViewTargetTransitionParams ViewTransition);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReportServerTime(float RequestWorldTime, float TheServerTime);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRemoveNotification(FGameplayTag Tag, const FString& ID, FGameplayTag ContentTag, ENotificationCommand::Type Command, FMenuNavigationContext MenuContext);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnQuestDiscoveredNotificationCreated(float SplashDuration);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientNotifyPropFound(bool bFullScreenSplash, AGGGoat* HiddenGoat, const FText& PropName);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientHideGameTimer();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientHideGameHUD();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCreateNotification(FNotification Notification, FMenuNavigationContext MenuContext);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientBroadcastHijack(AGGVehicle* HijackedVehicle, const FText& PreviousName);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAcquireTokens(int32 TokenAmount, EResourceAcquisitionType AcquisitionType, const FString& AcquisitionActionID, const FString& AcquisitionSourceID);
    
    UFUNCTION(BlueprintCallable)
    void ChatEnter();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Chat(const FString& Msg);
    
    UFUNCTION(BlueprintCallable)
    void CharacterStopJumping();
    
    UFUNCTION(BlueprintCallable)
    void CharacterStopDiving();
    
    UFUNCTION(BlueprintCallable)
    void CharacterJump();
    
    UFUNCTION(BlueprintCallable)
    void CharacterDive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUseChat();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void BP_ClientTriggerInstinct(FGameplayTag InstinctTag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void BP_ClientRemoveNotification(FGameplayTag Tag, const FString& ID, FGameplayTag ContentTag, TEnumAsByte<ENotificationCommand::Type> Command);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void BP_ClientCreateNotification(FNotification Notification, FMenuNavigationContext MenuContext);
    
    UFUNCTION(BlueprintCallable)
    bool ActivateTutorial(const FDataTableRowHandle& TutorialRowHandle);
    
    UFUNCTION(BlueprintCallable)
    void AchievementsMenu();
    
    UFUNCTION(BlueprintCallable)
    void Accept();
    
    UFUNCTION(BlueprintCallable)
    void AbilityUp();
    
    UFUNCTION(BlueprintCallable)
    void AbilityDown();
    
};

