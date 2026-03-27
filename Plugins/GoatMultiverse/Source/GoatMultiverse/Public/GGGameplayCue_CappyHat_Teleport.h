#pragma once
#include "CoreMinimal.h"
#include "GameplayCueNotify_Actor.h"
#include "GGGameplayCue_CappyHat_Teleport.generated.h"

class AGGGoat;
class UCameraComponent;
class UCurveFloat;
class UParticleSystem;
class USoundBase;

UCLASS(Blueprintable)
class GOATMULTIVERSE_API AGGGameplayCue_CappyHat_Teleport : public AGameplayCueNotify_Actor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FieldOfViewCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* TeleportStartParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* TeleportStartSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* TeleportEndParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* TeleportEndSound;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* Camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGGoat* Goat;
    
public:
    AGGGameplayCue_CappyHat_Teleport(const FObjectInitializer& ObjectInitializer);

};

