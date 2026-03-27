#include "BTTask_GGPlayVO.h"

UBTTask_GGPlayVO::UBTTask_GGPlayVO() {
    this->NodeName = TEXT("Play VO");
    this->bBlocking = false;
    this->bCanInterruptCurrentLine = false;
    this->bCanBeStoppedByDamage = true;
    this->NodeOwnerComp = NULL;
}

void UBTTask_GGPlayVO::OnVoiceLineFinished(AGGNPC* NPC, FGameplayTag VOTag, bool bCouldPlayVO) {
}


