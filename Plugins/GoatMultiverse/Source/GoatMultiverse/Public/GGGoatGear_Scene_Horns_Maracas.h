#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GGGoatGear_Scene_Horns.h"
#include "RagdollStateChangeSettings.h"
#include "GGGoatGear_Scene_Horns_Maracas.generated.h"

class AActor;
class ACharacter;
class AController;
class AGGCharacter;
class AGGGoat;
class UAudioComponent;
class UDamageType;
class ULSCharacterMovementComponent;
class UPrimitiveComponent;
class USoundBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATMULTIVERSE_API UGGGoatGear_Scene_Horns_Maracas : public UGGGoatGear_Scene_Horns {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* WalkLoopSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* ActionSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRagdollHitImpulse;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* WalkAudioComponent;
    
public:
    UGGGoatGear_Scene_Horns_Maracas(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatStartedLicking(AGGGoat* GoatLicking);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatHeadbutting(AGGGoat* GoatHeadbutting, bool bHitSomething, const TArray<AActor*>& HeadbuttedActors, bool bIsChargeHeadbutt);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatBouncyJump(AGGGoat* GoatJumping, int32 JumpCount, FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterHasJumped(AGGCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void GoatTookDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void GoatRagdolled(ULSCharacterMovementComponent* MovementComp, ACharacter* RagdollingCharacter, const FRagdollStateChangeSettings& StateChangeSettings);
    
};

