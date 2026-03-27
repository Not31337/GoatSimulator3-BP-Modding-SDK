#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "GGGoatAbility.generated.h"

class AGGGoat;

UCLASS(Blueprintable)
class GOAT2_API UGGGoatAbility : public UGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGGoat* OwnerGoat;
    
public:
    UGGGoatAbility();

    UFUNCTION(BlueprintCallable)
    void TickAbility(float DeltaTime);
    
};

