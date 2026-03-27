#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GGGoatAbility.h"
#include "GGGoatAbility_Lick.generated.h"

class AGGCharacter;
class AGGGoat;
class AGGVehicle;
class UObject;
class UParticleSystem;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class GOAT2_API UGGGoatAbility_Lick : public UGGGoatAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartLocationBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TongueMaxLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LickDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LickTextFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LickedByTextFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LickSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LickHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartDistanceFromGoat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceFromGoat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawOverlapShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MouthParticleSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GameplayCuePickUpSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GameplayCueDropSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticlesMouth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticlesImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticlesPActorImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DroppedPActorNotifyRadius;
    
    UGGGoatAbility_Lick();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateLatestInstigator();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetLickedObject(UPrimitiveComponent* ClosestComponent, UObject* ClosestLickable, FName LickedBone);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastStoppedBeingLicked(UObject* LickedObject, AGGGoat* Goat);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetLickedObject(AGGGoat* Goat, UPrimitiveComponent* ClosestComponent, UObject* ClosestLickable, FName LickedBone);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteLick();
    
    UFUNCTION(BlueprintCallable)
    void CharacterEnterVehicle(AGGCharacter* Character, AGGVehicle* Vehicle);
    
};

