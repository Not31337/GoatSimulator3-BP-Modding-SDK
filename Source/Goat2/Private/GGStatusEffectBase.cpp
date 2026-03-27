#include "GGStatusEffectBase.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

AGGStatusEffectBase::AGGStatusEffectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->StatusEffectType = EStatusEffectTypes::SET_None;
    this->AppliedThrough = EApplicationMethod::AM_Direct;
    this->OwningManager = NULL;
    this->AffectedActor = NULL;
    this->AffectedVehicle = NULL;
    this->AffectedPActor = NULL;
    this->AffectedCharacter = NULL;
    this->AffectedNPC = NULL;
    this->AffectedGoat = NULL;
    this->CreateOverlapShapes = true;
    this->bForceDefaultShape = false;
    this->bPActorUseSphereShape = false;
    this->bShouldClampSphereRadius = false;
    this->bShowShapesInGame = false;
    this->RecheckOverlaps = true;
    this->RecheckDelayMax = 1.00f;
    this->HasDuration = true;
    this->bResetDurationOnActorMove = true;
    this->Duration = 0.00f;
    this->DurationMax = 10.00f;
    this->InitialSpreadDelayMax = 0.50f;
    this->bChangesMaterial = false;
    this->ChangesPhysMat = false;
    this->PhysMatPriority = 0;
    this->StatusEffectPhysMat = NULL;
    this->CanSpread = true;
    this->CurrentSpreadCountMax = 5;
    this->CurrentSpreadCount = 0;
    this->SpreadStatusEffectType = EStatusEffectTypes::SET_None;
    this->SpreadStatusEffectClass = NULL;
    this->CreateParticleSystems = false;
    this->ParticleDrawDistance = 6000.00f;
    this->SpawnParticleSystems = false;
    this->SignificanceDistance = 3000.00f;
    this->bIsPooled = false;
}

void AGGStatusEffectBase::SpreadStatusEffect(AActor* TargetActor, EApplicationMethod ApplicationMethod, bool SkipInitalSpreadDelay, UPrimitiveComponent* SpreadToComponent) {
}

void AGGStatusEffectBase::SetHasDuration(bool bShouldHaveDuration) {
}

void AGGStatusEffectBase::SetCurrentDuration(float NewDuration) {
}

void AGGStatusEffectBase::OverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AGGStatusEffectBase::OverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AGGStatusEffectBase::OnRep_SpawnParticleSystems() {
}

void AGGStatusEffectBase::OnRep_IsPooled() {
}

bool AGGStatusEffectBase::IsSignificant() const {
    return false;
}

bool AGGStatusEffectBase::IsPooled() const {
    return false;
}

UGGStatusEffectManager* AGGStatusEffectBase::GetOwningManager() {
    return NULL;
}

bool AGGStatusEffectBase::GetHasDuration() const {
    return false;
}

float AGGStatusEffectBase::GetDurationMax() const {
    return 0.0f;
}

float AGGStatusEffectBase::GetDuration() const {
    return 0.0f;
}

bool AGGStatusEffectBase::GetCanSpread() const {
    return false;
}

AActor* AGGStatusEffectBase::GetAffectedActor() const {
    return NULL;
}

bool AGGStatusEffectBase::CanAffectClass(UClass* TestClass) {
    return false;
}







void AGGStatusEffectBase::ActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void AGGStatusEffectBase::ActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void AGGStatusEffectBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGStatusEffectBase, SpawnParticleSystems);
    DOREPLIFETIME(AGGStatusEffectBase, bIsPooled);
}


