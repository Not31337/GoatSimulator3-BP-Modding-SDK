#pragma once
#include "CoreMinimal.h"
#include "OverlappingComponent.h"
#include "ComponentToSweep.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct GOAT2_API FComponentToSweep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOverlappingComponent> OverlappingComponents;
    
    FComponentToSweep();
};

