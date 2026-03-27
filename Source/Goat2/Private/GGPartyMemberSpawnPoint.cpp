#include "GGPartyMemberSpawnPoint.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/WidgetComponent.h"

AGGPartyMemberSpawnPoint::AGGPartyMemberSpawnPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InviteButtonType = EInviteButtonType::World;
    this->PreviewAltGoat = NULL;
    this->bSnapToGround = true;
    this->TraceDistance = 100.00f;
    this->InviteButtonWidgetClass = NULL;
    this->bDisableSpawnEffects = false;
    this->SpawnType = EGGPartyMemberSpawnType::InAir;
    this->bRandomizeSpawnRotation = true;
    this->MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Goat Preview Mesh"));
    this->InviteButtonWidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("Invite Button Widget Component"));
    this->ClaimedBy = NULL;
    this->UserIndex = 0;
    this->InviteButtonWidgetComponent->SetupAttachment(RootComponent);
    this->MeshComponent->SetupAttachment(RootComponent);
}

bool AGGPartyMemberSpawnPoint::IsVisibleForPlayerCount() const {
    return false;
}

bool AGGPartyMemberSpawnPoint::IsClaimed() const {
    return false;
}

FVector AGGPartyMemberSpawnPoint::GetInviteButtonLocation() const {
    return FVector{};
}


