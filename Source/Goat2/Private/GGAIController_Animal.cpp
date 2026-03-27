#include "GGAIController_Animal.h"

AGGAIController_Animal::AGGAIController_Animal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ControlledAnimal = NULL;
}

AGGNPC_Animal* AGGAIController_Animal::GetControlledAnimal() const {
    return NULL;
}


