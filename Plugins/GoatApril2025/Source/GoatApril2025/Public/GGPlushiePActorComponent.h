#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GGPlushiePActorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATAPRIL2025_API UGGPlushiePActorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UGGPlushiePActorComponent(const FObjectInitializer& ObjectInitializer);

};

