#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateColor.h"
#include "Components/SlateWrapperTypes.h"
#include "GGListEntryUserWidget.h"
#include "GGLobbyMember.h"
#include "GGOnlineFriend.h"
#include "GGFriendListEntryUserWidget.generated.h"

class AGGPlayerState;
class UGGButtonUserWidget;
class UGGFriendListAvatarUserWidget;
class UGGPlatformIndicatorUserWidget;
class UGGRichTextBlock;
class UGGUserWidget;
class UImage;
class UObject;
class UPanelWidget;
class USizeBox;
class USplitScreenPlayerObject;
class UTextBlock;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGFriendListEntryUserWidget : public UGGListEntryUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Object;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGOnlineFriend GoatFriend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USplitScreenPlayerObject* SplitScreenPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPlayerState* PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGLobbyMember LobbyMember;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PartyUserIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor FriendColorWhite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor FriendColorGreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor FriendColorLightBlue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor FriendColorLightGray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor FriendColorGray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush FriendBackgroundDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush FriendBackgroundDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* PlayerLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* StatusLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGFriendListAvatarUserWidget* FriendListAvatar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* EntryWidgetSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* EmptyContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGRichTextBlock* JoinText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Background;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* PlayerContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* LeaderIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGPlatformIndicatorUserWidget* PlatformIndicatorWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* KeyboardSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* GamepadSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* GamepadIndexLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* ButtonsWidgetSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* SizeBoxInvite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGButtonUserWidget* ButtonInvite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* SizeBoxKick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGButtonUserWidget* ButtonKick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* SizeBoxJoin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGButtonUserWidget* ButtonJoin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* SizeBoxLeave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGButtonUserWidget* ButtonLeave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* SizeBoxMute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGButtonUserWidget* ButtonMute;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEmpty;
    
public:
    UGGFriendListEntryUserWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateSplitScreenPlayer();
    
    UFUNCTION(BlueprintCallable)
    void UpdatePlayerStatePlayer();
    
    UFUNCTION(BlueprintCallable)
    void UpdateLobbyMember_Steam();
    
    UFUNCTION(BlueprintCallable)
    void UpdateLobbyMember();
    
    UFUNCTION(BlueprintCallable)
    void UpdateGoatFriend();
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerObject(UObject* InObject);
    
    UFUNCTION(BlueprintCallable)
    void SetDelayUntilNextAction();
    
    UFUNCTION(BlueprintCallable)
    void ResetPlayerObject();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetDelayUntilNextAction();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetPlayerObject(UObject* InObject);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnWidgetHovered(UGGUserWidget* InWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESlateVisibility LeaveButtonVisibility();
    
    UFUNCTION(BlueprintCallable)
    void LeaveAction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESlateVisibility KickButtonVisibility();
    
    UFUNCTION(BlueprintCallable)
    void KickAction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESlateVisibility JoinButtonVisibility();
    
    UFUNCTION(BlueprintCallable)
    void JoinAction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidEntry();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSplitScreenEntry();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingThisGame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerStateEntry();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLobbyEntry();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFriendsEntry();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESlateVisibility InviteButtonVisibility();
    
    UFUNCTION(BlueprintCallable)
    void InviteAction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESlateVisibility HoldToJoinTextVisibility();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateColor GetStatusTextColor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetStatusText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateColor GetPlayerTextColor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPlayerLabelText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxPlayerCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetLocalizedGGStatusForSteam(const FString& InGGStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetLobbyPlayerCountText(int32 Current, int32 Max);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESlateVisibility GetLeaderIconVisibility();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGButtonUserWidget* GetFirstVisibleButton() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateBrush GetBackgroundTexture();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UGGButtonUserWidget*> GetAllButtons() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<USizeBox*> GetAllButtonContainers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPlayerBeInvited();
    
};

