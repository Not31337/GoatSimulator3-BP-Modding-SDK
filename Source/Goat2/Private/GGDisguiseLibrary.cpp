#include "GGDisguiseLibrary.h"

UGGDisguiseLibrary::UGGDisguiseLibrary() {
}

bool UGGDisguiseLibrary::RevertDisguise(AGGCharacter* InCharacter) {
    return false;
}

void UGGDisguiseLibrary::OnDisguiseNPCPooledOrMoved(AGGNPC* NPC, bool bWasPooled) {
}

void UGGDisguiseLibrary::OnDisguiseActorDestroyed(AActor* DestroyedDisguise) {
}

bool UGGDisguiseLibrary::IsActorDisguised(const AActor* InActor) {
    return false;
}

UGGDisguiseComponent* UGGDisguiseLibrary::DisguiseCharacterAsPActor(AGGCharacter* InCharacter, AGGPhysicsActor_Base* AsActor, const FGGDisguiseAsPactorParams& Params) {
    return NULL;
}

UGGDisguiseComponent* UGGDisguiseLibrary::DisguiseCharacterAsNPC(AGGCharacter* InCharacter, AGGNPC* InNPC, FGameplayTag EffectSourceTag, const FGGDisguiseAsNPCParams& Params) {
    return NULL;
}


