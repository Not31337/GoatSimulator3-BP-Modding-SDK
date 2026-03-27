#include "GGGoatGear_Back_DroneOperator.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Back_DroneOperator::UGGGoatGear_Back_DroneOperator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BoxOpenMontage = NULL;
    this->BoxOpenAndCloseMontage = NULL;
    this->bHaveOpenBox = false;
}

void UGGGoatGear_Back_DroneOperator::OnRep_bHaveOpenBox() {
}

void UGGGoatGear_Back_DroneOperator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Back_DroneOperator, bHaveOpenBox);
}


