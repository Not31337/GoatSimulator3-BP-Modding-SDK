#pragma once
#include "CoreMinimal.h"
#include "BubbleCatchedState.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FBubbleCatchedState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ActorInside;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BallScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEjecting;
    
    GOATTHEMEPARK_API FBubbleCatchedState();
};

