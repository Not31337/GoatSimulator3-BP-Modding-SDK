#pragma once
#include "CoreMinimal.h"
#include "GGAwaitingStandup.h"
#include "GGWorldSubsystem.h"
#include "GGUnragdollSubsystem.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UGGUnragdollSubsystem : public UGGWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGGAwaitingStandup> AwaitingStandups;
    
public:
    UGGUnragdollSubsystem();

};

