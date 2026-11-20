#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GGMovingActorSpline_Prototype.generated.h"

class USplineComponent;
class USplineMeshComponent;
class UStaticMesh;

UCLASS(Blueprintable)
class GOATTHEMEPARK_API AGGMovingActorSpline_Prototype : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* Spline;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* SplineMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeshScale;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USplineMeshComponent*> SplineMeshes;
    
public:
    AGGMovingActorSpline_Prototype(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateSplineMeshes();
    
};

