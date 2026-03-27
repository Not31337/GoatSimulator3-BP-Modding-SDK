#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "InputCoreTypes.h"
#include "Input/Events.h"
#include "Types/SlateEnums.h"
#include "Input/Events.h"
#include "Input/Events.h"
#include "Layout/Margin.h"
#include "Fonts/SlateFontInfo.h"
#include "Blueprint/WidgetNavigation.h"
#include "ActionHintStruct.h"
#include "EActionHintPosition.h"
#include "EActionHintVisibility.h"
#include "EDateTimeStyleBP.h"
#include "ENotificationCommand.h"
#include "EPopupButtonLayout.h"
#include "EPopupResponse.h"
#include "EffectSourceTargetsStruct.h"
#include "GGPopupResponseDelegateDelegate.h"
#include "MenuNavigationContext.h"
#include "Notification.h"
#include "NotificationProperties.h"
#include "PopupButton.h"
#include "PopupDataRow.h"
#include "RadarCoordinateData.h"
#include "TagTexturePair.h"
#include "GGWidgetBlueprintLibrary.generated.h"

class AActor;
class AGGPlayerController;
class AGGPlayerState;
class APlayerController;
class UGGGameViewportClient;
class UGGGoatGearInfoDataAsset;
class UGGPopupUserWidget;
class UGGUserWidget;
class UObject;
class UPanelWidget;
class UTextBlock;
class UTexture2D;
class UUserWidget;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable)
class GOAT2_API UGGWidgetBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGGWidgetBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void ToggleGearAsFavorite(UGGGoatGearInfoDataAsset* DataAsset, AGGPlayerController* PC, bool& bOutNewFavorite);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText TimecodeToPlaytimeText(const FTimecode& Timecode);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TestNotificationWidget(UObject* WorldContextObject, TSoftClassPtr<UUserWidget> InWidget, FGameplayTag InPosition, FNotification InNotification, float InDuration);
    
    UFUNCTION(BlueprintCallable)
    static bool SplitNewline(FText InText, FString& OutLeftString, FString& OutRightString);
    
    UFUNCTION(BlueprintCallable)
    static void SortListElementsObject(UObject* Target, UPARAM(Ref) TArray<UObject*>& ElementsToSort, TArray<FGameplayTag> SortingPasses, bool bStable);
    
    UFUNCTION(BlueprintCallable)
    static void SortListElementsList(UObject* Target, UPARAM(Ref) TArray<UObject*>& ElementsToSort, TArray<FGameplayTag> SortingPasses, bool bStable);
    
    UFUNCTION(BlueprintCallable)
    static void SetupListNavigation(UPanelWidget* List, FCustomWidgetNavigationDelegate InCustomDelegate);
    
    UFUNCTION(BlueprintCallable)
    static void SetGearAsFavorite(UGGGoatGearInfoDataAsset* DataAsset, AGGPlayerController* PC, bool bFavorite);
    
    UFUNCTION(BlueprintCallable)
    static void SetElementFontSize(UTextBlock* TextBlock, int32 NewFontSize);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveRadarCoordinateDataActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static bool RemovePopup(APlayerController* PC, const FString& ID, EPopupResponse Response);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveNotification(APlayerController* PC, FGameplayTag Tag, const FString& ID, FGameplayTag ContentTag, TEnumAsByte<ENotificationCommand::Type> Command);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveMenuContext(AGGPlayerController* PC, FGameplayTag MenuTag, FMenuNavigationContext Context);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveHUDEffectSources(AGGPlayerController* PC, FGameplayTag SourceTag, FGameplayTagContainer EffectTags, FGameplayTagContainer Targets);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveHUDEffectSource(AGGPlayerController* PC, FGameplayTag SourceTag, FGameplayTag EffectTag, FGameplayTagContainer Targets);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveAllHUDEffectsFromSource(AGGPlayerController* PC, FGameplayTag SourceTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NearlyEqual_MarginMargin(FMargin A, FMargin B, float ErrorTolerance);
    
    UFUNCTION(BlueprintCallable)
    static UWidget* NavigateList(UPanelWidget* List, EUINavigation Navigation, bool bWrap, bool bSkipDisabledEntries, bool bAutoInteract);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D MeasureFont(const FText& Text, const FSlateFontInfo& InFontInfo, float FontScale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPopupDataRow MakePopupDataRow(FText Title, FText Body, EPopupButtonLayout ButtonLayout, TArray<FPopupButton> OverrideButtonLayout, TSoftClassPtr<UGGPopupUserWidget> OverrideClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMenuNavigationContext MakeMenuNavigationContextStruct(const FString& ID, UObject* Asset, FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FEffectSourceTargetsStruct MakeEffectSourceTargetStruct(FGameplayTagContainer Source, FGameplayTagContainer Targets);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FActionHintStruct MakeActionHintStruct(FName ActionName, FText ActionDescription, FText ActionOverride, EActionHintPosition position, EActionHintVisibility Visibility, float HoldDuration, bool Interactable, bool Enabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsWhitespace(const FString& Char);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsWaypoint(FRadarCoordinateData Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMenuNavContextValid(FMenuNavigationContext Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsKeyFromAction(const APlayerController* PC, const FKey& InKey, FName InAction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsKeyEventFromAction(const APlayerController* PC, const FKeyEvent& InKeyEvent, FName InAction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGlobalInvalidationEnabled();
    
    UFUNCTION(BlueprintCallable)
    static bool IsGearFavorite(UGGGoatGearInfoDataAsset* DataAsset, AGGPlayerController* PC);
    
    UFUNCTION(BlueprintCallable)
    static void InvalidateGameWindow(UGGGameViewportClient* GameViewportClient);
    
    UFUNCTION(BlueprintCallable)
    static void InvalidateAllWidgets(bool bClearResourcesImmediately);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasHUDEffectSource(AGGPlayerController* PC, FGameplayTag EffectTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetWidgetDurationWithAnimations(FNotification InNotification, UWidgetAnimation* StartAnim, UWidgetAnimation* EndAnim);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetUserIndexFromFocusEvent(FFocusEvent FocusEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture2D* GetTextureFromTagInPair(TArray<FTagTexturePair> inArray, FGameplayTag InTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetTextRightOfNewline(const FText& InText, bool bReturnFullIfNoNewline, bool bRemoveTextFormatting, bool bToUpper);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetTextLeftOfNewline(const FText& InText, bool bReturnFullIfNoNewline, bool bRemoveTextFormatting, bool bToUpper);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetPrimaryDisplayNameForAction(APlayerController* PC, FName Action);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetPlayerScreenDPIScale(APlayerController* PC, float& OutAspectRatio);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetPlayerNameWithColor(AGGPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    UGGGoatGearInfoDataAsset* GetNextSortedGearFromFilters(AGGPlayerController* PC, TArray<FGameplayTag> SortingPasses, TArray<FGameplayTag> FilterPasses);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNestedRangeIndex(int32 RangeSize, int32 NestedRangeSize, int32 NestedRangePadding, int32 ValueIndex, int32 PrevRangeOffset, int32& OutNestedRangeStartOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FKey GetKeyFromKeyEvent(const FKeyEvent& Event);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetKeyFName(FKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetHashFromString(const FString& inString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UGGGameViewportClient* GetGGGameViewportClient(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static UGGUserWidget* GetFocusedChild(UPanelWidget* Container, int32& OutIndex, bool bIncludeActiveButtons);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetDisplayNameForKey(FKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor GetColorFromStringHash(const FString& inString, FLinearColor ReferenceColor, bool bUseFullRGB);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetCharArrayFromText(FText InText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EFocusCause GetCauseFromFocusEvent(FFocusEvent FocusEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> GetActionsForKey(const APlayerController* PC, const FKey& Key, bool bIncludeInverse);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetAbbreviatedTextFromWidth(FText InText, FSlateFontInfo Font, int32 Width, FText Format);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetAbbreviatedText(FText InText, int32 Limit, FText Format);
    
    UFUNCTION(BlueprintCallable)
    static void FilterListElementsObject(UObject* Target, UPARAM(Ref) TArray<UObject*>& ElementsToFilter, TArray<FGameplayTag> FilterPasses);
    
    UFUNCTION(BlueprintCallable)
    static void FilterListElementsList(UObject* Target, UPARAM(Ref) TArray<UObject*>& ElementsToFilter, TArray<FGameplayTag> FilterPasses);
    
    UFUNCTION(BlueprintCallable)
    static bool DoWidgetsIntersect(const UWidget* WidgetA, const UWidget* WidgetB, bool bUseLayoutRect);
    
    UFUNCTION(BlueprintCallable)
    static void DelayNotifications(APlayerController* PC, FGameplayTag Tag, float Delay);
    
    UFUNCTION(BlueprintCallable)
    static bool CreatePopupCustomUnique(APlayerController* PC, const FString& ID, FPopupDataRow Data, FGGPopupResponseDelegate Event, UGGPopupUserWidget*& OutWidget);
    
    UFUNCTION(BlueprintCallable)
    static bool CreatePopupCustom(APlayerController* PC, const FString& ID, FPopupDataRow Data, FGGPopupResponseDelegate Event, UGGPopupUserWidget*& OutWidget);
    
    UFUNCTION(BlueprintCallable)
    static bool CreatePopup(APlayerController* PC, const FString& ID, FGGPopupResponseDelegate Event, UGGPopupUserWidget*& OutWidget);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CreateNotificationExplicitBlueprintLocal(UObject* WorldContextObject, FNotification Notification);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CreateNotificationBlueprintLocal(UObject* WorldContextObject, FGameplayTag Tag, FText Title, FText Body, const FString& ID, FNotificationProperties Properties);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CheckIfAspectRatioIsLower(UObject* WorldContextObject, float AspectRatioCutoff);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText AsTimeWithFormat_DateTime(const FDateTime& In, EDateTimeStyleBP Format);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText AsDateWithFormat_DateTime(const FDateTime& InDateTime, EDateTimeStyleBP Format);
    
    UFUNCTION(BlueprintCallable)
    static void AddRadarCoordinateDataActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void AddMenuContext(AGGPlayerController* PC, FGameplayTag MenuTag, FMenuNavigationContext Context, int32 Priority, float Duration, bool bHold);
    
    UFUNCTION(BlueprintCallable)
    static void AddHUDEffectSources(AGGPlayerController* PC, FGameplayTag SourceTag, FGameplayTagContainer EffectTags, FGameplayTagContainer Targets);
    
    UFUNCTION(BlueprintCallable)
    static void AddHUDEffectSource(AGGPlayerController* PC, FGameplayTag SourceTag, FGameplayTag EffectTag, FGameplayTagContainer Targets);
    
};

