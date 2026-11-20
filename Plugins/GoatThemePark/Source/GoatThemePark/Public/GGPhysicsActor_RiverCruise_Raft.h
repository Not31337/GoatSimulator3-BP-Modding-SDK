#pragma once
#include "CoreMinimal.h"
#include "GGPhysicsActor.h"
#include "GGPhysicsActor_RiverCruise_Raft.generated.h"

class AActor;

UCLASS(Blueprintable)
class GOATTHEMEPARK_API AGGPhysicsActor_RiverCruise_Raft : public AGGPhysicsActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AActor>> CatchersKeepingSeatedNpcs;
    
    AGGPhysicsActor_RiverCruise_Raft(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void GainedSignificance();
    
};

