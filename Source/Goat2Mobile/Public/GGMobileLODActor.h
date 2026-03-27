#pragma once
#include "CoreMinimal.h"
#include "Engine/LODActor.h"
#include "MobileLODActorLevelData.h"
#include "GGMobileLODActor.generated.h"

UCLASS(Blueprintable)
class GOAT2MOBILE_API AGGMobileLODActor : public ALODActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FMobileLODActorLevelData> SubActorNamesPerLevel;
    
    AGGMobileLODActor(const FObjectInitializer& ObjectInitializer);

};

