#include "GGAsyncActionBase.h"

UGGAsyncActionBase::UGGAsyncActionBase() {
}

bool UGGAsyncActionBase::DestroyNamedActions(UObject* ActionOwner, FName ActionName) {
    return false;
}

bool UGGAsyncActionBase::DestroyAllActions(UObject* ActionOwner) {
    return false;
}


