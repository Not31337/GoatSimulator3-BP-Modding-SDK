#pragma once
#include "CoreMinimal.h"
#include "GGMenuTabUserWidget.h"
#include "GGGoatTowerTabUserWidget.generated.h"

class UGGGoatCastleSubsystem;
class UGGGoatTowerListUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGGoatTowerTabUserWidget : public UGGMenuTabUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGGoatTowerListUserWidget* StretchGoalList;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGGoatCastleSubsystem* GoatCastleSubsystem;
    
public:
    UGGGoatTowerTabUserWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsHelpOrDetailsShowing();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDetailsPanelValidState();
    
};

