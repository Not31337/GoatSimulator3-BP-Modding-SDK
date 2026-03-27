#pragma once
#include "CoreMinimal.h"
#include "GGNPCAnimInstanceProxy.h"
#include "GGStiffBones.h"
#include "GGNPCAnimInstanceAnimalProxy.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FGGNPCAnimInstanceAnimalProxy : public FGGNPCAnimInstanceProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGGStiffBones StiffBodyParts;
    
    FGGNPCAnimInstanceAnimalProxy();
};

