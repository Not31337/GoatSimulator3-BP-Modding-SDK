#include "GGControllerRumbleComponent.h"

UGGControllerRumbleComponent::UGGControllerRumbleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ForceFeedbackEffectsDataTable = NULL;
}




void UGGControllerRumbleComponent::StopForceFeedbackForPlayer(APlayerController* PlayerController, FGameplayTag ForceFeedbackEffect) {
}

UGGForceFeedbackComponent* UGGControllerRumbleComponent::SpawnForceFeedbackAttached(FGameplayTag ForceFeedbackEffect, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, bool bLooping, float IntensityMultiplier, float StartTime, bool bAutoDestroy) {
    return NULL;
}

UGGForceFeedbackComponent* UGGControllerRumbleComponent::SpawnForceFeedbackAtLocation(const UObject* WorldContextObject, FGameplayTag ForceFeedbackEffect, FVector Location, FRotator Rotation, bool bLooping, float IntensityMultiplier, float StartTime, bool bAutoDestroy) {
    return NULL;
}

void UGGControllerRumbleComponent::PlayRumbleIfSettingIsEnabled(FGGGameSetting& InSetting) {
}

void UGGControllerRumbleComponent::PlayForceFeedbackForPlayer(APlayerController* PlayerController, FGameplayTag ForceFeedbackEffect, bool bLooping, bool bIgnoreTimeDilation, bool bPlayWhilePaused) {
}


void UGGControllerRumbleComponent::OnPawnPossessed(APawn* NewPawn) {
}





void UGGControllerRumbleComponent::OnLocalGoatMeshHit(UPrimitiveComponent* GoatMesh, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}



void UGGControllerRumbleComponent::OnLocalGoatHeadbutting_Internal(AGGGoat* LocalGoat, bool bHitSomething, const TArray<AActor*>& HeadbuttedActors, bool bIsChargeHeadbutt) {
}




void UGGControllerRumbleComponent::OnLocalGoatExitingVehicle(AGGCharacter* GoatCharacter, AGGVehicle* Vehicle) {
}

void UGGControllerRumbleComponent::OnLocalGoatEnteringVehicle(AGGCharacter* GoatCharacter, AGGVehicle* Vehicle) {
}



void UGGControllerRumbleComponent::OnLocalGoatBackkicking_Internal(AGGGoat* LocalGoat, bool bHitSomething, const TArray<AActor*>& KickedActors) {
}




void UGGControllerRumbleComponent::OnGoatJumped(AGGGoat* Goat, const FFindFloorResult& Floor, bool bWasBouncyJump) {
}





bool UGGControllerRumbleComponent::IsLocalGoatInVehicle() const {
    return false;
}

bool UGGControllerRumbleComponent::IsLocalGoatDriving() const {
    return false;
}

bool UGGControllerRumbleComponent::HasMeshMaterial(const UStaticMeshComponent* Mesh, const TArray<TSoftObjectPtr<UMaterialInterface>>& Materials) {
    return false;
}

float UGGControllerRumbleComponent::GetTimeSinceStartChargingHeadbutt() const {
    return 0.0f;
}

AGGGoat* UGGControllerRumbleComponent::GetLocalPossessedGoat() const {
    return NULL;
}

void UGGControllerRumbleComponent::ClientStopForceFeedback_Implementation(FGameplayTag ForceFeedbackEffect) {
}

void UGGControllerRumbleComponent::ClientPlayerForceFeedback_Implementation(FGameplayTag ForceFeedbackEffect, bool bLooping, bool bIgnoreTimeDilation, bool bPlayWhilePaused) {
}


