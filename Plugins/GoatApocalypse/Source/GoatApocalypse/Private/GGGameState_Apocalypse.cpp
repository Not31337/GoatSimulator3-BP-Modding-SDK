#include "GGGameState_Apocalypse.h"
#include "EGoatDLC.h"
#include "Net/UnrealNetwork.h"

AGGGameState_Apocalypse::AGGGameState_Apocalypse(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AssociatedDLC = EGoatDLC::GoatApocalypse;
    this->ChaosSourcesDataTable = NULL;
    this->CurrencySourcesDataTable = NULL;
    this->SpendingSourcesDataTable = NULL;
    this->CurrencyPrefix = TEXT("Currency_");
    this->CurrencyActorClass = NULL;
    this->LoadingScreenRemovalFrameDelay = 10;
}

AGGGoat* AGGGameState_Apocalypse::WasActorRecentlyGravityLaunched(AActor* Actor, bool& bWasRecent) {
    return NULL;
}

void AGGGameState_Apocalypse::OnGoalUnlocked(AGGCastleStretchGoal* UnlockedGoal) {
}

int32 AGGGameState_Apocalypse::GetCurrencyFromTypeIndex(int32 TypeIndex) const {
    return 0;
}

void AGGGameState_Apocalypse::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGGameState_Apocalypse, UnlockedGoals);
}


