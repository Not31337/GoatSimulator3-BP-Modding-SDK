#pragma once
#include "CoreMinimal.h"
#include "GGDisguiseState.generated.h"

class AGGNPC;
class AGGPhysicsActor_Base;

USTRUCT(BlueprintType)
struct GOAT2_API FGGDisguiseState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPhysicsActor_Base* PhysicsActorDisguise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGNPC* NPCDisguise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRevertDisguiseOnAbilityPress;
    
    FGGDisguiseState();
};

