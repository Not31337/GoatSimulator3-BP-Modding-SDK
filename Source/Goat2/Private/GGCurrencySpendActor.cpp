#include "GGCurrencySpendActor.h"
#include "Components/BillboardComponent.h"
#include "GGCurrencySpendComponent.h"

AGGCurrencySpendActor::AGGCurrencySpendActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UGGCurrencySpendComponent>(TEXT("SpendComponent"));
    this->SpendComponent = (UGGCurrencySpendComponent*)RootComponent;
    this->BillboardComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
    this->BillboardComponent->SetupAttachment(RootComponent);
}


