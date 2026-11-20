#include "GGGoatGear_Back_Cupid.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Back_Cupid::UGGGoatGear_Back_Cupid(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RotationSpeed = 10.00f;
    this->ShootMontage = NULL;
    this->ProjectileClass = NULL;
}

void UGGGoatGear_Back_Cupid::OnNotifyBeginReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload) {
}

void UGGGoatGear_Back_Cupid::MulticastPlayShoot_Implementation() {
}

void UGGGoatGear_Back_Cupid::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Back_Cupid, GearAimDirection);
}


