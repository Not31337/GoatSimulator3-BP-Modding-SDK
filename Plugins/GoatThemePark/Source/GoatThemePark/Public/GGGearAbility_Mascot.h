#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "PerPlatformProperties.h"
#include "PerPlatformProperties.h"
#include "GameplayTagContainer.h"
#include "GGEffectSpawnHolder.h"
#include "GGGearAbility.h"
#include "GGTraceParams.h"
#include "Templates/SubclassOf.h"
#include "GGGearAbility_Mascot.generated.h"

class AActor;
class AGGGoat;
class AGGPhysicsActor;
class UAnimMontage;
class UGGUserWidget;
class USoundBase;
class UStaticMesh;

UCLASS(Blueprintable)
class GOATTHEMEPARK_API UGGGearAbility_Mascot : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UStaticMesh>> PlushieMesesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGPhysicsActor> PlushiePActorClass;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformInt MaxSpawnedPlushies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaunchImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaunchAngularImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HandSpawnSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> ThrowMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PostLoopSectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGTraceParams AimTraceParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AimCameraRelativeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimCameraBlendSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimCameraDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClientAuthorityDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGUserWidget> CrosshairWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrosshairSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* StartAimingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGEffectSpawnHolder ThrowEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UStaticMesh>> TrashCanMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MascotHeadshotInstinctTag;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformFloat HeadshotRadius;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HeldPlushiPActor, meta=(AllowPrivateAccess=true))
    AGGPhysicsActor* HeldPActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPhysicsActor* HeldTrashCan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UAnimMontage* ActiveMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGUserWidget* Crosshair;
    
public:
    UGGGearAbility_Mascot();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnTrashCanHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_HeldPlushiPActor();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEffectSourceChanged(FGameplayTag EffectTag, bool IsAdded);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastTriggerInstinct(AGGGoat* InstinctOwner);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AnimNotify_ReleasePlushie();
    
};

