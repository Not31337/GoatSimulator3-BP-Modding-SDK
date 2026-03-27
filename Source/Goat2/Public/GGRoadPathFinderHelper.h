#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GGRoadPathFinderHelper.generated.h"

class USceneComponent;
class USplineComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGRoadPathFinderHelper : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* Route;
    
    AGGRoadPathFinderHelper(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void CalculateRoadPath() const;
    
};

