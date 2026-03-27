#pragma once
#include "CoreMinimal.h"
#include "GGNotificationWidgetInterface.h"
#include "GGUserWidget.h"
#include "GGPlayerGamesInviteUserWidget.generated.h"

class UGGPlayerGameDataAsset;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGPlayerGamesInviteUserWidget : public UGGUserWidget, public IGGNotificationWidgetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* GameIcon;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebug;
    
public:
    UGGPlayerGamesInviteUserWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateGameIcon(UGGPlayerGameDataAsset* InDataAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGPlayerGameDataAsset* GetCurrentPlayerGameDataAsset() const;
    

    // Fix for true pure virtual functions not being implemented
};

