#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "EApplicationMethod.h"
#include "EStatusEffectTypes.h"
#include "OnActorGotNewStatusEffectDelegate.h"
#include "OnActorLostStatusEffectDelegate.h"
#include "StatusBlockRule.h"
#include "StatusEffectOverride.h"
#include "StatusShapeData.h"
#include "Templates/SubclassOf.h"
#include "GGStatusEffectManager.generated.h"

class AActor;
class AGGCharacter;
class AGGStatusEffectBase;
class UMaterialInterface;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGStatusEffectManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanGetStatusEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEvenIfTooSmall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreventStatusWhenAttachedToNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreventStatusWhenAttachedToVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanTakeStatusEffectDamage;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowAllShapes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEditStatusEffectOverrides;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultShapeSizeMulti;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ParticleScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EStatusEffectTypes> StartingStatusEffects;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EStatusEffectTypes> CanBeAffectedBy;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RelativeStatusLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneAttachName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStatusBlockRule> BlockRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStatusEffectOverride> StatusEffectOverrides;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActorGotNewStatusEffect OnActorGotNewStatusEffect;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActorLostStatusEffect OnActorLostStatusEffect;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGStatusEffectBase*> MaterialChangingEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGStatusEffectBase* CurrentMatChangeEffect;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanGetBurnt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* BurntMaterialOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SizzlingDurationOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasBeenBurnt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprayedWithWaterTimestamp;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGCharacter* OwnerCharacter;
    
public:
    UGGStatusEffectManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCanTakeStatusEffectDamage(bool bNewCanTakeDamage);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCanGetStatusEffects(bool bNewCanGetSE);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveStatusEffect(EStatusEffectTypes TypeToRemove);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool RemoveParticlularStatusEffect(AGGStatusEffectBase* StatusEffectToRemove);
    
    UFUNCTION(BlueprintCallable)
    void NotifyCollision(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    AGGStatusEffectBase* NewStatusEffect(EStatusEffectTypes TypeToCreate, EApplicationMethod ApplicationMethod, AActor* SpreadFrom, TSubclassOf<AGGStatusEffectBase> StatusEffectClass, AGGStatusEffectBase* SpreadFromStatus);
    
    UFUNCTION(BlueprintCallable)
    bool HasStatusEffectByType(EStatusEffectTypes TypeToCheck);
    
    UFUNCTION(BlueprintCallable)
    bool HasStatusEffectByClass(TSubclassOf<AGGStatusEffectBase> StatusEffectClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasInitManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGGStatusEffectBase*> GetStatusEffects() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FStatusEffectOverride> GetStatusEffectOverrides() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetParticleScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FStatusShapeData GetGeneratedSphereOverlapShape() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FStatusShapeData GetGeneratedOverlapShape() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCanTakeStatusEffectDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EStatusEffectTypes> GetCanBeAffectedBy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetBoneAttachName() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ClearStatusEffects();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool CanGetStatusEffects() const;
    
};

