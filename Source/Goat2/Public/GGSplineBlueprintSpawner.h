#pragma once
#include "CoreMinimal.h"
#include "GGSpawnerInterface.h"
#include "Templates/SubclassOf.h"
#include "GGSplineBlueprintSpawner.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGSplineBlueprintSpawner : public UGGSpawnerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ClassToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyUseCollidingComponentsForBoundsCalculation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OwnerOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoOwnerForSpawnedActors;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SpawnedInstances;
    
public:
    UGGSplineBlueprintSpawner();

};

