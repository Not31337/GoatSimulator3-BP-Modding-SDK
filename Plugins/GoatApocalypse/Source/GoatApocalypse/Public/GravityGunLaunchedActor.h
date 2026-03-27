#pragma once
#include "CoreMinimal.h"
#include "GravityGunLaunchedActor.generated.h"

class AActor;
class AGGGoat;

USTRUCT(BlueprintType)
struct FGravityGunLaunchedActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> LaunchedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AGGGoat> Goat;
    
    GOATAPOCALYPSE_API FGravityGunLaunchedActor();
};

