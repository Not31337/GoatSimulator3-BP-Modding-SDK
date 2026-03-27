#pragma once
#include "CoreMinimal.h"
#include "SpawnedFoliage.generated.h"

class AActor;
class UInstancedStaticMeshComponent;

USTRUCT(BlueprintType)
struct INTERACTIVEFOLIAGESYSTEM_API FSpawnedFoliage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UInstancedStaticMeshComponent> InstancedMesh;
    
    FSpawnedFoliage();
};

