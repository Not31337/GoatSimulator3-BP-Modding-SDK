#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Pawn.h"
#include "GameplayTagContainer.h"
#include "EGender.h"
#include "GGHeadbuttableObjectInterface.h"
#include "GGInteractInterface.h"
#include "GGLickableActorInterface.h"
#include "GGNPCInfo.h"
#include "GGTutorialInterface.h"
#include "GGVehicleCamerBlend.h"
#include "GGVehicleInterface.h"
#include "LoadedAppearancePart.h"
#include "RagdollStateChangeSettings.h"
#include "EGGRideSeatCameraMode.h"
#include "GGAchievementCompleted_DelegateDelegate.h"
#include "GGPlayerRideSeat_DelegateDelegate.h"
#include "GGRideSeatPassengerChanged_DelegateDelegate.h"
#include "GGRideSeat_DelegateDelegate.h"
#include "OnRideSeatAbilityDown_DelegateDelegate.h"
#include "RideSeatAssignNpcDelegateDelegate.h"
#include "GGRideSeat.generated.h"

class AActor;
class ACharacter;
class AGGCharacter;
class AGGGoat;
class AGGNPC;
class AGGNPC_Humanoid;
class AGGPhysicsActor_Base;
class AGGPlayerController;
class AGGRideSeat;
class AGGRollercoasterTrainCar;
class UBillboardComponent;
class UBoxComponent;
class UCameraComponent;
class UGGAlternativeGoatDataAsset;
class UGGLoadNPCAppearance;
class UGGRideSeatPlayerAnimation;
class ULSCharacterMovementComponent;
class UMaterialInterface;
class UPhysicsConstraintComponent;
class USkeletalMeshComponent;
class USoundBase;
class USoundMix;
class USpringArmComponent;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class GOATTHEMEPARK_API AGGRideSeat : public APawn, public IGGLickableActorInterface, public IGGHeadbuttableObjectInterface, public IGGVehicleInterface, public IGGInteractInterface, public IGGTutorialInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SeatMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* FastenerMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* OverlapVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* NpcHead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* NpcUpperBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* NpcLowerBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* NpcHair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> Accessories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* ReleaseLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpringArmComponent* SpringArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* Camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LickDistanceToRemoveActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttachActorsOnOverlap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketPActorAttachBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketFastenerAttachment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayReattachActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FastenerChangeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideFastener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SoundFastenerOpened;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SoundFastenerClosed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AGGPhysicsActor_Base>> RestrictedPhysicsActorClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UStaticMesh>> RestrictedPhysicsActorsMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> SeatMaterialVariations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartOccupied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGender StartingNpcGender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StartingNpcAreaTag;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGRideSeatPassengerChanged_Delegate OnPassengerChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGRideSeat_Delegate OnFastenerChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWeldToAttachParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketGoatPassenger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EjectionForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomSpinForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldTimeForEnteringAsPassenger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PlayerInteractionPrompt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UGGRideSeatPlayerAnimation> PlayerAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundMix> SoundMixModifierWhileRiding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEverToggleOnAffectNavigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAttachParentBoundsForFindingExitLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGVehicleCamerBlend EnterVehicleCameraBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGGRideSeatCameraMode CameraMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxThirdPersonCameraDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinThirdPersonCameraDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReferenceCapsuleHalfHeightForMaxThirdPersonCameraDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThirdPersonCameraDistanceChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeepRollAtZeroInFirstPerson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeepRollAtZeroInThirdPerson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLimitFirstPersonCameraRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator MinFirstPersonCameraRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator MaxFirstPersonCameraRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToRePositionFirstPersonCamera;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGPlayerRideSeat_Delegate OnPlayerEnteredRideSeat;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGPlayerRideSeat_Delegate OnPlayerExitedRideSeat;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGAchievementCompleted_Delegate OnAchievementCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRideSeatAbilityDown_Delegate OnRideSeatAbilityDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TutorialText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TutorialTextNoFastener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NpcInfo, meta=(AllowPrivateAccess=true))
    FGGNPCInfo NpcInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PhysicsActor, meta=(AllowPrivateAccess=true))
    AGGPhysicsActor_Base* PhysicsActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsFastened, meta=(AllowPrivateAccess=true))
    bool bIsFastened;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGLoadNPCAppearance* LoadNPCAppearance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* RecentlyReleasedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGGoat*> LickedBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGNPC_Humanoid* AssignedNpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPhysicsConstraintComponent*> PhysicsConstraintsWeldParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SeatMaterial, meta=(AllowPrivateAccess=true))
    UMaterialInterface* SeatMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Driver, meta=(AllowPrivateAccess=true))
    AGGGoat* GoatDriver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPhysicsConstraintComponent*> PhysicsConstraints;
    
    AGGRideSeat(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UnassignNPC();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SpawnNpcInSeat(FGameplayTag AreaTag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SetIsSeatFastened(bool bShouldBeFastened);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerToggleSeatFastener();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    AGGPhysicsActor_Base* RemovePhysicsActor();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    AGGNPC* RemoveNPC(bool bRagdolled);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    AActor* RemoveActor(bool bRagdolledIfCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SeatMaterial();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PhysicsActor();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NpcInfo();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsFastened();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Driver(AGGGoat* PreviousDriver);
    
    UFUNCTION(BlueprintCallable)
    void OnNpcAppearanceLoaded(const TArray<FLoadedAppearancePart>& AppearanceParts, UMaterialInterface* SkinMaterial);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLocalPlayerPressedHeadbuttButton(AGGPlayerController* PlayerController);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnGoatTeleported(AGGCharacter* Character, const FTransform& OldTransform);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnAttachParentCharacterUnRagdolled(bool bRagdollOnGround, ULSCharacterMovementComponent* MovementComp, ACharacter* UnRagdolledCharacter, const FRagdollStateChangeSettings& StateChangeSettings);
    
    UFUNCTION(BlueprintCallable)
    void OnAttachParentCharacterRagdolled(ULSCharacterMovementComponent* MovementComp, ACharacter* RagdollingCharacter, const FRagdollStateChangeSettings& StateChangeSettings);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAttachedGoatRagdolled(ULSCharacterMovementComponent* MovementComp, ACharacter* RagdollingCharacter, const FRagdollStateChangeSettings& StateChangeSettings);
    
    UFUNCTION(BlueprintCallable)
    void OnAltGoatChanged(AGGGoat* Goat, UGGAlternativeGoatDataAsset* NewAltGoat);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayFastenerChangedStateFVX(bool bClosed);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastGoatExitedVehicle(AGGGoat* Goat, FVector Impulse);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastGoatEnteredVehicle(AGGGoat* Goat);
    
public:
    UFUNCTION(BlueprintCallable)
    void LostSignificance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPhysicsActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPassenger() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAssignedNpc() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetReleaseTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGPhysicsActor_Base* GetPhysicsActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGGoat* GetGoatDriver() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGNPC_Humanoid* GetAssignedNpc() const;
    
    UFUNCTION(BlueprintCallable)
    void GainedSignificance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<AGGRideSeat*> FindAllRideSeatsOnTrain(const AGGRollercoasterTrainCar* InTrain);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<AGGRideSeat*> FindAllRideSeatsOnActor(const AActor* InActor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool AttachPhysicsActor(AGGPhysicsActor_Base* PActor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool AttachNPC(AGGNPC_Humanoid* NPC);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool AttachActor(AActor* Actor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AssignNPC(AGGNPC_Humanoid* NPC, float AssignTime, FRideSeatAssignNpcDelegate OnReachedSeatOrTimerExpired);
    

    // Fix for true pure virtual functions not being implemented
protected:
    UFUNCTION()
    void OnRep_Passengers(const TArray<AGGGoat*>& PreviousPassengers) override PURE_VIRTUAL(OnRep_Passengers,);
    
};

