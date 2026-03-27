#include "GGVehicleCustomizationComponent.h"
#include "Net/UnrealNetwork.h"

UGGVehicleCustomizationComponent::UGGVehicleCustomizationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PossibleWheelSockets.AddDefaulted(4);
    this->WheelMeshClass = NULL;
    this->bCanChangeWheels = true;
    this->bHasWheelsOnBodyMesh = false;
    this->DefaultWheels = NULL;
    this->WheelAttachDistance = 50.00f;
    this->bCanChangePaint = true;
    this->DefaultBodyKit = NULL;
    this->VisualMesh = NULL;
    this->ActivePaint = NULL;
    this->ActiveWheels = NULL;
    this->ActiveBodyKit = NULL;
}

void UGGVehicleCustomizationComponent::OnRep_ActiveWheels(UGGVehicleCustomizationDataAsset* OldWheels) {
}

void UGGVehicleCustomizationComponent::OnRep_ActivePaint(UGGVehicleCustomizationDataAsset* OldPaint) {
}

void UGGVehicleCustomizationComponent::OnRep_ActiveBodyKit(UGGVehicleCustomizationDataAsset* OldBodyKit) {
}

void UGGVehicleCustomizationComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGVehicleCustomizationComponent, ActivePaint);
    DOREPLIFETIME(UGGVehicleCustomizationComponent, ActiveWheels);
    DOREPLIFETIME(UGGVehicleCustomizationComponent, ActiveBodyKit);
}


