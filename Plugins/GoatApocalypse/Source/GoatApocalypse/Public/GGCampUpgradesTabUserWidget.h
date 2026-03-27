#pragma once
#include "CoreMinimal.h"
#include "GGGoatTowerTabUserWidget.h"
#include "Input/Events.h"
#include "GGCampUpgradesTabUserWidget.generated.h"

class AGGCastleStretchGoal;
class UGGCampUpgradeButtonUserWidget;
class UGGCampUpgradesVaultUserWidget;
class UGGDetailsPanelUserWidget;
class UGGUserWidget;
class UPanelWidget;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class GOATAPOCALYPSE_API UGGCampUpgradesTabUserWidget : public UGGGoatTowerTabUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGCampUpgradesVaultUserWidget* VaultDoor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* CampUpgradesContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TotalAmountOfScraps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGDetailsPanelUserWidget* DetailsPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ShowDetailsAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGGCampUpgradeButtonUserWidget*> CampUpgradeButtons;
    
    UGGCampUpgradesTabUserWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnGoalUnlocked(AGGCastleStretchGoal* UnlockedGoal);
    
    UFUNCTION(BlueprintCallable)
    void OnCurrentGoalUpdated(AGGCastleStretchGoal* UpdatedGoal);
    
    UFUNCTION(BlueprintCallable)
    void OnClientGoalUnlocked(AGGCastleStretchGoal* UnlockedGoal);
    
    UFUNCTION(BlueprintCallable)
    void OnCampUpgradeButtonFocused(UGGUserWidget* InWidget, FFocusEvent InFocusEvent);
    
};

