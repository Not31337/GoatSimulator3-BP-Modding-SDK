#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KaijuHit.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FKaijuHit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HitLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitRadius;
    
    GOATAPOCALYPSE_API FKaijuHit();
};

