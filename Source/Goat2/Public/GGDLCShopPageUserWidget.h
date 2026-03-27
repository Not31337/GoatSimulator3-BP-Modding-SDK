#pragma once
#include "CoreMinimal.h"
#include "GGMenuComponentUserWidget.h"
#include "GGDLCShopPageUserWidget.generated.h"

class UGGDLCShopCategoryHeaderWidget;
class UGGDLCShopEntryUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGDLCShopPageUserWidget : public UGGMenuComponentUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGGDLCShopEntryUserWidget*> DLCEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGGDLCShopCategoryHeaderWidget*> DLCCategoryHeaders;
    
    UGGDLCShopPageUserWidget();

    UFUNCTION(BlueprintCallable)
    void OnOffersUpdated(UGGDLCShopEntryUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInternalDevelopment();
    
};

