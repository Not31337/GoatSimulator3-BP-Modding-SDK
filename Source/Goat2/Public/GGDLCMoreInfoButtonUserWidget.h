#pragma once
#include "CoreMinimal.h"
#include "DLCLevelData.h"
#include "DLCOffer.h"
#include "EPopupResponse.h"
#include "GGButtonUserWidget.h"
#include "GGDLCMoreInfoButtonUserWidget.generated.h"

class UGGPopupUserWidget;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGDLCMoreInfoButtonUserWidget : public UGGButtonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGGPopupUserWidget> DLCMoreInfoPopupWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerNewsItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MoreInfoNewsPrefName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDLCLevelData LevelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDLCOffer DLCOffer;
    
    UGGDLCMoreInfoButtonUserWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnOffersUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnMoreInfoPopupResponse(const FString& ID, UObject* Object, const FString& ButtonID, EPopupResponse Response);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeMoreInfoButton(FDLCLevelData InLevelData);
    
};

