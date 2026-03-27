#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GGMotorcycleSummoningPath_AsyncResult.generated.h"

class UGGMotorcycleSummoningConfig;

UCLASS(Blueprintable)
class GOATAPOCALYPSE_API UGGMotorcycleSummoningPath_AsyncResult : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGMotorcycleSummoningConfig* Config;
    
    UGGMotorcycleSummoningPath_AsyncResult();

};

