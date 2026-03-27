#pragma once
#include "CoreMinimal.h"
#include "GGJumpingPActor.h"
#include "GGJumpingPActor_Cockroach.generated.h"

UCLASS(Blueprintable)
class GOATAPOCALYPSE_API AGGJumpingPActor_Cockroach : public AGGJumpingPActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRadioactiveCockroach;
    
    AGGJumpingPActor_Cockroach(const FObjectInitializer& ObjectInitializer);

};

