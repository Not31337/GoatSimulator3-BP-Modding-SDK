#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AttributeSet.h"
#include "GGGoatAttributeSet.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UGGGoatAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SpeedMultiplier, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData SpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GravityScale, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData GravityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GravityScale, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData RagdollMovementVelocity;
    
    UGGGoatAttributeSet();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_SpeedMultiplier(const FGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RagdollMovementVelocity(const FGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GravityScale(const FGameplayAttributeData& OldValue);
    
};

