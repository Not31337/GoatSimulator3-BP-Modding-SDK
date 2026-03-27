#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "BTService_GGAddEffectSources.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTService_GGAddEffectSources : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SourceTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer EffectTags;
    
    UBTService_GGAddEffectSources();

};

