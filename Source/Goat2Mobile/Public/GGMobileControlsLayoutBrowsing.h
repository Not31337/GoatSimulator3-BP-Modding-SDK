#pragma once
#include "CoreMinimal.h"
#include "GGMobileControlsLayoutBase.h"
#include "GGMobileControlsLayoutBrowsing.generated.h"

class UButton;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2MOBILE_API UGGMobileControlsLayoutBrowsing : public UGGMobileControlsLayoutBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* BrowseRightButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* BrowseLeftButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* BackButton;
    
    UGGMobileControlsLayoutBrowsing();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBrowsingText(const FText& BrowsingText);
    
private:
    UFUNCTION(BlueprintCallable)
    void BrowseRightButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void BrowseLeftButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void BackButtonPressed();
    
};

