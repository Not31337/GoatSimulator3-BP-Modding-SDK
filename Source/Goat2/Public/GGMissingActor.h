#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GGMissingActor.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class AGGMissingActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
    AGGMissingActor(const FObjectInitializer& ObjectInitializer);

};

