#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EApplicationMethod.h"
#include "EQueueDirections.h"
#include "EStatusEffectTypes.h"
#include "GGStatusEffectInterface.h"
#include "Templates/SubclassOf.h"
#include "WeightedElement_ActorAttachment.h"
#include "GGStreetStall.generated.h"

class AGGNPCEvent_StreetStall;
class AGGStatusEffectBase;
class UGGStatusEffectManager;
class USceneComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGStreetStall : public AActor, public IGGStatusEffectInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* VendorLocationComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* BuyerLocationComp;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanTakeDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedElement_ActorAttachment> SellItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsStallDestroyed, meta=(AllowPrivateAccess=true))
    bool IsStallDestroyed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGStatusEffectManager* StatusEffectManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGNPCEvent_StreetStall* OwningEvent;
    
public:
    AGGStreetStall(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StallDestroyed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RemoveStatusEffect(EStatusEffectTypes TypeToRemove);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsStallDestroyed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasStatusEffectByType(EStatusEffectTypes TypeToCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasStatusEffectByClass(TSubclassOf<AGGStatusEffectBase> StatusEffectClass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UGGStatusEffectManager* GetStatusEffectManager();
    
    UFUNCTION(BlueprintCallable)
    FWeightedElement_ActorAttachment GetRandomStallItem(bool& Successful);
    
    UFUNCTION(BlueprintCallable)
    TArray<FVector> GenerateQueuePositions(int32 PositionAmount, EQueueDirections Direction, float SpaceBetween, float SpaceFromBuyLoc);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ClearStatusEffects();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AGGStatusEffectBase* ApplyStatusEffect(EStatusEffectTypes TypeToApply, EApplicationMethod ApplicationMethod, AActor* SpreadFrom, TSubclassOf<AGGStatusEffectBase> StatusEffectClass, AGGStatusEffectBase* SpreadFromStatus);
    

    // Fix for true pure virtual functions not being implemented
};

