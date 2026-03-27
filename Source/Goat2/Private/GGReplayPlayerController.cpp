#include "GGReplayPlayerController.h"

AGGReplayPlayerController::AGGReplayPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShowMouseCursor = true;
    this->ClickEventKeys.AddDefaulted(1);
    this->bShouldPerformFullTickWhenPaused = true;
    this->ReplayHUDWidget = NULL;
    this->KeyframeCamera = NULL;
    this->KeyframeTimeTolerance = 0.10f;
}

void AGGReplayPlayerController::ToggleReplayUI() {
}

void AGGReplayPlayerController::TogglePlayState() {
}

void AGGReplayPlayerController::ToggleGoatCamera() {
}

void AGGReplayPlayerController::SetCurrentReplayTimeToSeconds(float Seconds) {
}

void AGGReplayPlayerController::SetCurrentReplayPlayRate(float PlayRate) {
}

bool AGGReplayPlayerController::SetCurrentReplayPausedState(bool bDoPause) {
    return false;
}

void AGGReplayPlayerController::RemoveKeyframe() {
}

void AGGReplayPlayerController::GoToPreviousKeyframe() {
}

void AGGReplayPlayerController::GoToNextKeyframe() {
}

float AGGReplayPlayerController::GetCurrentReplayTotalTimeInSeconds() const {
    return 0.0f;
}

bool AGGReplayPlayerController::GetCurrentReplayPausedState() const {
    return false;
}

float AGGReplayPlayerController::GetCurrentReplayCurrentTimeInSeconds() const {
    return 0.0f;
}

void AGGReplayPlayerController::AddOrUpdateKeyframe() {
}


