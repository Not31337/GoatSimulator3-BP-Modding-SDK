#pragma once
#include "CoreMinimal.h"
#include "GGActiveSubtitleWidget.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct GOAT2_API FGGActiveSubtitleWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* Widget;
    
    FGGActiveSubtitleWidget();
};

