#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilitySpec.h"
#include "GearSlot.generated.h"

class UGGGearSlotDefinition;
class UGGGoatGearInfoDataAsset;
class USceneComponent;

USTRUCT(BlueprintType)
struct GOAT2_API FGearSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGGoatGearInfoDataAsset* DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FGameplayAbilitySpecHandle AbilityHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGiveAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGGearSlotDefinition* Definition;
    
    FGearSlot();
};

