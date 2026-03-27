#pragma once
#include "CoreMinimal.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "GGButtonUserWidget.h"
#include "OnFocusedWidgetReleasedDelegate.h"
#include "GGListEntryUserWidget.generated.h"

class UButtonWidgetStyle;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGListEntryUserWidget : public UGGButtonUserWidget, public IUserObjectListEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UButtonWidgetStyle* DefaultStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UButtonWidgetStyle* SelectedStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSelectOnFocus;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFocusedWidgetReleased OnFocusedWidgetReleased;
    
    UGGListEntryUserWidget();

    UFUNCTION(BlueprintCallable)
    void SetSelected(bool bIsSelected);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetSelected(bool bIsSelected);
    

    // Fix for true pure virtual functions not being implemented
};

