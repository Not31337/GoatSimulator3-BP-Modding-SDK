#include "GGWidgetBlueprintLibrary.h"

UGGWidgetBlueprintLibrary::UGGWidgetBlueprintLibrary() {
}

void UGGWidgetBlueprintLibrary::ToggleGearAsFavorite(UGGGoatGearInfoDataAsset* DataAsset, AGGPlayerController* PC, bool& bOutNewFavorite) {
}

FText UGGWidgetBlueprintLibrary::TimecodeToPlaytimeText(const FTimecode& Timecode) {
    return FText::GetEmpty();
}

void UGGWidgetBlueprintLibrary::TestNotificationWidget(UObject* WorldContextObject, TSoftClassPtr<UUserWidget> InWidget, FGameplayTag InPosition, FNotification InNotification, float InDuration) {
}

bool UGGWidgetBlueprintLibrary::SplitNewline(FText InText, FString& OutLeftString, FString& OutRightString) {
    return false;
}

void UGGWidgetBlueprintLibrary::SortListElementsObject(UObject* Target, TArray<UObject*>& ElementsToSort, TArray<FGameplayTag> SortingPasses, bool bStable) {
}

void UGGWidgetBlueprintLibrary::SortListElementsList(UObject* Target, TArray<UObject*>& ElementsToSort, TArray<FGameplayTag> SortingPasses, bool bStable) {
}

void UGGWidgetBlueprintLibrary::SetupListNavigation(UPanelWidget* List, FCustomWidgetNavigationDelegate InCustomDelegate) {
}

void UGGWidgetBlueprintLibrary::SetGearAsFavorite(UGGGoatGearInfoDataAsset* DataAsset, AGGPlayerController* PC, bool bFavorite) {
}

void UGGWidgetBlueprintLibrary::SetElementFontSize(UTextBlock* TextBlock, int32 NewFontSize) {
}

void UGGWidgetBlueprintLibrary::RemoveRadarCoordinateDataActor(AActor* Actor) {
}

bool UGGWidgetBlueprintLibrary::RemovePopup(APlayerController* PC, const FString& ID, EPopupResponse Response) {
    return false;
}

void UGGWidgetBlueprintLibrary::RemoveNotification(APlayerController* PC, FGameplayTag Tag, const FString& ID, FGameplayTag ContentTag, TEnumAsByte<ENotificationCommand::Type> Command) {
}

bool UGGWidgetBlueprintLibrary::RemoveMenuContext(AGGPlayerController* PC, FGameplayTag MenuTag, FMenuNavigationContext Context) {
    return false;
}

void UGGWidgetBlueprintLibrary::RemoveHUDEffectSources(AGGPlayerController* PC, FGameplayTag SourceTag, FGameplayTagContainer EffectTags, FGameplayTagContainer Targets) {
}

bool UGGWidgetBlueprintLibrary::RemoveHUDEffectSource(AGGPlayerController* PC, FGameplayTag SourceTag, FGameplayTag EffectTag, FGameplayTagContainer Targets) {
    return false;
}

void UGGWidgetBlueprintLibrary::RemoveAllHUDEffectsFromSource(AGGPlayerController* PC, FGameplayTag SourceTag) {
}

bool UGGWidgetBlueprintLibrary::NearlyEqual_MarginMargin(FMargin A, FMargin B, float ErrorTolerance) {
    return false;
}

UWidget* UGGWidgetBlueprintLibrary::NavigateList(UPanelWidget* List, EUINavigation Navigation, bool bWrap, bool bSkipDisabledEntries, bool bAutoInteract) {
    return NULL;
}

FVector2D UGGWidgetBlueprintLibrary::MeasureFont(const FText& Text, const FSlateFontInfo& InFontInfo, float FontScale) {
    return FVector2D{};
}

FPopupDataRow UGGWidgetBlueprintLibrary::MakePopupDataRow(FText Title, FText Body, EPopupButtonLayout ButtonLayout, TArray<FPopupButton> OverrideButtonLayout, TSoftClassPtr<UGGPopupUserWidget> OverrideClass) {
    return FPopupDataRow{};
}

FMenuNavigationContext UGGWidgetBlueprintLibrary::MakeMenuNavigationContextStruct(const FString& ID, UObject* Asset, FGameplayTag Tag) {
    return FMenuNavigationContext{};
}

FEffectSourceTargetsStruct UGGWidgetBlueprintLibrary::MakeEffectSourceTargetStruct(FGameplayTagContainer Source, FGameplayTagContainer Targets) {
    return FEffectSourceTargetsStruct{};
}

FActionHintStruct UGGWidgetBlueprintLibrary::MakeActionHintStruct(FName ActionName, FText ActionDescription, FText ActionOverride, EActionHintPosition position, EActionHintVisibility Visibility, float HoldDuration, bool Interactable, bool Enabled) {
    return FActionHintStruct{};
}

bool UGGWidgetBlueprintLibrary::IsWhitespace(const FString& Char) {
    return false;
}

bool UGGWidgetBlueprintLibrary::IsWaypoint(FRadarCoordinateData Data) {
    return false;
}

bool UGGWidgetBlueprintLibrary::IsMenuNavContextValid(FMenuNavigationContext Context) {
    return false;
}

bool UGGWidgetBlueprintLibrary::IsKeyFromAction(const APlayerController* PC, const FKey& InKey, FName InAction) {
    return false;
}

bool UGGWidgetBlueprintLibrary::IsKeyEventFromAction(const APlayerController* PC, const FKeyEvent& InKeyEvent, FName InAction) {
    return false;
}

bool UGGWidgetBlueprintLibrary::IsGlobalInvalidationEnabled() {
    return false;
}

bool UGGWidgetBlueprintLibrary::IsGearFavorite(UGGGoatGearInfoDataAsset* DataAsset, AGGPlayerController* PC) {
    return false;
}

void UGGWidgetBlueprintLibrary::InvalidateGameWindow(UGGGameViewportClient* GameViewportClient) {
}

void UGGWidgetBlueprintLibrary::InvalidateAllWidgets(bool bClearResourcesImmediately) {
}

bool UGGWidgetBlueprintLibrary::HasHUDEffectSource(AGGPlayerController* PC, FGameplayTag EffectTag) {
    return false;
}

float UGGWidgetBlueprintLibrary::GetWidgetDurationWithAnimations(FNotification InNotification, UWidgetAnimation* StartAnim, UWidgetAnimation* EndAnim) {
    return 0.0f;
}

int32 UGGWidgetBlueprintLibrary::GetUserIndexFromFocusEvent(FFocusEvent FocusEvent) {
    return 0;
}

UTexture2D* UGGWidgetBlueprintLibrary::GetTextureFromTagInPair(TArray<FTagTexturePair> inArray, FGameplayTag InTag) {
    return NULL;
}

FText UGGWidgetBlueprintLibrary::GetTextRightOfNewline(const FText& InText, bool bReturnFullIfNoNewline, bool bRemoveTextFormatting, bool bToUpper) {
    return FText::GetEmpty();
}

FText UGGWidgetBlueprintLibrary::GetTextLeftOfNewline(const FText& InText, bool bReturnFullIfNoNewline, bool bRemoveTextFormatting, bool bToUpper) {
    return FText::GetEmpty();
}

FText UGGWidgetBlueprintLibrary::GetPrimaryDisplayNameForAction(APlayerController* PC, FName Action) {
    return FText::GetEmpty();
}

float UGGWidgetBlueprintLibrary::GetPlayerScreenDPIScale(APlayerController* PC, float& OutAspectRatio) {
    return 0.0f;
}

FText UGGWidgetBlueprintLibrary::GetPlayerNameWithColor(AGGPlayerState* PlayerState) {
    return FText::GetEmpty();
}

UGGGoatGearInfoDataAsset* UGGWidgetBlueprintLibrary::GetNextSortedGearFromFilters(AGGPlayerController* PC, TArray<FGameplayTag> SortingPasses, TArray<FGameplayTag> FilterPasses) {
    return NULL;
}

int32 UGGWidgetBlueprintLibrary::GetNestedRangeIndex(int32 RangeSize, int32 NestedRangeSize, int32 NestedRangePadding, int32 ValueIndex, int32 PrevRangeOffset, int32& OutNestedRangeStartOffset) {
    return 0;
}

FKey UGGWidgetBlueprintLibrary::GetKeyFromKeyEvent(const FKeyEvent& Event) {
    return FKey{};
}

FName UGGWidgetBlueprintLibrary::GetKeyFName(FKey Key) {
    return NAME_None;
}

int32 UGGWidgetBlueprintLibrary::GetHashFromString(const FString& inString) {
    return 0;
}

UGGGameViewportClient* UGGWidgetBlueprintLibrary::GetGGGameViewportClient(UObject* WorldContextObject) {
    return NULL;
}

UGGUserWidget* UGGWidgetBlueprintLibrary::GetFocusedChild(UPanelWidget* Container, int32& OutIndex, bool bIncludeActiveButtons) {
    return NULL;
}

FText UGGWidgetBlueprintLibrary::GetDisplayNameForKey(FKey Key) {
    return FText::GetEmpty();
}

FLinearColor UGGWidgetBlueprintLibrary::GetColorFromStringHash(const FString& inString, FLinearColor ReferenceColor, bool bUseFullRGB) {
    return FLinearColor{};
}

TArray<FString> UGGWidgetBlueprintLibrary::GetCharArrayFromText(FText InText) {
    return TArray<FString>();
}

EFocusCause UGGWidgetBlueprintLibrary::GetCauseFromFocusEvent(FFocusEvent FocusEvent) {
    return EFocusCause::Mouse;
}

TArray<FName> UGGWidgetBlueprintLibrary::GetActionsForKey(const APlayerController* PC, const FKey& Key, bool bIncludeInverse) {
    return TArray<FName>();
}

FText UGGWidgetBlueprintLibrary::GetAbbreviatedTextFromWidth(FText InText, FSlateFontInfo Font, int32 Width, FText Format) {
    return FText::GetEmpty();
}

FText UGGWidgetBlueprintLibrary::GetAbbreviatedText(FText InText, int32 Limit, FText Format) {
    return FText::GetEmpty();
}

void UGGWidgetBlueprintLibrary::FilterListElementsObject(UObject* Target, TArray<UObject*>& ElementsToFilter, TArray<FGameplayTag> FilterPasses) {
}

void UGGWidgetBlueprintLibrary::FilterListElementsList(UObject* Target, TArray<UObject*>& ElementsToFilter, TArray<FGameplayTag> FilterPasses) {
}

bool UGGWidgetBlueprintLibrary::DoWidgetsIntersect(const UWidget* WidgetA, const UWidget* WidgetB, bool bUseLayoutRect) {
    return false;
}

void UGGWidgetBlueprintLibrary::DelayNotifications(APlayerController* PC, FGameplayTag Tag, float Delay) {
}

bool UGGWidgetBlueprintLibrary::CreatePopupCustomUnique(APlayerController* PC, const FString& ID, FPopupDataRow Data, FGGPopupResponseDelegate Event, UGGPopupUserWidget*& OutWidget) {
    return false;
}

bool UGGWidgetBlueprintLibrary::CreatePopupCustom(APlayerController* PC, const FString& ID, FPopupDataRow Data, FGGPopupResponseDelegate Event, UGGPopupUserWidget*& OutWidget) {
    return false;
}

bool UGGWidgetBlueprintLibrary::CreatePopup(APlayerController* PC, const FString& ID, FGGPopupResponseDelegate Event, UGGPopupUserWidget*& OutWidget) {
    return false;
}

void UGGWidgetBlueprintLibrary::CreateNotificationExplicitBlueprintLocal(UObject* WorldContextObject, FNotification Notification) {
}

void UGGWidgetBlueprintLibrary::CreateNotificationBlueprintLocal(UObject* WorldContextObject, FGameplayTag Tag, FText Title, FText Body, const FString& ID, FNotificationProperties Properties) {
}

bool UGGWidgetBlueprintLibrary::CheckIfAspectRatioIsLower(UObject* WorldContextObject, float AspectRatioCutoff) {
    return false;
}

FText UGGWidgetBlueprintLibrary::AsTimeWithFormat_DateTime(const FDateTime& In, EDateTimeStyleBP Format) {
    return FText::GetEmpty();
}

FText UGGWidgetBlueprintLibrary::AsDateWithFormat_DateTime(const FDateTime& InDateTime, EDateTimeStyleBP Format) {
    return FText::GetEmpty();
}

void UGGWidgetBlueprintLibrary::AddRadarCoordinateDataActor(AActor* Actor) {
}

void UGGWidgetBlueprintLibrary::AddMenuContext(AGGPlayerController* PC, FGameplayTag MenuTag, FMenuNavigationContext Context, int32 Priority, float Duration, bool bHold) {
}

void UGGWidgetBlueprintLibrary::AddHUDEffectSources(AGGPlayerController* PC, FGameplayTag SourceTag, FGameplayTagContainer EffectTags, FGameplayTagContainer Targets) {
}

void UGGWidgetBlueprintLibrary::AddHUDEffectSource(AGGPlayerController* PC, FGameplayTag SourceTag, FGameplayTag EffectTag, FGameplayTagContainer Targets) {
}


