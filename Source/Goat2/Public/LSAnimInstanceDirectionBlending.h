#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimInstance.h"
#include "DirectionBlendingProxy.h"
#include "LSDirectionBlend.h"
#include "LSAnimInstanceDirectionBlending.generated.h"

UCLASS(Blueprintable, NonTransient)
class GOAT2_API ULSAnimInstanceDirectionBlending : public UAnimInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDirectionBlendingProxy Proxy;
    
public:
    ULSAnimInstanceDirectionBlending();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDirectionWeightAsString(bool bCompact) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLSDirectionBlend CalculateDirectionWeights(const FRotator& CharacterRotation, const FVector& CharacterVelocity);
    
};

