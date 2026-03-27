#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "GGReplicatedStaticMeshComp.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGReplicatedStaticMeshComp : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UGGReplicatedStaticMeshComp(const FObjectInitializer& ObjectInitializer);

};

