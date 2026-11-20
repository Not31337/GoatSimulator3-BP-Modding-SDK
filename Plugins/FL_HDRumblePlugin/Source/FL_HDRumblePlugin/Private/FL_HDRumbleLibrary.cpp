#include "FL_HDRumbleLibrary.h"

UFL_HDRumbleLibrary::UFL_HDRumbleLibrary() {
}

bool UFL_HDRumbleLibrary::SetHDRumbleSubmixSendMulti(TArray<AController*> RumbleControllers, UAudioComponent* TargetAudioComponent, float SendLevel) {
    return false;
}

bool UFL_HDRumbleLibrary::SetHDRumbleSubmixSendAll(UAudioComponent* TargetAudioComponent, float SendLevel) {
    return false;
}

bool UFL_HDRumbleLibrary::SetHDRumbleSubmixSend(AController* RumbleController, UAudioComponent* TargetAudioComponent, float SendLevel) {
    return false;
}


