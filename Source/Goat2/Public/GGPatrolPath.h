#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GGPatrolPath.generated.h"

class USceneComponent;
class USplineComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGPatrolPath : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* Spline;
    
public:
    AGGPatrolPath(const FObjectInitializer& ObjectInitializer);

};

