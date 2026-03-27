#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GGHeroCape_UserWidget.generated.h"

class AGGCharacter;

UCLASS(Blueprintable, EditInlineNew)
class GEARPACK_SUPERGOATS_API UGGHeroCape_UserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UGGHeroCape_UserWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayMarkerAnimation(AGGCharacter* InTarget);
    
};

