#pragma once
#include "CoreMinimal.h"
#include "GGSettingsTabMenuUserWidget.h"
#include "GGInputSettingsTabMenuUserWidget.generated.h"

class UGGUserWidget;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew, Config=Engine)
class GOAT2_API UGGInputSettingsTabMenuUserWidget : public UGGSettingsTabMenuUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGGUserWidget> GameNightControlSchemeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGUserWidget* GameNightGoatModeControlScheme;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGGUserWidget> GameNightControlSchemeMenuClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGUserWidget* GameNightMenuModeControlScheme;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> GameNightPhysicalControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* GameNightPhysicalControllerScheme;
    
public:
    UGGInputSettingsTabMenuUserWidget();

};

