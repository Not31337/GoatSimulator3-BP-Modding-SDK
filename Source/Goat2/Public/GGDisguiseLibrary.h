#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "GGDisguiseAsNPCParams.h"
#include "GGDisguiseAsPactorParams.h"
#include "GGDisguiseLibrary.generated.h"

class AActor;
class AGGCharacter;
class AGGNPC;
class AGGPhysicsActor_Base;
class UGGDisguiseComponent;

UCLASS(Blueprintable)
class GOAT2_API UGGDisguiseLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGGDisguiseLibrary();

    UFUNCTION(BlueprintCallable)
    static bool RevertDisguise(AGGCharacter* InCharacter);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDisguiseNPCPooledOrMoved(AGGNPC* NPC, bool bWasPooled);
    
    UFUNCTION(BlueprintCallable)
    void OnDisguiseActorDestroyed(AActor* DestroyedDisguise);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsActorDisguised(const AActor* InActor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static UGGDisguiseComponent* DisguiseCharacterAsPActor(AGGCharacter* InCharacter, AGGPhysicsActor_Base* AsActor, const FGGDisguiseAsPactorParams& Params);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static UGGDisguiseComponent* DisguiseCharacterAsNPC(AGGCharacter* InCharacter, AGGNPC* InNPC, FGameplayTag EffectSourceTag, const FGGDisguiseAsNPCParams& Params);
    
};

