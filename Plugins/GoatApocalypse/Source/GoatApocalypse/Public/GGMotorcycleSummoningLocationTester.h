#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GGMotorcycleSummoningLocationTester.generated.h"

class UGGMotorcycleSummoningConfig;
class UGGMotorcycleSummoningPath_AsyncResult;
class USplineComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATAPOCALYPSE_API UGGMotorcycleSummoningLocationTester : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGMotorcycleSummoningConfig* Config;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToReCalculatePaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGMotorcycleSummoningPath_AsyncResult* PendingSummoningPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USplineComponent*> PathSplines;
    
    UGGMotorcycleSummoningLocationTester(const FObjectInitializer& ObjectInitializer);

};

