#pragma once
#include "CoreMinimal.h"
#include "Components/Overlay.h"
#include "GGNewsWidgetCache.generated.h"

class UWidget;

UCLASS(Blueprintable)
class GOAT2_API UGGNewsWidgetCache : public UOverlay {
    GENERATED_BODY()
public:
    UGGNewsWidgetCache();

    UFUNCTION(BlueprintCallable)
    bool CacheWidgets(TArray<UWidget*> Widgets);
    
};

