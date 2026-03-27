#include "GGGoatGear_Skel_GrappleHook.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Skel_GrappleHook::UGGGoatGear_Skel_GrappleHook(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FireHookMontage = NULL;
    this->Socket = TEXT("HookEffectSocket");
    this->ShootHookSound = NULL;
    this->HookReturnedEmptySound = NULL;
    this->HookReturnedWithActorSound = NULL;
    this->ShootHookParticle = NULL;
    this->HookReturnedEmptyParticle = NULL;
    this->HookReturnedWithActorParticle = NULL;
    this->TimeAfterHookForUnbind = 5.00f;
    this->bIsHookVisible = false;
}

void UGGGoatGear_Skel_GrappleHook::VehicleHitNPC(AGGVehicle* Vehicle, AGGNPC* NPC) {
}

void UGGGoatGear_Skel_GrappleHook::OnRep_bIsHookVisible() {
}

void UGGGoatGear_Skel_GrappleHook::MulticastPlayShootEffects_Implementation() {
}

void UGGGoatGear_Skel_GrappleHook::MulticastPlayReturnEffects_Implementation(bool bEmpty) {
}

void UGGGoatGear_Skel_GrappleHook::MulticastPlayMontage_Implementation() {
}

void UGGGoatGear_Skel_GrappleHook::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Skel_GrappleHook, bIsHookVisible);
}


