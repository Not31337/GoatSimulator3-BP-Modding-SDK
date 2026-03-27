#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "GGJockeySaddleComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGJockeySaddleComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UGGJockeySaddleComponent(const FObjectInitializer& ObjectInitializer);

};

