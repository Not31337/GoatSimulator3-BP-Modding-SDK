#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GGNPCAnimInstance.h"
#include "GGNPCAnimInstanceAnimalProxy.h"
#include "GGNPCAnimInstance_Animal.generated.h"

class AGGNPC_Animal;

UCLASS(Blueprintable, NonTransient)
class GOAT2_API UGGNPCAnimInstance_Animal : public UGGNPCAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGGNPC_Animal* CachedNPC;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGGNPCAnimInstanceAnimalProxy Proxy;
    
public:
    UGGNPCAnimInstance_Animal();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetFootLocation(FGameplayTag NotifyTag) const;
    
};

