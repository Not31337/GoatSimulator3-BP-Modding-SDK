#pragma once
#include "CoreMinimal.h"
#include "GGEventSpawner.h"
#include "WeightedElement_PerformerElement.h"
#include "GGEventSpawner_StreetPerformer.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGEventSpawner_StreetPerformer : public AGGEventSpawner {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* PerformerLocationComp;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedElement_PerformerElement> Performers;
    
    AGGEventSpawner_StreetPerformer(const FObjectInitializer& ObjectInitializer);

};

