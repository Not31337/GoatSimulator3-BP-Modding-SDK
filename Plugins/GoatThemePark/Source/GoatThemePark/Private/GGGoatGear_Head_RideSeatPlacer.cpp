#include "GGGoatGear_Head_RideSeatPlacer.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Head_RideSeatPlacer::UGGGoatGear_Head_RideSeatPlacer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsAbilityActive = false;
    this->ActiveSeatAnimations.AddDefaulted(4);
}

void UGGGoatGear_Head_RideSeatPlacer::MulticastStartSpawnAnimation_Implementation(AGGRideSeat* Seat, float Duration, EEasingFunc::Type EasingFunction, int32 SeatIndex) {
}

void UGGGoatGear_Head_RideSeatPlacer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Head_RideSeatPlacer, bIsAbilityActive);
}


