#include "BTTask_GGFishUpActor.h"

UBTTask_GGFishUpActor::UBTTask_GGFishUpActor() {
    this->NodeName = TEXT("Fish Up Actor");
    this->bFishUpCharacters = false;
    this->CharacterFishUpRadius = 200.00f;
    this->FishUpPower = 500.00f;
}


