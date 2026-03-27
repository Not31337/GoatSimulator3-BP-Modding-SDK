#pragma once
#include "CoreMinimal.h"
#include "Components/SplineMeshComponent.h"
#include "EGGSplineMeshSpawnMode.h"
#include "GGSpawnerInterface.h"
#include "GGSpline_SplineMeshSpawner.generated.h"

class USplineMeshComponent;
class UStaticMesh;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGSpline_SplineMeshSpawner : public UGGSpawnerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESplineMeshAxis::Type> MeshForwardAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGGSplineMeshSpawnMode SpawnMode;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USplineMeshComponent*> SplineMeshComponents;
    
public:
    UGGSpline_SplineMeshSpawner();

};

