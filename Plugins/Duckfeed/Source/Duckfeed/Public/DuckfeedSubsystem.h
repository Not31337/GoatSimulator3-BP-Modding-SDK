#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "DuckfeedConfig.h"
#include "DuckfeedSubsystem.generated.h"

UCLASS(Abstract, Blueprintable, Const)
class DUCKFEED_API UDuckfeedSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDuckfeedConfig Config;
    
    UDuckfeedSubsystem();

};

