#include "GGFactsDatabaseSystem.h"
#include "Net/UnrealNetwork.h"

UGGFactsDatabaseSystem::UGGFactsDatabaseSystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UGGFactsDatabaseSystem::UpdateFact(const UObject* WorldContext, FGameplayTag InFact, float InValue) {
}

void UGGFactsDatabaseSystem::RemoveFact(const UObject* WorldContext, FGameplayTag InFact) {
}

void UGGFactsDatabaseSystem::RemoveCallbackFromFactRemoved(const UObject* WorldContext, const FGameplayTag& InFact, FGGDelegateHandleWrapper InHandle) {
}

void UGGFactsDatabaseSystem::RemoveCallbackFromFactChanged(const UObject* WorldContext, const FGameplayTag& InFact, FGGDelegateHandleWrapper InHandle) {
}

void UGGFactsDatabaseSystem::RemoveCallbackFromFactAdded(const UObject* WorldContext, const FGameplayTag& InFact, FGGDelegateHandleWrapper InHandle) {
}

void UGGFactsDatabaseSystem::RemoveAllFromFactRemoved(const UObject* WorldContext, const FGameplayTag& InFact, const UObject* InObject) {
}

void UGGFactsDatabaseSystem::RemoveAllFromFactChanged(const UObject* WorldContext, const FGameplayTag& InFact, const UObject* InObject) {
}

void UGGFactsDatabaseSystem::RemoveAllFromFactAdded(const UObject* WorldContext, const FGameplayTag& InFact, const UObject* InObject) {
}

bool UGGFactsDatabaseSystem::IsFactTrue(const UObject* WorldContext, FGameplayTag InFact) {
    return false;
}

float UGGFactsDatabaseSystem::GetFactValue(const UObject* WorldContext, FGameplayTag InFact) {
    return 0.0f;
}

bool UGGFactsDatabaseSystem::DoesFactExists(const UObject* WorldContext, FGameplayTag InFact) {
    return false;
}

bool UGGFactsDatabaseSystem::DoesFactEquals(const UObject* WorldContext, FGameplayTag InFact, float InValue, float Precision) {
    return false;
}

FGGDelegateHandleWrapper UGGFactsDatabaseSystem::BindCallbackToFactRemoved(const UObject* WorldContext, const FGameplayTag& InFact, FGGFactChanged_Callback InCallback) {
    return FGGDelegateHandleWrapper{};
}

FGGDelegateHandleWrapper UGGFactsDatabaseSystem::BindCallbackToFactChanged(const UObject* WorldContext, const FGameplayTag& InFact, FGGFactChanged_Callback InCallback) {
    return FGGDelegateHandleWrapper{};
}

FGGDelegateHandleWrapper UGGFactsDatabaseSystem::BindCallbackToFactAdded(const UObject* WorldContext, const FGameplayTag& InFact, FGGFactChanged_Callback InCallback) {
    return FGGDelegateHandleWrapper{};
}

void UGGFactsDatabaseSystem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGFactsDatabaseSystem, Facts);
    DOREPLIFETIME(UGGFactsDatabaseSystem, FinishedDialogueBranches);
}


