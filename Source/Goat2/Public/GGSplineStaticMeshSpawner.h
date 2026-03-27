#pragma once
#include "CoreMinimal.h"
#include "GGSpawnerInterface.h"
#include "GGSplineStaticMeshSpawner.generated.h"

class UInstancedStaticMeshComponent;
class UStaticMesh;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGSplineStaticMeshSpawner : public UGGSpawnerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Mesh;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInstancedStaticMeshComponent* InstancedStaticMeshComponent;
    
public:
    UGGSplineStaticMeshSpawner();

};

