#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "StartleDetailsSettings.h"
#include "GGBaaAbilityData.generated.h"

class UAnimMontage;
class USoundBase;

UCLASS(Blueprintable)
class GOAT2_API UGGBaaAbilityData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSoftObjectPtr<UAnimMontage>> AltGoatBaaMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSoftObjectPtr<USoundBase>> AltGoatBaaSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FStartleDetailsSettings> AltGoatStartleSettings;
    
    UGGBaaAbilityData();

};

