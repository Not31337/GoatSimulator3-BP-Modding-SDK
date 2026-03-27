#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "LevelSequenceSignificanceActorSettings.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FLevelSequenceSignificanceActorSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionEnabled::Type> CollisionEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGenerateOverlapEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGeneratePhysicsVolumeEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoSkeletonUpdate;
    
    GOAT2_API FLevelSequenceSignificanceActorSettings();
};

