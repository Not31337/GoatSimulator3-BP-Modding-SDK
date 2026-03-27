#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "GGLevelStreamingGridSubsystem.generated.h"

class UGGLevelStreamingGridAsset;

UCLASS(Blueprintable)
class GOAT2MOBILE_API UGGLevelStreamingGridSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGLevelStreamingGridAsset* LevelStreamingGridAsset;
    
public:
    UGGLevelStreamingGridSubsystem();

};

