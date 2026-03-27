#include "GGGoatGear_Static_WheelerDealer.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Static_WheelerDealer::UGGGoatGear_Static_WheelerDealer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Car = NULL;
    this->AnimBlueprint = NULL;
    this->CarLoopSound = NULL;
    this->CarMeshComponent = NULL;
    this->CarSoundAudioComponent = NULL;
    this->CarSpeedRate = 0.00f;
}

float UGGGoatGear_Static_WheelerDealer::GetCarSpeedRate() {
    return 0.0f;
}

void UGGGoatGear_Static_WheelerDealer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Static_WheelerDealer, CarSpeedRate);
}


