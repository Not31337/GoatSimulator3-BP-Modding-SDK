#include "GGCurrencyActor.h"
#include "Particles/ParticleSystemComponent.h"
#include "Net/UnrealNetwork.h"

AGGCurrencyActor::AGGCurrencyActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    this->bCanBeInCluster = false;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->CollectingGoat = NULL;
    this->bIsImportantCurrency = false;
    this->AbsorbStartTimestamp = 0.00f;
    this->DistCheckTimestamp = 0.00f;
    this->InitTimestamp = 0.00f;
    this->ImportantCurrencyAbsorbFallbackDelay = 10.00f;
    this->MinTimeBeforeAbsorbtion = 1.00f;
    this->AbsorbVelocityInterpSpeed = 10.00f;
    this->bAutoPoolAfterDelay = false;
    this->AutoPoolDelay = 30.00f;
    this->AbsorbCurve = NULL;
    this->AbsorbDistance = 30.00f;
    this->CurrencyTypeIndex = -1;
    this->bIsPooled = false;
    this->OngoingParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Ongoing Particle"));
    this->OngoingParticle->SetupAttachment(RootComponent);
}

bool AGGCurrencyActor::UpdateMovementToGoat(float DeltaTime) {
    return false;
}

void AGGCurrencyActor::Tick(float DeltaSeconds) {
}

void AGGCurrencyActor::SetCollectingGoat(AGGGoat* NewCollectingGoat) {
}

void AGGCurrencyActor::PoolCurrencyActor() {
}

void AGGCurrencyActor::OnRep_CurrencyTypeIndex() {
}

void AGGCurrencyActor::OnRep_CollectingGoat() {
}

void AGGCurrencyActor::OnRep_bIsPooled() {
}

void AGGCurrencyActor::InitCurrencyActor(FVector NewLocation, int32 NewCurrencyTypeIndex, bool IsImportantCurrency) {
}

FName AGGCurrencyActor::GetCurrencyAwardSource() const {
    return NAME_None;
}

void AGGCurrencyActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGCurrencyActor, CollectingGoat);
    DOREPLIFETIME(AGGCurrencyActor, CurrencyTypeIndex);
    DOREPLIFETIME(AGGCurrencyActor, bIsPooled);
}


