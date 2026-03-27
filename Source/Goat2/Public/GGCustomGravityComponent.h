#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GGCustomGravityComponent.generated.h"

class AActor;
class UGGCustomGravityComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGCustomGravityComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float GravityForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MaxVelocityZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float GravityMultiplier;
    
    UGGCustomGravityComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void SetMaxVelocityZ(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetGravityMultiplier(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetGravityForce(float NewValue);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void EnableCustomGravity(float Duration, float Gravity, float MaxVelocityFromGravity);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DisableCustomGravity();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddGravityMultiplier(float NewValue);
    
public:
    UFUNCTION(BlueprintCallable)
    static UGGCustomGravityComponent* AddCustomGravityComponent(AActor* Owner, float Gravity, float MaxVelocityFromGravity, bool bStartEnabled, float Duration, float Multiplier);
    
};

