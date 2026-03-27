#include "GGOnRepPoolTestActor.h"
#include "GGOnRepPoolingSystem.h"
#include "Net/UnrealNetwork.h"

AGGOnRepPoolTestActor::AGGOnRepPoolTestActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->Delay = 3.00f;
    this->bBoolA = false;
    this->bBoolB = false;
    this->RandomFloat = 0.00f;
    this->PoolingSystem = CreateDefaultSubobject<UGGOnRepPoolingSystem>(TEXT("Pooling System"));
}

void AGGOnRepPoolTestActor::OnRep_RandomFloat() {
}

void AGGOnRepPoolTestActor::OnRep_BoolB() {
}

void AGGOnRepPoolTestActor::OnRep_BoolA() {
}

void AGGOnRepPoolTestActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGOnRepPoolTestActor, bBoolA);
    DOREPLIFETIME(AGGOnRepPoolTestActor, bBoolB);
    DOREPLIFETIME(AGGOnRepPoolTestActor, RandomFloat);
}


