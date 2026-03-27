#include "BTDecorator_GGCompareFloats.h"

UBTDecorator_GGCompareFloats::UBTDecorator_GGCompareFloats() {
    this->NodeName = TEXT("Compare Floats");
    this->NotifyObserver = EBTGGBlackboardRestart::ResultChange;
    this->CompareMode = ECompareMode::CM_Less;
    this->UseBlackboardFloat = false;
    this->LiteralFloat = 0.00f;
}


