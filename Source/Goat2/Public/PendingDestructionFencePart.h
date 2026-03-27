#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PendingDestructionFencePart.generated.h"

class UHierarchicalInstancedStaticMeshComponent;

USTRUCT(BlueprintType)
struct FPendingDestructionFencePart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHierarchicalInstancedStaticMeshComponent* ISM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DestructionImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InstanceIndex;
    
    GOAT2_API FPendingDestructionFencePart();
};

