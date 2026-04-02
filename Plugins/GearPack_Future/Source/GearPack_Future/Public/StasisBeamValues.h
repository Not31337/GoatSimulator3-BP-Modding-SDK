#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StasisBeamValues.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FStasisBeamValues {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGrabbing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* GrabbedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrabbedActorSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator GrabRotation;
    
    GEARPACK_FUTURE_API FStasisBeamValues();
};

