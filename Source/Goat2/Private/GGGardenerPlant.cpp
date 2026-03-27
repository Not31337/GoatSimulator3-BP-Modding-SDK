#include "GGGardenerPlant.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

AGGGardenerPlant::AGGGardenerPlant(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Location"));
    this->TimeToGrowInSeconds = 2.20f;
    this->DelayBetweenGrow = 0.90f;
    this->AddedGrowingRotation = 179.50f;
    this->GrowAnimationEaseFunction = EEasingFunc::EaseOut;
    this->OffsetSpawnLocation = -45.00f;
    this->MaxGrowFromBaaDistance = 600.00f;
    this->bCanGrowFromBaa = false;
    this->bLimitMaxNumberOfPlantInstances = true;
    this->MaxAmountOfInstancesGear = 20;
    this->MaxAmountOfInstancesEvent = 100;
    this->bIsPlantFromEvent = false;
    this->PlayerDistanceForNoCullingSqrd = 100000000.00f;
    this->SpawnPlantParticles = NULL;
    this->GrowPlantParticles = NULL;
    this->GardenerPlantSpawnSound = NULL;
    this->GardenerPlantGrowSound = NULL;
    this->InstinctGrowAmount = 15;
    this->RootLocation = (USceneComponent*)RootComponent;
    this->PlantAttachment = CreateDefaultSubobject<USceneComponent>(TEXT("Plant Attachment"));
    this->DirtPile = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Dirt Pile"));
    this->Sprout = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sprout"));
    this->PlantMeshComponent = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Plant Instance"));
    this->InstancesPlaced = 0;
    this->bIsFertilized = false;
    this->DirtPile->SetupAttachment(RootComponent);
    this->PlantAttachment->SetupAttachment(RootComponent);
    this->PlantMeshComponent->SetupAttachment(PlantAttachment);
    this->Sprout->SetupAttachment(PlantMeshComponent);
}

void AGGGardenerPlant::ShowDebugInfo() {
}

void AGGGardenerPlant::PlayScaleSproutTimeline_Implementation() {
}

void AGGGardenerPlant::OnRep_IsFertilized() {
}

void AGGGardenerPlant::OnRep_InstancesPlaced() {
}

void AGGGardenerPlant::OnBaaingToPlant(AGGGoat* Goat) {
}

void AGGGardenerPlant::FertilizePlant() {
}

void AGGGardenerPlant::CullingToggle() {
}

void AGGGardenerPlant::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGGardenerPlant, bCanGrowFromBaa);
    DOREPLIFETIME(AGGGardenerPlant, InstancesPlaced);
    DOREPLIFETIME(AGGGardenerPlant, bIsFertilized);
}


