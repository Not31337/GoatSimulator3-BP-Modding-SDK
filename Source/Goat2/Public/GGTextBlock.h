#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateBrush.h"
#include "Components/TextBlock.h"
#include "GGTextBlock.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UGGTextBlock : public UTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HighlightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush HighlightShape;
    
    UGGTextBlock();

    UFUNCTION(BlueprintCallable)
    void SetHighlightText(FText HighlightText);
    
};

