#include "LSTestCharacter.h"
#include "LSCharacterMovementComponent.h"

ALSTestCharacter::ALSTestCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<ULSCharacterMovementComponent>(TEXT("CharMoveComp"))) {
}


