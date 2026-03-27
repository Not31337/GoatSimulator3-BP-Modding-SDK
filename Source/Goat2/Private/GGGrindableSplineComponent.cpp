#include "GGGrindableSplineComponent.h"

UGGGrindableSplineComponent::UGGGrindableSplineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetAddressable = true;
    this->Mobility = EComponentMobility::Static;
    this->Tangent = 0.00f;
}

void UGGGrindableSplineComponent::UpdateSplineMeshes() {
}

bool UGGGrindableSplineComponent::UpdateLastSplineSection() {
    return false;
}

void UGGGrindableSplineComponent::SetSplineSection(int32 StartSplinePoint, const FVector& NewStartLocation, const FVector& NewStartTangent, const FVector& NewNextSplineLocation, const FVector& NewNextTangent, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) {
}

bool UGGGrindableSplineComponent::Interact_Implementation(AActor* SourceActor, float HeldFor) {
    return false;
}

float UGGGrindableSplineComponent::GetRequiredHoldDuration_Implementation() {
    return 0.0f;
}

FText UGGGrindableSplineComponent::GetInteractTextTitle_Implementation(AGGPlayerController* InteractingPlayerController) {
    return FText::GetEmpty();
}

FText UGGGrindableSplineComponent::GetInteractTextBody_Implementation(AGGPlayerController* InteractingPlayerController) {
    return FText::GetEmpty();
}

bool UGGGrindableSplineComponent::GetAutoInteractPastDuration_Implementation() {
    return false;
}

UGGGrindableSplineComponent* UGGGrindableSplineComponent::CreateGrindableSplineComponent(AActor* Owner, UStaticMesh* SplineMesh, FName SplineCompName, USceneComponent* StartPoint, USceneComponent* NewEndPoint, TEnumAsByte<ESplineMeshAxis::Type> MeshForwardAxis, float VerticalTangent, float MeshScale, float CullDistance, bool bShouldCastShadows, UMaterialInterface* OverrideMeshMaterial, EComponentCreationMethod SplineCreationMethod) {
    return NULL;
}

bool UGGGrindableSplineComponent::CanBeInteractedWith_Implementation(AActor* SourceActor) {
    return false;
}

void UGGGrindableSplineComponent::AddSplineSectionWithNewEndPoint(USceneComponent* NewEndPoint) {
}

void UGGGrindableSplineComponent::AddSplineSectionAtLocation(FVector NewEndPointLocation) {
}


