#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Pawn.h"
#include "Engine/NetSerialization.h"
#include "GameplayTagContainer.h"
#include "ForceReleaseCatchedActor_SignatureDelegate.h"
#include "GGCatchOptions.h"
#include "GGCatchableInterface.h"
#include "GGHeadbuttableObjectInterface.h"
#include "GGInteractInterface.h"
#include "GGLickableActorInterface.h"
#include "GGNamedActorInterface.h"
#include "GGReleaseOptions.h"
#include "GGSmoothNetInterpolate.h"
#include "GGVehicleCamerBlend.h"
#include "GGVehicleInterface.h"
#include "MenuNavigationContext.h"
#include "OnActorCatched_SignatureDelegate.h"
#include "OnActorPreScaled_SignatureDelegate.h"
#include "OnActorReleased_SignatureDelegate.h"
#include "PActorImpactSettings.h"
#include "RagdollStateChangeSettings.h"
#include "VehicleCrashSound.h"
#include "EGGBroomAnimType.h"
#include "GGGoatBroom_DelegateDelegate.h"
#include "GGOnBroomSimulatePhyiscsChanged_DelegateDelegate.h"
#include "GGFlyingBroom.generated.h"

class AActor;
class ACharacter;
class AGGCharacter;
class AGGGoat;
class UAudioComponent;
class UCameraComponent;
class UGGAlternativeGoatDataAsset;
class UGGDynamicAssetHoldingComponent;
class UGGFlyingBroomMovement;
class ULSCharacterMovementComponent;
class UNiagaraComponent;
class UPhysicsAsset;
class USkeletalMeshComponent;
class USpringArmComponent;

UCLASS(Blueprintable)
class GEARPACK_MAGIC_API AGGFlyingBroom : public APawn, public IGGInteractInterface, public IGGLickableActorInterface, public IGGHeadbuttableObjectInterface, public IGGCatchableInterface, public IGGVehicleInterface, public IGGNamedActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGGoatBroom_Delegate OnGoatEnterBroom;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGGoatBroom_Delegate OnGoatExitBroom;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActorPreScaled_Signature OnActorPreScaled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActorCatched_Signature OnActorCatched;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActorReleased_Signature OnActorReleased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FForceReleaseCatchedActor_Signature OnForceReleaseCatchedActor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* OurCatcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SoonToBeCatcher;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* BroomMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpringArmComponent* SpringArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* Camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGDynamicAssetHoldingComponent* DynamicAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* TrailParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* PassiveSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGFlyingBroomMovement* BroomMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* HonkAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* CrashAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* BrakeAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGSmoothNetInterpolate SmoothNetInterpolate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldTimeForPuttingBroomAway;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldTimeForEnteringAsPassenger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DriverAttachSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PassengerAttachSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GracePeriodForThrowingOffPlayersAfterEnteringBroom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EjectionForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomSpinForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* RagdollPhysicsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpulseMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SelfSpinPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGVehicleCamerBlend CameraBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxCameraDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinCameraDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraDistanceChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoostDeltaFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FovEaseBlendExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FovBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EnterSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ExitSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPActorImpactSettings> PActorImpactParticleRanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVehicleCrashSound> VehicleCrashSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TutorialTextPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TutorialTextConsole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bCanBeInteractedWith;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ShouldSimulate, meta=(AllowPrivateAccess=true))
    bool bShouldSimulate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGOnBroomSimulatePhyiscsChanged_Delegate OnBroomSimulatePhysicsChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Driver, meta=(AllowPrivateAccess=true))
    AGGGoat* Driver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Passenger, meta=(AllowPrivateAccess=true))
    AGGGoat* Passenger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<AGGGoat*> LickedBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* DefaultPhysicsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ActiveAnimation, meta=(AllowPrivateAccess=true))
    EGGBroomAnimType ActiveAnimation;
    
    AGGFlyingBroom(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerSendMovementUpdate(FVector_NetQuantize Location, FVector_NetQuantize Velocity, FRotator Rotation, float InputThrottle);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerPutBroomAway();
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerPlayHonkSound();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerExitVehicleAsDriver(FVector Impulse);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerEjectEveryoneAndStartSimulate();
    
protected:
    UFUNCTION(BlueprintCallable)
    void PutBroomAway();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_ShouldSimulate();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Passengers(const TArray<AGGGoat*>& PreviousPassengers);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Passenger(AGGGoat* PreviousPassenger);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Driver(AGGGoat* PreviousDriver);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveAnimation(EGGBroomAnimType OldAnimation);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMenuOpened(FGameplayTag InMenuTag, FMenuNavigationContext Context);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatTeleported(AGGCharacter* Character, const FTransform& OldTransform);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatRagdolled(ULSCharacterMovementComponent* MovementComp, ACharacter* RagdollingCharacter, const FRagdollStateChangeSettings& StateChangeSettings);
    
    UFUNCTION(BlueprintCallable)
    void OnAltGoatChanged(AGGGoat* Goat, UGGAlternativeGoatDataAsset* NewAltGoat);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastStartSimulatingAndAddImpulse(FVector_NetQuantize LinearImpulse, FVector_NetQuantize AngularImpulse);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastReleaseCatchedActor(const FVector& ReleaseLocation, const FGGReleaseOptions& Options);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayHonkSound();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastGoatExitedVehicle(AGGGoat* Goat, bool bWasDriver, FVector Impulse);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastGoatEnteredVehicle(AGGGoat* Goat, bool bIsDriver);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastCrashSound(AActor* Actor, float ImpactSize);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastCatchActor(AActor* Catcher, const FGGCatchOptions& Options);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastBroomWasRecalled();
    

    // Fix for true pure virtual functions not being implemented
};

