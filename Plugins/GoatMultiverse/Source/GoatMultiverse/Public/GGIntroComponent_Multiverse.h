#pragma once
#include "CoreMinimal.h"
#include "GGIntroComponent.h"
#include "GGIntroComponent_Multiverse.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATMULTIVERSE_API UGGIntroComponent_Multiverse : public UGGIntroComponent {
    GENERATED_BODY()
public:
    UGGIntroComponent_Multiverse(const FObjectInitializer& ObjectInitializer);

};

