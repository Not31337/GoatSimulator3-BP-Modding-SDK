#include "GGRelicSpot.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GGStaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

AGGRelicSpot::AGGRelicSpot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Root"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->DirtMoundMesh = CreateDefaultSubobject<UGGStaticMeshComponent>(TEXT("Dirt Mound Mesh"));
    this->RelicLocation = CreateDefaultSubobject<USceneComponent>(TEXT("Relic Location"));
    this->RelicMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Relic Mesh"));
    this->ScaleIncreaseWhenHeadbutted = 0.08f;
    this->HeadbuttsRequired = 3;
    this->HitParticle = NULL;
    this->HitSound = NULL;
    this->RelicMeshAdjustPerHeadbutt = 15.00f;
    this->TimesHeadbutted = 0;
    this->DirtMoundMesh->SetupAttachment(RootComponent);
    this->RelicLocation->SetupAttachment(RootComponent);
    this->RelicMesh->SetupAttachment(RelicLocation);
}

void AGGRelicSpot::OnRep_TimesHeadbutted() {
}

void AGGRelicSpot::OnRep_SelectedRelic() {
}

void AGGRelicSpot::OnGGStaticMeshHeadbutted(UGGStaticMeshComponent* GGMeshComponent, AGGGoat* HeadbuttingGoat) {
}

void AGGRelicSpot::MulticastPlayHit_Implementation() {
}

void AGGRelicSpot::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGRelicSpot, SelectedRelic);
    DOREPLIFETIME(AGGRelicSpot, TimesHeadbutted);
}


