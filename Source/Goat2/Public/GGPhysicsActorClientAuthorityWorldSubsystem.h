#pragma once
#include "CoreMinimal.h"
#include "GGWorldSubsystem.h"
#include "GGPhysicsActorClientAuthorityWorldSubsystem.generated.h"

class AGGPhysicsActor_Base;

UCLASS(Blueprintable)
class GOAT2_API UGGPhysicsActorClientAuthorityWorldSubsystem : public UGGWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGPhysicsActor_Base*> PhysicsActors;
    
    UGGPhysicsActorClientAuthorityWorldSubsystem();

};

