#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GGGearAbility.h"
#include "GGGearAbility_ElfHat.generated.h"

class AGGElfHat_Snowball;
class UGGAlternativeGoatDataAsset;

UCLASS(Abstract, Blueprintable)
class GOAT2_API UGGGearAbility_ElfHat : public UGGGearAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AGGElfHat_Snowball> SnowballClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LaunchGameplayCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalLaunchAngleOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UGGAlternativeGoatDataAsset>, float> AltGoatAngleOffsets;
    
public:
    UGGGearAbility_ElfHat();

};

