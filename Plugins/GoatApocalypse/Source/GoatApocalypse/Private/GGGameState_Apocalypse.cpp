#include "GGGameState_Apocalypse.h"
#include "EGoatDLC.h"
#include "GGCurrencyGameStateComponent.h"
#include "Net/UnrealNetwork.h"

AGGGameState_Apocalypse::AGGGameState_Apocalypse(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AssociatedDLC = EGoatDLC::GoatApocalypse;
    this->CurrencyComponent = CreateDefaultSubobject<UGGCurrencyGameStateComponent>(TEXT("CurrencyComponent"));
    this->LoadingScreenRemovalFrameDelay = 10;
}

AGGGoat* AGGGameState_Apocalypse::WasActorRecentlyGravityLaunched(AActor* Actor, bool& bWasRecent) {
    return NULL;
}

void AGGGameState_Apocalypse::OnGoalUnlocked(AGGCastleStretchGoal* UnlockedGoal) {
}

void AGGGameState_Apocalypse::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGGameState_Apocalypse, UnlockedGoals);
}


