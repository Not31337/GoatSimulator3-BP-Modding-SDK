#pragma once
#include "CoreMinimal.h"
#include "ESpawnStage.generated.h"

UENUM(BlueprintType)
enum class ESpawnStage : uint8 {
    RegisterFirstComponent,
    RegisterComponent,
    PostRegister,
    BeforeFinishCallback,
    FinishSpawning,
    PostActorConstruction,
    AfterFinishCallback,
    Done,
};

