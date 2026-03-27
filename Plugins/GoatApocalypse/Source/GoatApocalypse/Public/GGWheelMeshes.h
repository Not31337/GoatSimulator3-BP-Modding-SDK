#pragma once
#include "CoreMinimal.h"
#include "GGWheelMeshes.generated.h"

class USkeletalMeshComponent;
class UStaticMeshComponent;

USTRUCT(BlueprintType)
struct GOATAPOCALYPSE_API FGGWheelMeshes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> WheelMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* BoundsComponent;
    
    FGGWheelMeshes();
};

