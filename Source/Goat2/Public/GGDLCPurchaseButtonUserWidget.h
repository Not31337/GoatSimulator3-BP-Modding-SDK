#pragma once
#include "CoreMinimal.h"
#include "DLCOffer.h"
#include "EGoatDLC.h"
#include "GGButtonUserWidget.h"
#include "GGDLCPurchaseButtonUserWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGDLCPurchaseButtonUserWidget : public UGGButtonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText AvailableText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UnavailableText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OwnedText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemovePopupOnCheckout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGoatDLC DLC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDLCOffer DLCOffer;
    
    UGGDLCPurchaseButtonUserWidget();

    UFUNCTION(BlueprintCallable)
    void OnOffersUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnDLCAvailabilityUpdated();
    
    UFUNCTION(BlueprintCallable)
    void InitializePurchaseButton(EGoatDLC NewDLC);
    
};

