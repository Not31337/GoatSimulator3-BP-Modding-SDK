#pragma once
#include "CoreMinimal.h"
#include "MountedOnCharacter.generated.h"

class AGGCharacter;

USTRUCT(BlueprintType)
struct GOAT2_API FMountedOnCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGCharacter* CurrentMount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    AGGCharacter* LastMount;
    
    FMountedOnCharacter();
};

