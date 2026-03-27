#include "CharacterAttachmentSettings.h"

FCharacterAttachmentSettings::FCharacterAttachmentSettings() {
    this->bDropOnRagdoll = false;
    this->bTakeDamage = false;
    this->SameSocketAttachAction = ESameSocketAttach::SSA_Nothing;
    this->MeshOverride = NULL;
    this->bCanBecomeLostObject = false;
    this->bCanDropOnStartle = false;
    this->bNonPActorDisableCollision = false;
}

