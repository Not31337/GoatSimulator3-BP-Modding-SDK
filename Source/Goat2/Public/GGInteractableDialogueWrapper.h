#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "GGInteractInterface.h"
#include "GGRadarInterface.h"
#include "RadarCoordinateData.h"
#include "RagdollStateChangeSettings.h"
#include "Templates/SubclassOf.h"
#include "GGInteractableDialogueWrapper.generated.h"

class ACharacter;
class AGGInteractableDialogueWrapper;
class AGGNPC;
class UBoxComponent;
class UGGDialogueDataAsset;
class UGGDialogueInstance;
class UGGSpeechBubbleComponent;
class ULSCharacterMovementComponent;
class ULocalPlayer;
class UPrimitiveComponent;
class USphereComponent;

UCLASS(Abstract, Blueprintable)
class GOAT2_API AGGInteractableDialogueWrapper : public AActor, public IGGInteractInterface, public IGGRadarInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* InteractionBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereForAutoDialogueStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGSpeechBubbleComponent* SpeechBubbleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadarCoordinateData DialogueIndicatorRadarData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFitOverlapBoxToBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionalBoundsExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Dialogue, meta=(AllowPrivateAccess=true))
    UGGDialogueDataAsset* Dialogue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Instance, meta=(AllowPrivateAccess=true))
    UGGDialogueInstance* DialogueInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGNPC* AttachedNPC;
    
public:
    AGGInteractableDialogueWrapper(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void ToggleDialogueIndicator(UGGDialogueInstance* Instance);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static AGGInteractableDialogueWrapper* SpawnDialogueAndAssignToActor(TSubclassOf<AGGInteractableDialogueWrapper> DialogueWrapperClass, UGGDialogueDataAsset* NewDialogue, AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    void SimulateInteraction(AActor* InteractingActor);
    
    UFUNCTION(BlueprintCallable)
    void SetDialogueIndicatorVisibility(bool bShouldBeVisible);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveSpeechBubbleForLocalPlayer(ULocalPlayer* LocalPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Instance();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Dialogue();
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnDialogueEnded(UGGDialogueInstance* Instance);
    
    UFUNCTION(BlueprintCallable)
    void OnAttachParentNPCPooled(AGGNPC* NPC, bool bWasPooled);
    
    UFUNCTION(BlueprintCallable)
    void OnAttachParentActorDestroyed(AActor* AttachParent);
    
    UFUNCTION(BlueprintCallable)
    void OnAttachedNPCRagdolled(ULSCharacterMovementComponent* MovementComp, ACharacter* RagdolledNPC, const FRagdollStateChangeSettings& StateChangeSettings);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AGGInteractableDialogueWrapper* FindInteractableDialogueWrapperActor(AActor* InActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddSpeechBubbleForNonPrimaryLocalPlayer(ULocalPlayer* LocalPlayer);
    

    // Fix for true pure virtual functions not being implemented
};

