#pragma once
#include "CoreMinimal.h"
#include "Animation/PoseSnapshot.h"
#include "GameplayTagContainer.h"
#include "GGGoatGear_Scene_AltGoat.h"
#include "RagdollStateChangeSettings.h"
#include "GGGoatGear_Scene_AltGoat_Steve.generated.h"

class AActor;
class ACharacter;
class AGGCharacter;
class AGGGoat;
class AGGVehicle;
class APawn;
class UGGAlternativeGoatDataAsset;
class UGGGoatEmote;
class UGGGoatMovementComponent;
class ULSCharacterMovementComponent;
class UPhysicsConstraintComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGGoatGear_Scene_AltGoat_Steve : public UGGGoatGear_Scene_AltGoat {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MovementCueTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* RagdollMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseSnapshot RagdollMeshSnapshot;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsConstraintComponent* DerpyModePhysicsConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGGoatMovementComponent* GoatMovementComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* GoatMesh;
    
public:
    UGGGoatGear_Scene_AltGoat_Steve(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnStopRagdolling(bool bRagdollOnGround, ULSCharacterMovementComponent* MovementComp, ACharacter* SteveCharacter, const FRagdollStateChangeSettings& StateChangeSettings);
    
    UFUNCTION(BlueprintCallable)
    void OnSteveExitingVehicle(AGGCharacter* Character, AGGVehicle* Vehicle);
    
    UFUNCTION(BlueprintCallable)
    void OnSteveExitingFlyingBroom(AGGGoat* ExitedGoat, APawn* FlyingBroom);
    
    UFUNCTION(BlueprintCallable)
    void OnSteveEnteringVehicle(AGGCharacter* Character, AGGVehicle* Vehicle);
    
    UFUNCTION(BlueprintCallable)
    void OnSteveEnterFlyingBroom(AGGGoat* EnteringGoat, APawn* FlyingBroom);
    
    UFUNCTION(BlueprintCallable)
    void OnStartRidingCharacter(AGGCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnReleased(AActor* Steve, AActor* Catcher);
    
    UFUNCTION(BlueprintCallable)
    void OnRagdolling(ULSCharacterMovementComponent* MovementComp, ACharacter* SteveCharacter, const FRagdollStateChangeSettings& StateChangeSettings);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatCollisionStateUpdated(AGGCharacter* GoatCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnEmoting(AGGGoat* EmotingGoat, UGGGoatEmote* Emote);
    
    UFUNCTION(BlueprintCallable)
    void OnCatched(AActor* Steve, AActor* Catcher);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDerpyModeEnabled() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void EnableInitialDerpyMode(AGGGoat* InGoat, UGGAlternativeGoatDataAsset* NewAltGoat);
    
};

