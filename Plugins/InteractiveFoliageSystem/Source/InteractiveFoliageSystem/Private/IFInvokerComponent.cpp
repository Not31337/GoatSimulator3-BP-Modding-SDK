#include "IFInvokerComponent.h"

UIFInvokerComponent::UIFInvokerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CheckDistance = 200.00f;
    this->RemoveInteractiveFoliageDistance = 800.00f;
    this->TraceChannel = TraceTypeQuery1;
    this->FoliageDataTable = NULL;
}


