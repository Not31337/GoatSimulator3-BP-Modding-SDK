#pragma once
#include "CoreMinimal.h"
#include "JumpModifierSettings.generated.h"

USTRUCT(BlueprintType)
struct FJumpModifierSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreventRagdollOnLanding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreventTripleJumpModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBouncyJumpInsteadOfPerfectLanding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpZVelocity;
    
    GOAT2_API FJumpModifierSettings();
};

