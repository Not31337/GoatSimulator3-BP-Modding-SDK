#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MobileLODRedirectorLevelData.h"
#include "GGMobileLODRedirector.generated.h"

UCLASS(Blueprintable)
class GOAT2MOBILE_API AGGMobileLODRedirector : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FMobileLODRedirectorLevelData> LodActorToRedirectedSubActors;
    
    AGGMobileLODRedirector(const FObjectInitializer& ObjectInitializer);

};

