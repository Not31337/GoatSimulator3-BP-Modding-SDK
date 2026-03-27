#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "EKaijuBeamState.h"
#include "KaijuBeam.generated.h"

USTRUCT(BlueprintType)
struct FKaijuBeam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKaijuBeamState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize ReplicatedTargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize ReplicatedNormal;
    
    GOATAPOCALYPSE_API FKaijuBeam();
};

