#pragma once
#include "CoreMinimal.h"
#include "Engine/GameEngine.h"
#include "GGGameEngine.generated.h"

UCLASS(Blueprintable, NonTransient, Config=Engine)
class GOAT2_API UGGGameEngine : public UGameEngine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlaytestingBuild;
    
    UGGGameEngine();

    UFUNCTION(BlueprintCallable)
    FString GetBuiltPerforceStreamName();
    
};

