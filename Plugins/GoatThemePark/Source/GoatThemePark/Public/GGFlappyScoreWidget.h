#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GGFlappyScoreWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GOATTHEMEPARK_API UGGFlappyScoreWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Score;
    
    UGGFlappyScoreWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScoreChanged(int32 NewScore);
    
};

