#pragma once
#include "CoreMinimal.h"
#include "GGPowerFistTargetOverlay.generated.h"

class UWidgetComponent;

USTRUCT(BlueprintType)
struct GOATAPOCALYPSE_API FGGPowerFistTargetOverlay {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWidgetComponent*> Widgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* ActorNameWidget;
    
    FGGPowerFistTargetOverlay();
};

