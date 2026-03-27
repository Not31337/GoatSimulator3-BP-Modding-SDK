#include "GGSearchLight.h"
#include "Components/SceneComponent.h"
#include "Components/SpotLightComponent.h"
#include "Components/StaticMeshComponent.h"

AGGSearchLight::AGGSearchLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->BaseMeshSocket = CreateDefaultSubobject<USceneComponent>(TEXT("BaseMeshSocket"));
    this->BaseMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
    this->LightMeshSocket = CreateDefaultSubobject<USceneComponent>(TEXT("LightMeshSocket"));
    this->SearchLightMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SearchLightMesh"));
    this->SpotLightComponent = CreateDefaultSubobject<USpotLightComponent>(TEXT("SpotLightComponent"));
    this->GroundCheckCollisionChannel = ECC_Visibility;
    this->GroundCheckDistance = 100.00f;
    this->TrackingSpeed = 90.00f;
    this->ActorToFollow = NULL;
    this->ComponentToFollow = NULL;
    this->BaseMeshComponent->SetupAttachment(BaseMeshSocket);
    this->BaseMeshSocket->SetupAttachment(RootComponent);
    this->LightMeshSocket->SetupAttachment(RootComponent);
    this->SearchLightMeshComponent->SetupAttachment(LightMeshSocket);
    this->SpotLightComponent->SetupAttachment(SearchLightMeshComponent);
}

void AGGSearchLight::SetComponentToFollow(USceneComponent* Component) {
}

void AGGSearchLight::SetActorToFollow(AActor* Actor) {
}


