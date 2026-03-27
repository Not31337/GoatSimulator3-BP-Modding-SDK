#include "GGGoatGear_Static_BigBrother.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Static_BigBrother::UGGGoatGear_Static_BigBrother(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHasPassiveEffect = true;
    this->EyeOfSauronMesh = NULL;
    this->EyeOfSauronParticleSystem = NULL;
    this->ClosestCharacterCheckDelay = 1.00f;
    this->ClosestCharacterCheckRadius = 1000.00f;
    this->RotationInterpolationSpeed = 5.00f;
    this->FirstAudioPlayDelay = 1.00f;
    this->LoopAudioPlayDelay = 10.00f;
    this->bGearOn = false;
    this->VoiceLineAudioComponent = NULL;
    this->EyeOfSauronMeshComponent = NULL;
    this->EyeOfSauronParticleSystemComponent = NULL;
    this->ClosestCharacter = NULL;
}

void UGGGoatGear_Static_BigBrother::ServerPlayARandomVoiceLine_Implementation() {
}
bool UGGGoatGear_Static_BigBrother::ServerPlayARandomVoiceLine_Validate() {
    return true;
}

void UGGGoatGear_Static_BigBrother::MulticastPlayVoiceLine_Implementation(USoundBase* VoiceLineToPlay) {
}

void UGGGoatGear_Static_BigBrother::CreateEye() {
}

void UGGGoatGear_Static_BigBrother::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Static_BigBrother, bGearOn);
    DOREPLIFETIME(UGGGoatGear_Static_BigBrother, ClosestCharacter);
}


