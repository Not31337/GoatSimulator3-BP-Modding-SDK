#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/NetSerialization.h"
#include "Templates/SubclassOf.h"
#include "GGParkKeyDropComponent.generated.h"

class AGGGoat;
class AGGNPC;
class AGGPhysicsActor;
class UObject;
class UParticleSystem;
class USoundBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATTHEMEPARK_API UGGParkKeyDropComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DropChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AGGPhysicsActor> SoftKeyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> SoftDropParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> SoftDropSound;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGPhysicsActor> KeyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DropParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* DropSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGNPC* OwnerNPC;
    
public:
    UGGParkKeyDropComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnNPCSpawnedIntoWorld(AGGNPC* NPC);
    
    UFUNCTION(BlueprintCallable)
    void OnNPCPooledOrMoved(AGGNPC* NPC, bool bWasPooled);
    
    UFUNCTION(BlueprintCallable)
    void OnNPCHeadbutted(UObject* HeadbuttedObject, AGGGoat* HeadbuttingGoat);
    
    UFUNCTION(BlueprintCallable)
    void MulticastPlayEffects(FVector_NetQuantize Loc);
    
};

