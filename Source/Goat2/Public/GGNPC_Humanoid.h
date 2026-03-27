#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EAttachmentHandSlot.h"
#include "ECarryItemType.h"
#include "ECrowdTypes.h"
#include "EMoodChange.h"
#include "EMoods.h"
#include "ENPCInteractions.h"
#include "EPanicTypes.h"
#include "ERoamAfterDisturbed.h"
#include "ESameSocketAttach.h"
#include "GGHandIKOwnerInterface.h"
#include "GGNPC.h"
#include "MatElement.h"
#include "MoodSpeedElement.h"
#include "MoodTree.h"
#include "OnMoodChangedDelegate.h"
#include "PredeterminedElement.h"
#include "Templates/SubclassOf.h"
#include "WeightedElement_ActorAttachment.h"
#include "WeightedElement_Mood.h"
#include "GGNPC_Humanoid.generated.h"

class AActor;
class AGGAIController_Humanoid;
class AGGEnvironmentalBehaviorContainer;
class AGGNPCEvent;
class AGGNPCWaypoint;
class AGGNPC_Humanoid;
class UAnimInstance;
class UGGNPCAppearanceManager;
class UMaterialInterface;
class UObject;
class USkeletalMeshComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGNPC_Humanoid : public AGGNPC, public IGGHandIKOwnerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGNPCAppearanceManager* AppearanceManager;
    
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    //UStaticMeshComponent* Hair;
    
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    //USkeletalMeshComponent* UpperBody;
    
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    //USkeletalMeshComponent* LowerBody;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGenerateAppearanceOnSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GenerateAppearanceWith;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPredeterminedElement> PredeterminedElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetAppearanceToSetOnSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SpawnAppearanceSet;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OverrideAnimationBlueprint, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> OverrideAnimationBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentMood, meta=(AllowPrivateAccess=true))
    EMoods CurrentMood;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoodWhenDamagedDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bScaredWhenKnockedOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedElement_Mood> MoodChangeWhenDamaged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedElement_Mood> MoodChangeWhenDamagedAsCivilian;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InjectMoodTrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMoodTree> MoodTrees;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMoodChanged OnMoodChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGEnvironmentalBehaviorContainer* BehaviorDataContainer;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeepClaimedByWhenRoam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ERoamAfterDisturbed> ValidRoamingSwitchReasons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanInvestigateAsRoaming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanCharacterInteractAsRoaming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanLookAtAsRoaming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanChangeMoodAsRoaming;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentWaypoint, meta=(AllowPrivateAccess=true))
    AGGNPCWaypoint* CurrentWaypoint;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMatElement> DefaultHeadMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMatElement> DefaultHairMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMatElement> DefaultUpperBodyMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMatElement> DefaultLowerBodyMaterials;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UMaterialInterface*> SpecificHeadShockMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* HairShockMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* UpperBodyShockMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* LowerBodyShockMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* AccessoriesShockMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentEvent, meta=(AllowPrivateAccess=true))
    AGGNPCEvent* CurrentEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GetCrowdAnimations, meta=(AllowPrivateAccess=true))
    ECrowdTypes CurrentCrowdType;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanBeInEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGNPCEvent* CanOnlyJoinEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMoodSpeedElement> MoodSpeeds;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* RightHandAttachmentSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LeftHandAttachmentSlot;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ECarryItemType CarryItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RightHandSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LeftHandSocket;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EPanicTypes CurrentlyPanicType;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanPanic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPanicTypes> IgnoredPanicTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanCharacterInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ENPCInteractions> ValidInteractionTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ENPCInteractions> IgnoredInteractionTypes;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGAIController_Humanoid* HumanoidController;
    
public:
    AGGNPC_Humanoid(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StopPanicking();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartPanicking(EPanicTypes Type, FVector SourceLocation, AActor* SourceActor, bool bSkipVehicleCheck);
    
    UFUNCTION(BlueprintCallable)
    void SetInLoveWith(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentCrowdType(ECrowdTypes NewType);
    
    UFUNCTION(BlueprintCallable)
    void SetAngryWithTarget(AActor* Target, bool SetAsDamagedBy);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ReturnFromIdleNPCMode(bool AttemptToResetCollision);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetNPCInteraction(bool bForOtherToo);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetConversation(bool bForOtherToo, bool bStopCurrentVO, bool bStopHurt);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_OverrideAnimationBlueprint();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_GetCrowdAnimations();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentWaypoint();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentMood();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentEvent();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnAppearanceLoadedAndSet(AGGNPC_Humanoid* NPC);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void MoodChange(EMoodChange Direction, int32 ChanceToChange, TArray<EMoods> SkipMoods, AActor* ByActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingOverrideAnimBP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPanicking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHoldingFoodOrDrink() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisgusted() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    EPanicTypes GetPanicType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGAIController_Humanoid* GetHumanoidController();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGNPCEvent* GetCurrentEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECrowdTypes GetCurrentCrowdType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGEnvironmentalBehaviorContainer* GetBehaviorDataContainer() const;
    
    UFUNCTION(BlueprintCallable)
    void FleeFromLocation(FVector FleeFrom);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DetachHandSlot(bool DestroyActor, EAttachmentHandSlot HandSlot, bool TurnOnCollision, bool bForceCannotBecomeLostObject);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPSwitchedToRoaming();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    AActor* AttachStructToHand(FWeightedElement_ActorAttachment AttachmentStruct, ESameSocketAttach SameSocketAttachAction);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    AActor* AttachClassToHand_BP(TSubclassOf<AActor> ActorClassToAttach, EAttachmentHandSlot HandSlot, bool DropOnRagdoll, bool TakeDamage, FVector RelativeLocation, FRotator RelativeRotation, FVector ActorScale, UObject* MeshOverride, ECarryItemType CarryType, bool bCanBecomeLostObject, bool bCanDropOnStartle, ESameSocketAttach SameSocketAttachAction);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    AActor* AttachActorToHand_BP(AActor* ActorToAttach, EAttachmentHandSlot HandSlot, bool DropOnRagdoll, bool TakeDamage, FVector RelativeLocation, FRotator RelativeRotation, FVector ActorScale, ECarryItemType CarryType, bool bCanBecomeLostObject, bool bCanDropOnStartle, ESameSocketAttach SameSocketAttachAction);
    

    // Fix for true pure virtual functions not being implemented
};

