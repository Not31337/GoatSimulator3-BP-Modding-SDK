#pragma once
#include "CoreMinimal.h"
#include "GGMenuTabUserWidget.h"
#include "GGHelpMenuWidget.generated.h"

class UDataTable;
class UGGListView;
class UGGScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGHelpMenuWidget : public UGGMenuTabUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* HelpListDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGListView* HelpListView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGScrollBox* ContentScrollBox;
    
    UGGHelpMenuWidget();

    UFUNCTION(BlueprintCallable)
    void PopulateListViewFromDataTable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnListViewSetupDone();
    
};

