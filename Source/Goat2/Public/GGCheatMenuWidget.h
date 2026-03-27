#pragma once
#include "CoreMinimal.h"
#include "GGMenuUserWidget.h"
#include "GGCheatMenuWidget.generated.h"

class UGGCheatCategoryObject;
class UGGCheatMenuDataAsset;
class UGGListEntryUserWidget;
class UGGListView;
class UGGScrollBox;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGCheatMenuWidget : public UGGMenuUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGGCheatMenuDataAsset*> DefaultDataAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGGCheatCategoryObject*> CachedCheatMenuDataHolders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGListView* CheatSourcesListView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGListView* CheatButtonsListView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGScrollBox* ContentScrollBox;
    
    UGGCheatMenuWidget();

    UFUNCTION(BlueprintCallable)
    void PopulateListView();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnListViewSetupDone();
    
    UFUNCTION(BlueprintCallable)
    void OnCheatCategoryButtonClicked(UGGListEntryUserWidget* CheatMenuCategoryEntry);
    
    UFUNCTION(BlueprintCallable)
    void OnCheatButtonClicked(UObject* CheatMenuEntry, UGGListEntryUserWidget* EntryWidget, bool bTeleportToExactLocation);
    
};

