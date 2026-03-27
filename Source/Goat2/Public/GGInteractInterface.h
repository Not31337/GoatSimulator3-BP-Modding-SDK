#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "GGInteractInterface.generated.h"

class AActor;
class AGGPlayerController;

UINTERFACE(Blueprintable)
class GOAT2_API UGGInteractInterface : public UInterface {
    GENERATED_BODY()
};

class GOAT2_API IGGInteractInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool StartHoldServer();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool StartHold();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldShowInteractHintOnMobile() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldHideInteractHint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAsTargetedInteractable(AGGPlayerController* InteractingPlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemovedAsTargetedInteractable(AGGPlayerController* InteractingPlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool InteractClient(AActor* SourceActor, float HeldFor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Interact(AActor* SourceActor, float HeldFor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetRequiredHoldDuration();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetNPCRecentInteractDelay();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetNPCInteractionChance();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetInteractTextTitle(AGGPlayerController* InteractingPlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetInteractTextBody(AGGPlayerController* InteractingPlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTag GetInteractNotificationTag();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetInteractNotificationID();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetAutoInteractPastDuration();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool EndHoldServer(float HeldFor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool EndHold(float HeldFor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeInteractedWithAsRagdoll() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeInteractedWith(AActor* SourceActor);
    
};

