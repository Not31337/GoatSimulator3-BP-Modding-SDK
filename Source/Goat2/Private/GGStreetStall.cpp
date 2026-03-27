#include "GGStreetStall.h"
#include "Components/SceneComponent.h"
#include "GGStatusEffectManager.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AGGStreetStall::AGGStreetStall(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Comp"));
    this->RootComp = (USceneComponent*)RootComponent;
    this->VendorLocationComp = CreateDefaultSubobject<USceneComponent>(TEXT("Vendor Location"));
    this->BuyerLocationComp = CreateDefaultSubobject<USceneComponent>(TEXT("Buyer Location"));
    this->CanTakeDamage = true;
    this->Health = 100.00f;
    this->IsStallDestroyed = false;
    this->StatusEffectManager = CreateDefaultSubobject<UGGStatusEffectManager>(TEXT("StatusEffectManager"));
    this->OwningEvent = NULL;
    this->BuyerLocationComp->SetupAttachment(RootComponent);
    this->VendorLocationComp->SetupAttachment(RootComponent);
}


bool AGGStreetStall::RemoveStatusEffect_Implementation(EStatusEffectTypes TypeToRemove) {
    return false;
}

void AGGStreetStall::OnRep_IsStallDestroyed() {
}

bool AGGStreetStall::HasStatusEffectByType_Implementation(EStatusEffectTypes TypeToCheck) {
    return false;
}

bool AGGStreetStall::HasStatusEffectByClass_Implementation(TSubclassOf<AGGStatusEffectBase> StatusEffectClass) {
    return false;
}

UGGStatusEffectManager* AGGStreetStall::GetStatusEffectManager_Implementation() {
    return NULL;
}

FWeightedElement_ActorAttachment AGGStreetStall::GetRandomStallItem(bool& Successful) {
    return FWeightedElement_ActorAttachment{};
}

TArray<FVector> AGGStreetStall::GenerateQueuePositions(int32 PositionAmount, EQueueDirections Direction, float SpaceBetween, float SpaceFromBuyLoc) {
    return TArray<FVector>();
}

bool AGGStreetStall::ClearStatusEffects_Implementation() {
    return false;
}

AGGStatusEffectBase* AGGStreetStall::ApplyStatusEffect_Implementation(EStatusEffectTypes TypeToApply, EApplicationMethod ApplicationMethod, AActor* SpreadFrom, TSubclassOf<AGGStatusEffectBase> StatusEffectClass, AGGStatusEffectBase* SpreadFromStatus) {
    return NULL;
}

void AGGStreetStall::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGStreetStall, IsStallDestroyed);
}


