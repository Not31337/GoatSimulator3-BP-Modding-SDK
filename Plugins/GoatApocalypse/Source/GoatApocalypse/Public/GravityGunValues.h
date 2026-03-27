#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EGravityGunState.h"
#include "GravityGunValues.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FGravityGunValues {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGravityGunState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* GrabbedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrabbedActorSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator GrabRotation;
    
    GOATAPOCALYPSE_API FGravityGunValues();
};

