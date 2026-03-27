#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "GGPhysicsDebuggerSubsystem.generated.h"

UCLASS(Blueprintable)
class GOAT2MOBILE_API UGGPhysicsDebuggerSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UGGPhysicsDebuggerSubsystem();

};

