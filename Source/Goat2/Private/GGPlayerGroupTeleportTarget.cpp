#include "GGPlayerGroupTeleportTarget.h"
#include "Components/ArrowComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"

AGGPlayerGroupTeleportTarget::AGGPlayerGroupTeleportTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Root"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->Location1 = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Location1"));
    this->Location1Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Location1Arrow"));
    this->Location2 = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Location2"));
    this->Location2Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Location2Arrow"));
    this->Location3 = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Location3"));
    this->Location3Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Location3Arrow"));
    this->Location4 = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Location4"));
    this->Location4Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Location4Arrow"));
    this->Location1->SetupAttachment(RootComponent);
    this->Location1Arrow->SetupAttachment(Location1);
    this->Location2->SetupAttachment(RootComponent);
    this->Location2Arrow->SetupAttachment(Location2);
    this->Location3->SetupAttachment(RootComponent);
    this->Location3Arrow->SetupAttachment(Location3);
    this->Location4->SetupAttachment(RootComponent);
    this->Location4Arrow->SetupAttachment(Location4);
}

FTransform AGGPlayerGroupTeleportTarget::GetTeleportTransform(int32 PlayerIndex) const {
    return FTransform{};
}


