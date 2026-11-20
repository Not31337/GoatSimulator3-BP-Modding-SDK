#pragma once
#include "CoreMinimal.h"
#include "GGMenuTabUserWidget.h"
#include "GGSettingsMenuUserWidget.generated.h"

class UGGTopBarNavigationUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGSettingsMenuUserWidget : public UGGMenuTabUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGTopBarNavigationUserWidget* TopbarWidget;
    
    UGGSettingsMenuUserWidget();

};

