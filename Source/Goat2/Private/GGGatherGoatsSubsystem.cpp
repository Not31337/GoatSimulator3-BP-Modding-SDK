#include "GGGatherGoatsSubsystem.h"

UGGGatherGoatsSubsystem::UGGGatherGoatsSubsystem() {
}

void UGGGatherGoatsSubsystem::OnPlayerLoggedOut(APlayerController* LeavingPlayerController) {
}

void UGGGatherGoatsSubsystem::OnPlayerLoggedIn(APlayerController* NewPlayerController) {
}

bool UGGGatherGoatsSubsystem::HasGatherEventWithID(const FString& GatherID) {
    return false;
}

void UGGGatherGoatsSubsystem::GoatReachedLocation(const FString& GatherID, AGGPlayerState* Player) {
}

void UGGGatherGoatsSubsystem::GoatLeftLocation(const FString& GatherID, AGGPlayerState* Player) {
}

TArray<AGGPlayerState*> UGGGatherGoatsSubsystem::GetPlayersAtTarget(const FString& GatherID) {
    return TArray<AGGPlayerState*>();
}

bool UGGGatherGoatsSubsystem::GatherAllGoats(const FString& GatherID, AGGPlayerState* InvitingPlayer, FGatherGoatParameters GatherParameters, FInviteNotificationParameters InviteNotificationParameters, bool bShowGoatCountNotification, FCountNotificationParameters CountNotificationParameters) {
    return false;
}

void UGGGatherGoatsSubsystem::CancelGatherGoats(const FString& GatherID, bool bRemoveAllInvites) {
}


