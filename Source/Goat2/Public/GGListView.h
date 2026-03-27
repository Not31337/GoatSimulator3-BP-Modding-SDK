#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Styling/SlateTypes.h"
#include "Components/SlateWrapperTypes.h"
#include "Components/ListView.h"
#include "OnListViewEmptyDelegate.h"
#include "GGListView.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class GOAT2_API UGGListView : public UListView {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWrapVerticalNavigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowScrolling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHandleGamepadAnalogScrolling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHandleGamepadAnalogScrollingLeftStick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoSelectOnAnalogScroll;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnListViewEmpty BP_OnListViewEmpty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScrollBarStyle ScrollBarStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EOrientation> ScrollBarOrientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility ScrollBarVisibility;
    
    UGGListView();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScrollDistanceRemaining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScrollDistance() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetDisplayedItemIndex(bool bFromTop, int32 OffsetCount, UUserWidget*& OutDisplayedWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAnalogScrollInput() const;
    
};

