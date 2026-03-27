#include "GGWandHornsPhysicsHandle.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "Net/UnrealNetwork.h"

AGGWandHornsPhysicsHandle::AGGWandHornsPhysicsHandle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->PhysicsHandleComponent = CreateDefaultSubobject<UPhysicsHandleComponent>(TEXT("PhysicsHandleComponent"));
    this->GrabbedComponent = NULL;
    this->bDonePickingUp = false;
    this->OwningHorns = NULL;
    this->ServerTimeAdded = 0;
}

void AGGWandHornsPhysicsHandle::RequestHandleBreak_Implementation() {
}

void AGGWandHornsPhysicsHandle::OnAttachedToVehiclePooled(AGGVehicle* Vehicle, bool WasPooled) {
}

void AGGWandHornsPhysicsHandle::OnAttachedToNPCPooled(AGGNPC* NPC, bool WasPooled) {
}

void AGGWandHornsPhysicsHandle::OnAttachedToDestroyed(AActor* DestroyedActor) {
}

void AGGWandHornsPhysicsHandle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGWandHornsPhysicsHandle, LocalOffset);
    DOREPLIFETIME(AGGWandHornsPhysicsHandle, GrabbedComponent);
    DOREPLIFETIME(AGGWandHornsPhysicsHandle, bDonePickingUp);
    DOREPLIFETIME(AGGWandHornsPhysicsHandle, OwningHorns);
    DOREPLIFETIME(AGGWandHornsPhysicsHandle, ServerTimeAdded);
}


