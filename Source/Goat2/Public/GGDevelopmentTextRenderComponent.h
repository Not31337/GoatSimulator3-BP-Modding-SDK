#pragma once
#include "CoreMinimal.h"
#include "Components/TextRenderComponent.h"
#include "GGDevelopmentTextRenderComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGDevelopmentTextRenderComponent : public UTextRenderComponent {
    GENERATED_BODY()
public:
    UGGDevelopmentTextRenderComponent(const FObjectInitializer& ObjectInitializer);

};

