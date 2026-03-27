#include "BTDecorator_GGIsVehicleInState.h"

UBTDecorator_GGIsVehicleInState::UBTDecorator_GGIsVehicleInState() {
    this->NodeName = TEXT("Is Vehicle In State");
    this->StateToCheckAgainst = EVehicleState::VS_Idle;
}


