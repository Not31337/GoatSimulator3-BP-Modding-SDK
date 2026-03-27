#pragma once
#include "CoreMinimal.h"
#include "OverlappingComponent.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FOverlappingComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* Component;
    
    GOAT2_API FOverlappingComponent();
};

