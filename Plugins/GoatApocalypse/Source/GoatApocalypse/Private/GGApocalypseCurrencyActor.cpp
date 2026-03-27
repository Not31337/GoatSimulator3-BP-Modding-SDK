#include "GGApocalypseCurrencyActor.h"
#include "Particles/ParticleSystemComponent.h"
#include "Net/UnrealNetwork.h"

AGGApocalypseCurrencyActor::AGGApocalypseCurrencyActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    this->bCanBeInCluster = false;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->CollectingGoat = NULL;
    this->bIsImportantCurrency = false;
    this->AbsorbStartTimestamp = 0.00f;
    this->InitTimestamp = 0.00f;
    this->ImportantCurrencyAbsorbFallbackDelay = 10.00f;
    this->MinTimeBeforeAbsorbtion = 1.00f;
    this->AbsorbVelocityInterpSpeed = 10.00f;
    this->AbsorbCurve = NULL;
    this->AbsorbDistance = 30.00f;
    this->CurrencyTypeIndex = -1;
    this->bIsPooled = false;
    this->OngoingParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Ongoing Particle"));
    this->CurrentOngoingEffects = NULL;
    this->OngoingParticle->SetupAttachment(RootComponent);
}

bool AGGApocalypseCurrencyActor::UpdateMovementToGoat(float DeltaTime) {
    return false;
}

void AGGApocalypseCurrencyActor::Tick(float DeltaSeconds) {
}

void AGGApocalypseCurrencyActor::SetCollectingGoat(AGGGoat* NewCollectingGoat) {
}

void AGGApocalypseCurrencyActor::PoolCurrencyActor() {
}

void AGGApocalypseCurrencyActor::OnRep_CurrencyTypeIndex() {
}

void AGGApocalypseCurrencyActor::OnRep_CollectingGoat() {
}

void AGGApocalypseCurrencyActor::OnRep_bIsPooled() {
}

void AGGApocalypseCurrencyActor::InitCurrencyActor(FVector NewLocation, int32 NewCurrencyTypeIndex, bool IsImportantCurrency) {
}

FName AGGApocalypseCurrencyActor::GetCurrencyAwardSource() const {
    return NAME_None;
}

void AGGApocalypseCurrencyActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGApocalypseCurrencyActor, CollectingGoat);
    DOREPLIFETIME(AGGApocalypseCurrencyActor, CurrencyTypeIndex);
    DOREPLIFETIME(AGGApocalypseCurrencyActor, bIsPooled);
}


