#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GGIcePathPrototype.generated.h"

class UGGIceSplineMeshComponent;
class UMaterialInterface;
class USceneComponent;
class USplineComponent;
class UStaticMesh;

UCLASS(Blueprintable)
class GOAT2_API AGGIcePathPrototype : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* Spline;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* PathMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* IceMaterial;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGGIceSplineMeshComponent*> SplineMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<int32, UGGIceSplineMeshComponent*> SplineMeshComponentsMap;
    
public:
    AGGIcePathPrototype(const FObjectInitializer& ObjectInitializer);

};

