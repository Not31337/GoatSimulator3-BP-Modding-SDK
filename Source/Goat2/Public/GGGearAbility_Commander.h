#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "GameplayTagContainer.h"
#include "CommanderSoundPairing.h"
#include "GGGearAbility.h"
#include "Templates/SubclassOf.h"
#include "GGGearAbility_Commander.generated.h"

class AActor;
class AGGCommanderNPCTarget;
class AGGCommanderTargeter;
class AGGGoat;
class AGGNPC;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class GOAT2_API UGGGearAbility_Commander : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGCommanderTargeter> CommanderTargeterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGCommanderNPCTarget> NPCTargetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchIncrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* SelectedNPCParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SelectedNPCParticleLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGGoat* CommanderGoat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommanderSoundPairing> CommandSoundPairings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ForceLoveInstinctTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ForceHateInstinctTag;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGCommanderTargeter* CommanderTargeter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGNPC* SelectedNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* SelectedNPCParticleComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AGGNPC*, AGGCommanderNPCTarget*> NPCTargeters;
    
public:
    UGGGearAbility_Commander();

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPerformNPCTask(AGGNPC* NPC, FVector_NetQuantize TargetLocation, AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectedNPCCleared();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NPCSelected(AGGNPC* NPC);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NPCCommandGiven(AGGNPC* NPC);
    
    UFUNCTION(BlueprintCallable)
    FCommanderSoundPairing GetRandomSoundPairing();
    
};

