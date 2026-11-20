#pragma once
#include "CoreMinimal.h"
#include "GGRideSeatSpawnAnimation.generated.h"

class AActor;
class AGGRideSeat;

USTRUCT(BlueprintType)
struct GOATTHEMEPARK_API FGGRideSeatSpawnAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGRideSeat* Seat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AnimationMesh;
    
    FGGRideSeatSpawnAnimation();
};

