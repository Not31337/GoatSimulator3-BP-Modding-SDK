#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnComponentStateChangedDelegate.h"
#include "GGWorldPersistenceComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGWorldPersistenceComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ComponentState, meta=(AllowPrivateAccess=true))
    uint8 ComponentState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnComponentStateChanged OnComponentStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, meta=(AllowPrivateAccess=true))
    FString Identifier;
    
public:
    UGGWorldPersistenceComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetComponentState_Internal(uint8 NewState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetComponentState(uint8 NewState, bool bSetPredictively);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ComponentState(uint8 PreviousState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetComponentState(bool& bIsInitialized);
    
};

