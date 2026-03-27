#include "GGPhysicsActor_AbominanaBanana.h"
#include "Components/AudioComponent.h"

AGGPhysicsActor_AbominanaBanana::AGGPhysicsActor_AbominanaBanana(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->TimeBetweenTransformation = 1.50f;
    this->TransformationMeshes.AddDefaulted(1);
    this->BananaMeshTopSocket = TEXT("Top Socket");
    this->BananaMeshBottomSocket = TEXT("Bottom Socket");
    this->AbominanaNPCClass = NULL;
    this->AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("Audio Component"));
    this->AudioComponent->SetupAttachment(RootComponent);
}


