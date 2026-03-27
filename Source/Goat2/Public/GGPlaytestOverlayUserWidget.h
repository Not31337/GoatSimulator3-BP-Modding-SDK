#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GGPlaytestOverlayUserWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGPlaytestOverlayUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinMoveDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxMoveDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentMoveDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastOrderFixTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateTextTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateTextInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OverlayText;
    
    UGGPlaytestOverlayUserWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNewOverlayText(const FString& NewText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MoveWidget();
    
};

