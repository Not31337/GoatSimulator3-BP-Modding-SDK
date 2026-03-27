#pragma once
#include "CoreMinimal.h"
#include "Components/ForceFeedbackComponent.h"
#include "GGForceFeedbackComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGForceFeedbackComponent : public UForceFeedbackComponent {
    GENERATED_BODY()
public:
    UGGForceFeedbackComponent(const FObjectInitializer& ObjectInitializer);

};

