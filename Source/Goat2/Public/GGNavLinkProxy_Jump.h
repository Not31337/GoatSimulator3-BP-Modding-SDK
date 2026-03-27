#pragma once
#include "CoreMinimal.h"
#include "Navigation/NavLinkProxy.h"
#include "UObject/NoExportTypes.h"
#include "GGNavLinkProxy_Jump.generated.h"

class AActor;

UCLASS(Blueprintable)
class GOAT2_API AGGNavLinkProxy_Jump : public ANavLinkProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpArc;
    
    AGGNavLinkProxy_Jump(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SmartLinkReached(AActor* MovingActor, const FVector& DestinationPoint);
    
};

