#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GGOnRepPoolTestActor.generated.h"

class UGGOnRepPoolingSystem;

UCLASS(Blueprintable)
class GOAT2_API AGGOnRepPoolTestActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BoolA, meta=(AllowPrivateAccess=true))
    bool bBoolA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BoolB, meta=(AllowPrivateAccess=true))
    bool bBoolB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RandomFloat, meta=(AllowPrivateAccess=true))
    float RandomFloat;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGOnRepPoolingSystem* PoolingSystem;
    
public:
    AGGOnRepPoolTestActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RandomFloat();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BoolB();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BoolA();
    
};

