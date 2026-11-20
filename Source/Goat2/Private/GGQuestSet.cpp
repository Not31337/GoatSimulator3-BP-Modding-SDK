#include "GGQuestSet.h"
#include "EQuestProgression.h"

AGGQuestSet::AGGQuestSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = false;
    this->bReplicates = false;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_None;
    this->QuestProgressionMode = EQuestProgression::Collection;
    this->QuestProgressTiers.AddDefaulted(1);
}


