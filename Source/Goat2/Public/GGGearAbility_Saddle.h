#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GGGearAbility.h"
#include "RagdollStateChangeSettings.h"
#include "GGGearAbility_Saddle.generated.h"

class AActor;
class ACharacter;
class AGGCharacter;
class AGGGoat;
class AGGVehicle;
class UGGGoatGear_Static_Saddle;
class ULSCharacterMovementComponent;

UCLASS(Blueprintable)
class GOAT2_API UGGGearAbility_Saddle : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrabRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AbominanaRiderInstinctTag;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanPickUpStacksOfGoats;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGCharacter* Rider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGGoat* RiderPlayerGoat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGGoatGear_Static_Saddle* SaddleGear;
    
public:
    UGGGearAbility_Saddle();

private:
    UFUNCTION(BlueprintCallable)
    void OnRiderPreCatched(bool bIsBeingCatched);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerRiderRagdoll(ULSCharacterMovementComponent* MovementComp, ACharacter* OwnerCharacter, const FRagdollStateChangeSettings& StateChangeSettings);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerOrRiderCatched(AActor* Owner, AActor* Catcher);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastClientsOnSaddle(AGGCharacter* Character, bool HasSetRagdoll);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastClientsOffSaddle(AGGCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void ClientsOnCollisionState(AGGCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void CharacterEnteringVehicle(AGGCharacter* Character, AGGVehicle* Vehicle);
    
};

