#include "GGGoatGear_Static_EggSaddle.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Static_EggSaddle::UGGGoatGear_Static_EggSaddle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxEggs = 3;
}

bool UGGGoatGear_Static_EggSaddle::ShouldSpawnFollowingEgg_Implementation(const AActor* EatenActor) const {
    return false;
}

void UGGGoatGear_Static_EggSaddle::OnRep_Eggs_Implementation(const TArray<AGGEggSaddleEgg*>& PreviousEggs) {
}

void UGGGoatGear_Static_EggSaddle::OnRep_EggLocations_Implementation(const TArray<FVector>& PreviousEggLocations) {
}

void UGGGoatGear_Static_EggSaddle::MulticastEatenActor_Implementation(AActor* EatenActor) {
}



bool UGGGoatGear_Static_EggSaddle::HasMaxEggs_Implementation() const {
    return false;
}


AGGEggSaddleEgg* UGGGoatGear_Static_EggSaddle::GetLastEgg(bool& OutSuccess) const {
    return NULL;
}


void UGGGoatGear_Static_EggSaddle::EatActor_Implementation(AActor* EatenActor) {
}

bool UGGGoatGear_Static_EggSaddle::CanEatActor_Implementation(const AActor* EatenActor) const {
    return false;
}

void UGGGoatGear_Static_EggSaddle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Static_EggSaddle, Eggs);
    DOREPLIFETIME(UGGGoatGear_Static_EggSaddle, EggLocations);
}


