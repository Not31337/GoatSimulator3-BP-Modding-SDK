#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GGDrivingRangeWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GOATAPOCALYPSE_API UGGDrivingRangeWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UGGDrivingRangeWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHitDistance(int32 Distance, bool bHighScore);
    
};

