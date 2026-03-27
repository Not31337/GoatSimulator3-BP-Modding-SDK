#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Blueprint/UserWidget.h"
#include "GGOverlayLayers.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGOverlayLayers : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> LayerTags;
    
    UGGOverlayLayers();

};

