#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GGNotificationUserWidget.h"
#include "GGVoiceChatWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGVoiceChatWidget : public UGGNotificationUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, bool> TalkingState;
    
public:
    UGGVoiceChatWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Setup(int32 PlayerId, const FString& PlayerName, FLinearColor PlayerColor, const FString& GamerPicURL);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTalking(int32 PlayerId, bool bIsTalking);
    
};

