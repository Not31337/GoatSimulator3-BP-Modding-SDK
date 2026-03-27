#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GGNotificationWidgetInterface.h"
#include "GGUserWidget.h"
#include "Notification.h"
#include "GGGatherGoatsInviteWidget.generated.h"

class UGGRichTextBlock;
class UImage;
class UScaleBox;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGGatherGoatsInviteWidget : public UGGUserWidget, public IGGNotificationWidgetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SplashEntrySoundTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SplashExitSoundTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemoveBodyLabelTextFormatting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGRichTextBlock* BodyLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGRichTextBlock* InfoLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* ScaleBoxContent;
    
    UGGGatherGoatsInviteWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDetermineIcon(FNotification Notification);
    

    // Fix for true pure virtual functions not being implemented
};

