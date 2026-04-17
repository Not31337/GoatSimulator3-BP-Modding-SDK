#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "Engine/DataTable.h"
#include "PerPlatformProperties.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "InputCoreTypes.h"
#include "EGGUpdate.h"
#include "EGoatDLC.h"
#include "GGUpdate.h"
#include "GGGoatSimulatorSettings.generated.h"

class AGGInteractableDialogueWrapper;
class UDataAsset;
class UDataTable;
class UGGCloningSettingsDataAsset;
class UGGGoatSimulatorSettings;
class UGGPopupUserWidget;
class USoundCue;
class UStringTable;
class UTexture2D;
class UUserWidget;

UCLASS(Blueprintable, DefaultConfig, NotPlaceable, Config=Game)
class GOAT2_API UGGGoatSimulatorSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> PreReleaseCertBuildTags_Apocalypse_Names;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPreReleaseCertBuild_Apocalypse;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugLanguageName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AGGInteractableDialogueWrapper> DialogueWrapperClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGGPopupUserWidget> ResetSavePopupClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UGGCloningSettingsDataAsset> CloningSettings;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformFloat MaxActorScale;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformFloat MinActorScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FKey> ForbiddenKeys;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FKey> FullRangeAxisKeys;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> MenuPendingWidget;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> HoldButtonCue;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> HoldButtonSuccessCue;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> HoldButtonCancelCue;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowGoatDLCs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGGUpdate> Updates;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GoatGearFolder;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ThumbnailSaveLocation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InstinctsFolder;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString QuestTemplateFolder;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> InputBindings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStringTable> InputBindingNames;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStringTable> SettingDisplayNames;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStringTable> CommonSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> DefaultNotificationWidgetClassesDataTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UDataTable>> NotificationWidgetClassesDataTables;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseNewNotificationDataTables;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> DefaultMenuIconDataTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UDataTable>> MenuIconDataTables;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> InputButtonIcons;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> InputButtonIcons_PS5;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> InputButtonIcons_PS4;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> InputButtonIcons_Mobile;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> InputButtonIcons_Switch;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> GenericIcons;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataAsset> GearPresetSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataAsset> BaaGearSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataAsset> DLCShopSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataAsset> NewsSettings;
    
public:
    UGGGoatSimulatorSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool UseNewNotificationDataTables();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTagRestricted(FGameplayTag InTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPreReleaseCertBuild_DLC(EGoatDLC InDLC);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPreReleaseCertBuild_Apocalypse();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsKeyForbidden(const FKey& InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAnyPreReleaseCertBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UDataTable*> GetNotificationWidgetClassesDataTables();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UDataTable*> GetMenuIconDataTables();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDataTable* GetInputButtonIcons();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetInputBindingsText(const FString& InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDataTable* GetInputBindingsDataTable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDataTable* GetGenericIconSet();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetGearFolderForUpdate(EGGUpdate Update);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetDisplayNameForSetting(FName SettingName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSoftObjectPtr<UDataTable> GetDefaultNotificationWidgetClassesDataTable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetCommonSettingsText(const FString& InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture2D* GetAssociatedIconForMenuTag(FGameplayTag InTag, FDataTableRowHandle& OutDataTableRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGGGoatSimulatorSettings* Get();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ContainsRestrictedTag(FGameplayTagContainer InTagContainer);
    
};

