#include "KeyValueBase.h"

FKeyValueBase::FKeyValueBase() {
    this->bIsValid = false;
    this->ValueType = EKeyValueType::None;
    this->BoolValue = false;
    this->IntValue = 0;
    this->FloatValue = 0.00f;
}

