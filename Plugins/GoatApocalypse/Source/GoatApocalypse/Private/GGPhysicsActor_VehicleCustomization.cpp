#include "GGPhysicsActor_VehicleCustomization.h"
#include "Components/SphereComponent.h"
#include "Net/UnrealNetwork.h"

AGGPhysicsActor_VehicleCustomization::AGGPhysicsActor_VehicleCustomization(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->HighlightDistance = CreateDefaultSubobject<USphereComponent>(TEXT("Overlap Sphere"));
    this->DataAssetLoaded = NULL;
    this->HighlightDistance->SetupAttachment(RootComponent);
}

AGGPhysicsActor_VehicleCustomization* AGGPhysicsActor_VehicleCustomization::SpawnVehicleCustomizationPActor(const UObject* WorldRef, const FTransform& SpawnTransform, TSoftObjectPtr<UGGVehicleCustomizationDataAsset> InDataAsset) {
    return NULL;
}

void AGGPhysicsActor_VehicleCustomization::OnRep_DataAsset() {
}

void AGGPhysicsActor_VehicleCustomization::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AGGPhysicsActor_VehicleCustomization::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AGGPhysicsActor_VehicleCustomization::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGPhysicsActor_VehicleCustomization, DataAsset);
}


