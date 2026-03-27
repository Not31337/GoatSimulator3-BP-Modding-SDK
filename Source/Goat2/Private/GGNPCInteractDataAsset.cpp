#include "GGNPCInteractDataAsset.h"

UGGNPCInteractDataAsset::UGGNPCInteractDataAsset() {
    this->GeneralChanceToInteract = 100;
    this->InteractChances.AddDefaulted(5);
    this->DisableDiscussions = false;
    this->ChanceToChangeMood = 100;
    this->DisableAngryRant = false;
    this->DisableMovingWave = false;
    this->DisableGoatInteractions = false;
    this->ExludeFromNotice.AddDefaulted(2);
    this->MovingWaveTimeSinceStartledBy = 3.00f;
    this->AttackTimeSinceStartledBy = 0.00f;
    this->CloseGreetTimeSinceStartledBy = 3.00f;
    this->NoticeGoatTimeSinceStartledBy = 3.00f;
    this->PettingGoatTimeSinceStartledBy = 3.00f;
    this->PointingAtGoatTimeSinceStartledBy = 3.00f;
}


