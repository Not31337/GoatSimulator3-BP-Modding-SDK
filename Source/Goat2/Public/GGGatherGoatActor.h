#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "CountNotificationParameters.h"
#include "GGInteractInterface.h"
#include "GatherGoatParameters.h"
#include "InviteNotificationParameters.h"
#include "GGGatherGoatActor.generated.h"

class AGGPlayerState;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGGatherGoatActor : public AActor, public IGGInteractInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GatherID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCreateGatherIDFromName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsCurrentlyGatheringGoats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGatherGoatsOnOverlap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGatherGoatParameters GatherGoatParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInviteNotificationParameters InviteNotificationParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowGoatCountNotification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCountNotificationParameters CountNotificationParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsForInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsCurrentlyInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireHold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequiredHoldDuration;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* OverlapComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<AGGPlayerState*> PlayersInOverlapBox;
    
public:
    AGGGatherGoatActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetGatherGoatOverlapComponent(UPrimitiveComponent* Component);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnAllGoatsGathered(const FString& DoneGatherID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAllPlayersReachedTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetRequiredHoldDuration();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetNPCInteractionChance();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText GetInviteTitle(AGGPlayerState* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText GetInviteBody(AGGPlayerState* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTag GetInteractNotificationTag();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetInteractNotificationID();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText GetGoatCountTitle(AGGPlayerState* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText GetGoatCountBody(AGGPlayerState* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetAutoInteractPastDuration();
    
    UFUNCTION(BlueprintCallable)
    bool GatherGoats(AGGPlayerState* FirstPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeInteractedWith(AActor* SourceActor);
    

    // Fix for true pure virtual functions not being implemented
};

