#include "BTDecorator_GGDistanceLessThan.h"

UBTDecorator_GGDistanceLessThan::UBTDecorator_GGDistanceLessThan() {
    this->NodeName = TEXT("Distance Less Than");
    this->bElementOneClosestOnCollision = false;
    this->bElementTwoClosestOnCollision = false;
    this->CompareValue = 0.00f;
}


