#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GGGearItemWidgetInterface.h"
#include "GGMenuUserWidget.h"
#include "GGPauseMenu.generated.h"

class AGGCharacter;
class AGGGoat;
class UGGHelpPanelUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGPauseMenu : public UGGMenuUserWidget, public IGGGearItemWidgetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGHelpPanelUserWidget* UMG_PauseMenu_Help;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGGoat* OwningGoat;
    
public:
    UGGPauseMenu();

    UFUNCTION(BlueprintCallable)
    void OnOwningGoatRespawned(AGGCharacter* OldCharacter, AGGCharacter* NewCharacter);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCharacterTeleported(AGGCharacter* Character, const FTransform& OldTransform);
    

    // Fix for true pure virtual functions not being implemented
};

