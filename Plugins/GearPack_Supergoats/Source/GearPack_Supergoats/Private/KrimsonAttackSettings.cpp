#include "KrimsonAttackSettings.h"

FKrimsonAttackSettings::FKrimsonAttackSettings() {
    this->HoverForDuration = 0.00f;
    this->TimeAfterHoverForAnimation = 0.00f;
    this->AttackSpeed = 0.00f;
    this->DelayAfterAttack = 0.00f;
    this->BaseRadius = 0.00f;
    this->RadiusScaleFactor = 0.00f;
    this->MinimumRadius = 0.00f;
    this->bCanSetThingsOnFire = false;
    this->SetOnFireCount = 0;
    this->AttackStrength = 0.00f;
    this->VehicleStrengthScale = 0.00f;
    this->DamageScaleFactor = 0.00f;
    this->PlayerLaunchStrengthBase = 0.00f;
    this->PlayerLaunchScaleFactor = 0.00f;
    this->PlayerLaunchForceMax = 0.00f;
    this->DownwardsSlamAdjust = 0.00f;
    this->DownwardsSlamAdjustScaleFactor = 0.00f;
    this->MontageEndImpactTime = 0.00f;
    this->AttackMontage = NULL;
}

