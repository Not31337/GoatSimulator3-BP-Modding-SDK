#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GGBRBSpawner.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGBRBSpawner : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* SpawnArea;
    
public:
    AGGBRBSpawner(const FObjectInitializer& ObjectInitializer);

};

