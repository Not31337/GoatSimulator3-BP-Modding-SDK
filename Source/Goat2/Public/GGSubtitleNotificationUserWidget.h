#pragma once
#include "CoreMinimal.h"
#include "GGActiveSubtitleWidget.h"
#include "GGNotificationUserWidget.h"
#include "Templates/SubclassOf.h"
#include "GGSubtitleNotificationUserWidget.generated.h"

class UHorizontalBox;
class UUserWidget;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGSubtitleNotificationUserWidget : public UGGNotificationUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* SubtitlesVerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* ClosedCaptionsHorizontalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> SubtitleRowWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumberOfSubtitles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumberOfClosedCaptions;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGGActiveSubtitleWidget> ActiveDialogueWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGGActiveSubtitleWidget> ActiveCloseCaptionWidgets;
    
public:
    UGGSubtitleNotificationUserWidget();

};

