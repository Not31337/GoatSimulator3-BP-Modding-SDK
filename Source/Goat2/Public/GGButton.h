#pragma once
#include "CoreMinimal.h"
#include "Components/Button.h"
#include "OnButtonDoubleClickedEventDelegate.h"
#include "OnMouseMoveEventDelegate.h"
#include "GGButton.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UGGButton : public UButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnButtonDoubleClickedEvent OnDoubleClicked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableEnterKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BatchPriorityGroup;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMouseMoveEvent OnMouseMoveEvent;
    
    UGGButton();

};

