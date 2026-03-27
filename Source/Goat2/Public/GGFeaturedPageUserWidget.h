#pragma once
#include "CoreMinimal.h"
#include "GGMenuComponentUserWidget.h"
#include "GGFeaturedPageUserWidget.generated.h"

class UGGGearItemButtonUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGFeaturedPageUserWidget : public UGGMenuComponentUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGGGearItemButtonUserWidget*> FeaturedButtons;
    
    UGGFeaturedPageUserWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshFeaturedButtons();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitMenuButtons();
    
};

