#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_GGPlaySound.generated.h"

class USoundBase;

UCLASS(Blueprintable)
class GOAT2_API UBTTask_GGPlaySound : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SoundEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AttachedToNPC;
    
public:
    UBTTask_GGPlaySound();

};

