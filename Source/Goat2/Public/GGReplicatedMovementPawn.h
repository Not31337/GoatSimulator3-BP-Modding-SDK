#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GGReplicatedMovementPawn.generated.h"

class UGGReplicatedMovementComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGReplicatedMovementPawn : public APawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGReplicatedMovementComponent* MovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldIgnoreNetDistanceCull;
    
    AGGReplicatedMovementPawn(const FObjectInitializer& ObjectInitializer);

};

