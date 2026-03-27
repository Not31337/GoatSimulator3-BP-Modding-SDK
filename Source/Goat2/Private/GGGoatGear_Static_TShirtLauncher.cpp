#include "GGGoatGear_Static_TShirtLauncher.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Static_TShirtLauncher::UGGGoatGear_Static_TShirtLauncher(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsTShirtVisbile = false;
    this->LoadedTShirtMesh = NULL;
    this->MeshComp = NULL;
    this->LoadedTShirtMaterial = NULL;
}

void UGGGoatGear_Static_TShirtLauncher::OnRep_TShirtVisible() {
}

void UGGGoatGear_Static_TShirtLauncher::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Static_TShirtLauncher, bIsTShirtVisbile);
}


