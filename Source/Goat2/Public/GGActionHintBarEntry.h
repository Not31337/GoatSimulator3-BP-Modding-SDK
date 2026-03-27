#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ActionHintStruct.h"
#include "GGActionHintBarEntry.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGActionHintBarEntry : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActionHintStruct ActionHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEdgePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MobileSidePaddingPercentage;
    
    UGGActionHintBarEntry();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHintUpdated();
    
};

