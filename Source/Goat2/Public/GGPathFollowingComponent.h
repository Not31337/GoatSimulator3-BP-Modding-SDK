#pragma once
#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "GGPathFollowingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGPathFollowingComponent : public UPathFollowingComponent {
    GENERATED_BODY()
public:
    UGGPathFollowingComponent(const FObjectInitializer& ObjectInitializer);

};

