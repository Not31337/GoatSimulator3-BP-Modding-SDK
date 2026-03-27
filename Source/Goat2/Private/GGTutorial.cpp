#include "GGTutorial.h"

AGGTutorial::AGGTutorial(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bOnlyCompleteIfNotificationIsActive = false;
    this->bActiveByDefault = true;
    this->TutorialObject = NULL;
    this->OwningController = NULL;
}

void AGGTutorial::UpdateTutorial() {
}

bool AGGTutorial::ShouldShowTutorialActionInputStatic(AGGPlayerController* PC, FTutorialActionInputStruct ActionInput) {
    return false;
}

bool AGGTutorial::ShouldShowTutorial_Implementation(UGGTutorialComponent* TutorialComponent, UObject* InTutorialObject) {
    return false;
}

bool AGGTutorial::ShouldCompleteTutorial_Implementation() {
    return false;
}

void AGGTutorial::RemoveTutorial() {
}


void AGGTutorial::OnPlayerControllerDestroyed(AActor* Actor) {
}

void AGGTutorial::OnGoatReplaced(AGGGoat* OldGoat, AGGGoat* NewGoat) {
}

void AGGTutorial::OnGamepadChanged(bool bInActive) {
}

bool AGGTutorial::IsTutorialShown() {
    return false;
}

bool AGGTutorial::IsActive() const {
    return false;
}

FString AGGTutorial::GetTutorialID_Implementation(UObject* InTutorialObject) {
    return TEXT("");
}

UGGTutorialComponent* AGGTutorial::GetTutorialComponent() {
    return NULL;
}



AGGPlayerController* AGGTutorial::GetOwningPlayer() {
    return NULL;
}

AGGGoat* AGGTutorial::GetControlledGoat() {
    return NULL;
}

bool AGGTutorial::GetCompletionTutorialStep_Implementation(const FString& InID) {
    return false;
}

TArray<AGGPlayerController*> AGGTutorial::GetAllOwningPlayers() {
    return TArray<AGGPlayerController*>();
}

TArray<AGGGoat*> AGGTutorial::GetAllControlledGoats() {
    return TArray<AGGGoat*>();
}

void AGGTutorial::CreateTutorialNotification(FNotification Notification) {
}

void AGGTutorial::CompleteTutorial() {
}

bool AGGTutorial::ActivateTutorial() {
    return false;
}


