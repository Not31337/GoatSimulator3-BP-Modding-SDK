#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "QuestReward.h"
#include "GGMicroEventBase.generated.h"

class AGGPlayerController;

UCLASS(Blueprintable)
class GOAT2_API AGGMicroEventBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CompletionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestReward Reward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MicroEventIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SplashNotificationTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SplashNotificationTitle;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<AGGPlayerController*> LocalPlayersThatCompletedEventThisSession;
    
public:
    AGGMicroEventBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnEventCompleted(AGGPlayerController* CompletingPlayer);
    
    UFUNCTION(BlueprintCallable)
    void CompleteEventForPlayer(AGGPlayerController* CompletingPlayer);
    
    UFUNCTION(BlueprintCallable)
    void CompleteEvent(AGGPlayerController* CompletingPlayer);
    
};

