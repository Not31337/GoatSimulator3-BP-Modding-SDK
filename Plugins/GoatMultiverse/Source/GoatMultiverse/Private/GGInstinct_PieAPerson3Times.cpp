#include "GGInstinct_PieAPerson3Times.h"

AGGInstinct_PieAPerson3Times::AGGInstinct_PieAPerson3Times(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->QuestProgressTiers.AddDefaulted(1);
}

void AGGInstinct_PieAPerson3Times::OnPieProjectileHitCharacter(AGGPie_Projectile* Projectile, AGGCharacter* Character) {
}


