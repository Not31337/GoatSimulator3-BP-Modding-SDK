#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GGMiniGamePlayerComp.generated.h"

class AGGGoat;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGMiniGamePlayerComp : public UActorComponent {
    GENERATED_BODY()
public:
    UGGMiniGamePlayerComp(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGGoat* GetOwnerGoat() const;
    
};

