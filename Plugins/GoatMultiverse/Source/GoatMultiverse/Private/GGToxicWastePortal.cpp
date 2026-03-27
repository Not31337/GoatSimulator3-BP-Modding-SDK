#include "GGToxicWastePortal.h"
#include "Components/AudioComponent.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "GGDynamicAssetHoldingComponent.h"

AGGToxicWastePortal::AGGToxicWastePortal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->PortalParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Portal Particles"));
    this->OverlapVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("Overlap Volume"));
    this->PortalSound = CreateDefaultSubobject<UAudioComponent>(TEXT("Portal Sound"));
    this->AssetHolding = CreateDefaultSubobject<UGGDynamicAssetHoldingComponent>(TEXT("Asset Holding"));
    this->ToxicWasteMesh = NULL;
    this->TeleportLocationActor = NULL;
    this->EasingFunction = EEasingFunc::EaseInOut;
    this->SuckInTime = 0.50f;
    this->OverlapVolume->SetupAttachment(RootComponent);
    this->PortalParticle->SetupAttachment(RootComponent);
    this->PortalSound->SetupAttachment(RootComponent);
}

void AGGToxicWastePortal::OnLoastSignificance(UGGDynamicAssetHoldingComponent* DynAssetComp) {
}

void AGGToxicWastePortal::OnAssetLoadingFinished(UGGDynamicAssetHoldingComponent* DynAssetComp) {
}


