#include "GGGoatCastleSubsystem.h"

UGGGoatCastleSubsystem::UGGGoatCastleSubsystem() {
    this->CurrentGroup = NULL;
    this->ThroneRoomScanner = NULL;
    this->BossPortal = NULL;
}

void UGGGoatCastleSubsystem::UnlockStretchGoalWithIndex(int32 Index, EStateChangeSource Source, bool bAllowOutOfOrderUnlock) {
}

void UGGGoatCastleSubsystem::UnlockStretchGoal(AGGCastleStretchGoal* StretchGoal, EStateChangeSource Source, bool bAllowOutOfOrderUnlock) {
}

void UGGGoatCastleSubsystem::OnTotalChaosChanged(int32 TotalChaos) {
}

bool UGGGoatCastleSubsystem::IsAnyGoalUnlocking() const {
    return false;
}

bool UGGGoatCastleSubsystem::HasUnlockedAllStretchGoals() const {
    return false;
}

bool UGGGoatCastleSubsystem::HasSetInitialState() const {
    return false;
}

int32 UGGGoatCastleSubsystem::GetUnlockedStretchGoalsNum() const {
    return 0;
}

float UGGGoatCastleSubsystem::GetGoalProgressForChaos(const AGGCastleStretchGoal* StretchGoal, int32 ChaosAmount) const {
    return 0.0f;
}

float UGGGoatCastleSubsystem::GetGoalProgress(const AGGCastleStretchGoal* StretchGoal) const {
    return 0.0f;
}

AGGCastleStretchGoal* UGGGoatCastleSubsystem::GetCurrentlyProgressingGoal() const {
    return NULL;
}

AGGCastleStretchGoal* UGGGoatCastleSubsystem::GetCurrentlyActiveGoal() const {
    return NULL;
}

TArray<AGGCastleStretchGoal*> UGGGoatCastleSubsystem::GetCastleStretchGoals() const {
    return TArray<AGGCastleStretchGoal*>();
}


