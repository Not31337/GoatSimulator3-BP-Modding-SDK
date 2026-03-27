#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionTypes.h"
#include "GGAIController.h"
#include "InteractionCooldownElement.h"
#include "StartleDetailsSettings.h"
#include "GGAIController_Humanoid.generated.h"

class AActor;
class AGGGoat;
class AGGNPC;
class AGGNPCEvent;
class AGGNPC_Humanoid;
class UAISenseConfig_Sight;
class UGGNPCInteractDataAsset;
class UGGNPCManager;

UCLASS(Blueprintable)
class GOAT2_API AGGAIController_Humanoid : public AGGAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SightRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoseSightRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PeripheralVisionAngleDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGNPCInteractDataAsset* InteractDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartleDetailsSettings PanickedNPCStartleSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartleDetailsSettings PassedOutNPCStartleSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartleDetailsSettings BurningActorStartleSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartleDetailsSettings DangerousObjectStartleSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartleDetailsSettings BraceForImpactStartleSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BraceForImpactDotCompare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChanceToBraceForImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForgetBraceIgnoreAfter;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AGGGoat*, float> IgnoreGoatsForBrace;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGNPCManager* NPCManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAISenseConfig_Sight* SightConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInteractionCooldownElement> InteractionCooldowns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AGGNPC*, float> RecentlySeenPukingNPCs;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGNPC_Humanoid* ControlledHumanoid;
    
public:
    AGGAIController_Humanoid(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void TargetPerceptionUpdated(AActor* UpdatedActor, FAIStimulus Stimulus);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSightEnabled(bool bNewEnabled);
    
private:
    UFUNCTION(BlueprintCallable)
    void PerceptionUpdated(const TArray<AActor*>& UpdatedActors);
    
    UFUNCTION(BlueprintCallable)
    void NPCPerceptionUpdated(AGGNPC_Humanoid* UpdatedNPC, FAIStimulus Stimulus);
    
public:
    UFUNCTION(BlueprintCallable)
    bool JoinEvent(AGGNPCEvent* EventToStart, bool CalledFromEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSightEnabled();
    
private:
    UFUNCTION(BlueprintCallable)
    void GoatPerceptionUpdated(AGGGoat* UpdatedGoat, FAIStimulus Stimulus);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    AGGNPCEvent* GetCurrentEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGNPC_Humanoid* GetControlledHumanoid() const;
    
    UFUNCTION(BlueprintCallable)
    void AbortEvent(bool CalledFromEvent);
    
};

