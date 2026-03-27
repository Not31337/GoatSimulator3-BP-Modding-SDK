#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GGDelegateHandleWrapper.h"
#include "GGFact.h"
#include "GGFactChanged_CallbackDelegate.h"
#include "GGFactsDatabaseSystem.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGFactsDatabaseSystem : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FGGFact> Facts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FName> FinishedDialogueBranches;
    
public:
    UGGFactsDatabaseSystem(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void UpdateFact(const UObject* WorldContext, FGameplayTag InFact, float InValue);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void RemoveFact(const UObject* WorldContext, FGameplayTag InFact);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void RemoveCallbackFromFactRemoved(const UObject* WorldContext, const FGameplayTag& InFact, FGGDelegateHandleWrapper InHandle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void RemoveCallbackFromFactChanged(const UObject* WorldContext, const FGameplayTag& InFact, FGGDelegateHandleWrapper InHandle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void RemoveCallbackFromFactAdded(const UObject* WorldContext, const FGameplayTag& InFact, FGGDelegateHandleWrapper InHandle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void RemoveAllFromFactRemoved(const UObject* WorldContext, const FGameplayTag& InFact, const UObject* InObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void RemoveAllFromFactChanged(const UObject* WorldContext, const FGameplayTag& InFact, const UObject* InObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void RemoveAllFromFactAdded(const UObject* WorldContext, const FGameplayTag& InFact, const UObject* InObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsFactTrue(const UObject* WorldContext, FGameplayTag InFact);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static float GetFactValue(const UObject* WorldContext, FGameplayTag InFact);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool DoesFactExists(const UObject* WorldContext, FGameplayTag InFact);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool DoesFactEquals(const UObject* WorldContext, FGameplayTag InFact, float InValue, float Precision);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static FGGDelegateHandleWrapper BindCallbackToFactRemoved(const UObject* WorldContext, const FGameplayTag& InFact, FGGFactChanged_Callback InCallback);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static FGGDelegateHandleWrapper BindCallbackToFactChanged(const UObject* WorldContext, const FGameplayTag& InFact, FGGFactChanged_Callback InCallback);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static FGGDelegateHandleWrapper BindCallbackToFactAdded(const UObject* WorldContext, const FGameplayTag& InFact, FGGFactChanged_Callback InCallback);
    
};

