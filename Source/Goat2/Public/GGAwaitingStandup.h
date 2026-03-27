#pragma once
#include "CoreMinimal.h"
#include "RagdollStateChangeSettings.h"
#include "GGAwaitingStandup.generated.h"

class ULSCharacterMovementComponent;

USTRUCT(BlueprintType)
struct GOAT2_API FGGAwaitingStandup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULSCharacterMovementComponent* MovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRagdollStateChangeSettings Settings;
    
    FGGAwaitingStandup();
};

