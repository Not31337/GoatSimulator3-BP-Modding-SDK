#include "GGGoat_Apocalypse.h"
#include "Net/UnrealNetwork.h"

AGGGoat_Apocalypse::AGGGoat_Apocalypse(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(3);
    this->LevelBoundsRadius2D = 80000.00f;
    this->KillBoundsRadius2D = 90000.00f;
    this->UpwardsKillZ = 50000.00f;
    this->LaunchDelay = 0.50f;
    this->PostLaunchResetDelay = 1.50f;
    this->GoatLaunchUpwardsDirection = 0.85f;
    this->FailCathRespawnDelay = 5.00f;
    this->GoatLaunchForce = 5000.00f;
    this->GoatAngularLaunchForce = 5000.00f;
    this->WasInVehicle = NULL;
    this->bFiredByJunkCannon = false;
}

void AGGGoat_Apocalypse::ClientFiredByJunkCannon_Implementation() {
}

void AGGGoat_Apocalypse::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGGoat_Apocalypse, bFiredByJunkCannon);
}


