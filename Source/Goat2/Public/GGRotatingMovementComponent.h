#pragma once
#include "CoreMinimal.h"
#include "GameFramework/RotatingMovementComponent.h"
#include "GGRotatingMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGRotatingMovementComponent : public URotatingMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAsyncOverlaps;
    
    UGGRotatingMovementComponent(const FObjectInitializer& ObjectInitializer);

};

