#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GGHUDUserWidgetBase.h"
#include "GGHUDUserWidgetMainMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGHUDUserWidgetMainMenu : public UGGHUDUserWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer MenusThatHideInviteWidgets;
    
    UGGHUDUserWidgetMainMenu();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBlockingChildMenuOpened();
    
};

