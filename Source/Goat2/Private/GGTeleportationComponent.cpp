#include "GGTeleportationComponent.h"
#include "Net/UnrealNetwork.h"

UGGTeleportationComponent::UGGTeleportationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwnerPlayer = NULL;
    this->OwnerPlayerGoat = NULL;
    this->LoadingScreenComp = NULL;
    this->TeleportNotAllowedWarningWidgetInstance = NULL;
}

void UGGTeleportationComponent::TeleportPlayer_WithCallbacks(APlayerController* PlayerController, FVector Location, FRotator Rotation, FTeleportParameters TeleportParameters, FLoadingScreenParameters LoadingScreenParameters, FOnTeleportStageUpdate OnTeleportStageUpdate, UGGTeleportSettingsDataAsset* SettingsAsset) {
}

void UGGTeleportationComponent::TeleportPlayer_LookAt_WithCallbacks(APlayerController* PlayerController, FVector Location, FVector LookAtLocation, FTeleportParameters TeleportParameters, FLoadingScreenParameters LoadingScreenParameters, FOnTeleportStageUpdate OnTeleportStageUpdate, UGGTeleportSettingsDataAsset* SettingsAsset) {
}

void UGGTeleportationComponent::TeleportPlayer_LookAt(APlayerController* PlayerController, FVector Location, FVector LookAtLocation, FTeleportParameters TeleportParameters, FLoadingScreenParameters LoadingScreenParameters, UGGTeleportSettingsDataAsset* SettingsAsset) {
}

void UGGTeleportationComponent::TeleportPlayer(APlayerController* PlayerController, FVector Location, FRotator Rotation, FTeleportParameters TeleportParameters, FLoadingScreenParameters LoadingScreenParameters, UGGTeleportSettingsDataAsset* SettingsAsset) {
}

void UGGTeleportationComponent::ShowTeleportWarning() {
}

bool UGGTeleportationComponent::ShouldTeleportWithVehicle(APlayerController* PlayerController) {
    return false;
}

void UGGTeleportationComponent::ServerTeleportPlayer_Implementation(FVector_NetQuantize Location, FRotator Rotation, FTeleportParameters TeleportParameters, FLoadingScreenParameters LoadingScreenParameters, bool bUseLookAt, FVector LookAtLocation) {
}

void UGGTeleportationComponent::ServerMoveThePlayer_Implementation() {
}

void UGGTeleportationComponent::ServerCancelPlayerTeleport_Implementation() {
}

void UGGTeleportationComponent::PlayerMoved() {
}

void UGGTeleportationComponent::OnRep_CurrentTeleport() {
}

void UGGTeleportationComponent::OnLoadingScreenRemoved(AGGPlayerController* Player, ELoadingScreenType LoadingScreenType, ERemovalReason RemovalReason) {
}

bool UGGTeleportationComponent::IsTeleporting(APlayerController* PlayerController) {
    return false;
}

bool UGGTeleportationComponent::IsAllowedToTeleport(APlayerController* PlayerController) {
    return false;
}

void UGGTeleportationComponent::HideTeleportWarning() {
}

UGGTeleportationComponent* UGGTeleportationComponent::GetTeleportComponent(APlayerController* PlayerController) {
    return NULL;
}

void UGGTeleportationComponent::CancelPlayerTeleport(APlayerController* PlayerController) {
}

void UGGTeleportationComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGTeleportationComponent, CurrentTeleport);
}


