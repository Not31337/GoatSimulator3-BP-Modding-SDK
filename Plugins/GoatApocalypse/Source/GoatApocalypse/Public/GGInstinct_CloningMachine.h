#pragma once
#include "CoreMinimal.h"
#include "GGInstinct.h"
#include "Templates/SubclassOf.h"
#include "GGInstinct_CloningMachine.generated.h"

class AActor;
class AGGNPC_Animal;

UCLASS(Blueprintable)
class GOATAPOCALYPSE_API AGGInstinct_CloningMachine : public AGGInstinct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AGGNPC_Animal>> RhinoClasses;
    
    AGGInstinct_CloningMachine(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnActorCloned(AActor* Original, AActor* Clone);
    
};

