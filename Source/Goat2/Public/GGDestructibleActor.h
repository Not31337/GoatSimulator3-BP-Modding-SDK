#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/StaticMeshActor.h"
#include "GameplayTagContainer.h"
#include "GGActorName.h"
#include "GGDestructibleInfo.h"
#include "GGDestructibleInterface.h"
#include "GGHeadbuttableObjectInterface.h"
#include "GGNamedActorInfo.h"
#include "GGNamedActorInterface.h"
#include "GGDestructibleActor.generated.h"

class AActor;
class AGGGoat;
class UDataTable;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGDestructibleActor : public AStaticMeshActor, public IGGDestructibleInterface, public IGGNamedActorInterface, public IGGHeadbuttableObjectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideDestructibleInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGDestructibleInfo DestructibleInfo;
    
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
    
    AGGDestructibleActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void ShatterActor(FVector Impulse);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetGoatSimName(const FText& NewName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RemoveGoatSimNameModifier(FGameplayTag ModifierTag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentActorName();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDestructibleDestroyed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ObjectWasHeadbutted(AGGGoat* HeadbuttingGoat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasShattered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetHasActorName();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetGoatSimName(bool WithStyling);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetFullGoatSimName(bool WithStyling);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeHeadbutted(AGGGoat* HeadbuttingGoat);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AddGoatSimNameModifier(FGameplayTag ModifierTag, const FText& OverrideText);
    

    // Fix for true pure virtual functions not being implemented
};

