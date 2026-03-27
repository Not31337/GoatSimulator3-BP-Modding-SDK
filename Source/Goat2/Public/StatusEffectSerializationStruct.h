#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EStatusEffectTypes.h"
#include "StatusBlockRule.h"
#include "StatusEffectOverride.h"
#include "StatusEffectSerializationStruct.generated.h"

USTRUCT(BlueprintType)
struct FStatusEffectSerializationStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EStatusEffectTypes> StartingStatusEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EStatusEffectTypes> CanBeAffectedBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RelativeStatusLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneAttachName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStatusBlockRule> BlockRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStatusEffectOverride> StatusEffectOverrides;
    
    GOAT2_API FStatusEffectSerializationStruct();
};

