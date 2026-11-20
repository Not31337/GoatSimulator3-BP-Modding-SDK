#include "GGRideTrackDestroyedSection.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "GGProxyNpcComponent.h"
#include "Net/UnrealNetwork.h"

AGGRideTrackDestroyedSection::AGGRideTrackDestroyedSection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->ProxyNpc = CreateDefaultSubobject<UGGProxyNpcComponent>(TEXT("Proxy Npc"));
    this->CollisionRepaired = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Repaired"));
    this->LoadNPCAppearance = NULL;
    this->CollisionRepaired->SetupAttachment(RootComponent);
    this->ProxyNpc->SetupAttachment(RootComponent);
}

void AGGRideTrackDestroyedSection::OnRep_IsRepaired_Implementation() {
}

void AGGRideTrackDestroyedSection::OnNpcAppearanceLoaded(const TArray<FLoadedAppearancePart>& AppearanceParts, UMaterialInterface* SkinMaterial) {
}

bool AGGRideTrackDestroyedSection::IsSectionRepaired() const {
    return false;
}

void AGGRideTrackDestroyedSection::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGRideTrackDestroyedSection, ReplicatedVariables);
}


