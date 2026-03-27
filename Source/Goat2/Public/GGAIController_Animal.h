#pragma once
#include "CoreMinimal.h"
#include "GGAIController.h"
#include "GGAIController_Animal.generated.h"

class AGGNPC_Animal;

UCLASS(Blueprintable)
class GOAT2_API AGGAIController_Animal : public AGGAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGNPC_Animal* ControlledAnimal;
    
public:
    AGGAIController_Animal(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGNPC_Animal* GetControlledAnimal() const;
    
};

