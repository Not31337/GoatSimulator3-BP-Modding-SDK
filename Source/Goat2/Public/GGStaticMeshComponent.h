#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/StaticMeshComponent.h"
#include "GameplayTagContainer.h"
#include "GGActorName.h"
#include "GGHeadbuttableObjectInterface.h"
#include "GGLickableActorInterface.h"
#include "GGMeshComponentInterface.h"
#include "GGNamedActorInfo.h"
#include "GGNamedActorInterface.h"
#include "GGStaticTakeDamageDelegate.h"
#include "ImpulseDamageEvent.h"
#include "OnActorLickDroppedDelegate.h"
#include "OnActorLickedDelegate.h"
#include "OnGGStaticMeshHeadbuttedDelegate.h"
#include "OnGGStaticMeshLickDroppedDelegate.h"
#include "OnGGStaticMeshLickedDelegate.h"
#include "OnTurnedPhysActorDelegate.h"
#include "PhysicsActorState.h"
#include "Templates/SubclassOf.h"
#include "GGStaticMeshComponent.generated.h"

class AActor;
class AController;
class AGGGoat;
class AGGPhysicsActor;
class AGGPhysicsActor_Base;
class UDamageType;
class UDataTable;
class UMeshComponent;
class UStaticMesh;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGStaticMeshComponent : public UStaticMeshComponent, public IGGMeshComponentInterface, public IGGHeadbuttableObjectInterface, public IGGNamedActorInterface, public IGGLickableActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OnPhysicsActorStateUpdate, meta=(AllowPrivateAccess=true))
    FPhysicsActorState PhysicsActorState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeLicked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bCanBecomePhysicsActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* OverriddenPActorMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRetainMaterialsAsPActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGPhysicsActor> PhysicsActorClassToBecome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBecomePhysicsActorByDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBecomePhysicsActorByActorDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBecomePhysicsActorByImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBecomePhysicsActorByGoatRagdoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBecomePhysicsActorByActorImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MomentumThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanGetStatusEffects;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAngularImpulse;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTurnedPhysActor OnTurnedPhysActor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGStaticTakeDamage GGStaticTakeDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGGStaticMeshHeadbutted OnGGStaticMeshHeadbutted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGGStaticMeshLicked OnGGStaticMeshLicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGGStaticMeshLickDropped OnGGStaticMeshLickDropped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActorLicked OnActorLicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActorLickDropped OnActorLickDropped;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentActorName, meta=(AllowPrivateAccess=true))
    FGGActorName CurrentActorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGNamedActorInfo DefaultActorNameInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* NameModifierTable;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideMeshNameInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGNamedActorInfo ActorNameInfo;
    
    UGGStaticMeshComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldDisplayNameOnRepel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetGoatSimName(const FText& NewName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RemoveGoatSimNameModifier(FGameplayTag ModifierTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool PrepareForLick();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OnPhysicsActorStateUpdate();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentActorName();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBecamePhysicsActorBlueprint(AGGPhysicsActor* NewPhysicsActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ObjectWasHeadbutted(AGGGoat* HeadbuttingGoat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBecomePhysicsActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetLickInfo(FVector LickLocation, FName& BoneName, FRotator& MeshLickRotation, FVector& RelativeLickLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UMeshComponent* GetLickableActorMeshComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetHasActorName();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetGoatSimName(bool WithStyling);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetFullGoatSimName(bool WithStyling);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ComponentTakeDamage(float DamageAmount, const FImpulseDamageEvent& ImpulseDamageEvent, AController* EventInstigator, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeLicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeHeadbutted(AGGGoat* HeadbuttingGoat);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBecomePActorByGoatRagdoll();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AGGPhysicsActor_Base* BecomePhysicsActor(FVector Impulse);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AddGoatSimNameModifier(FGameplayTag ModifierTag, const FText& OverrideText);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActorWasLicked(AGGGoat* LickingGoat);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActorTakeDamageWithEvent(float DamageAmount, FVector InImpulse, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActorTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActorStoppedBeingLicked(AGGGoat* LickingGoat);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActorOnHitDelegate(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    

    // Fix for true pure virtual functions not being implemented
};

