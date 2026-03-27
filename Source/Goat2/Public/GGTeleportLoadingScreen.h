#pragma once
#include "CoreMinimal.h"
#include "GGLoadingScreen.h"
#include "LoadingWidgetParameter.h"
#include "GGTeleportLoadingScreen.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGTeleportLoadingScreen : public UGGLoadingScreen {
    GENERATED_BODY()
public:
    UGGTeleportLoadingScreen();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeLoadingScreen(const TArray<FLoadingWidgetParameter>& WidgetParameters);
    
};

