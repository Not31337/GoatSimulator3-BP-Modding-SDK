#include "GGLadderActor.h"
#include "GGLadderComponent.h"

AGGLadderActor::AGGLadderActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UGGLadderComponent>(TEXT("LadderComponent"));
    this->LadderComponent = (UGGLadderComponent*)RootComponent;
}


