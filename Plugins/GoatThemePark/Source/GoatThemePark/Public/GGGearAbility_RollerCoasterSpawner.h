#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PerPlatformProperties.h"
#include "PerPlatformProperties.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GGGearAbility.h"
#include "GGSplineMeshParams.h"
#include "GGTraceParams.h"
#include "Templates/SubclassOf.h"
#include "GGGearAbility_RollerCoasterSpawner.generated.h"

class AActor;
class AGGPlayerController;
class AGGRollerCoasterSpawnedTrack;
class AStaticMeshActor;
class UAudioComponent;
class UGGGrindableSplineDataAsset;
class UMaterialInterface;
class USoundBase;
class USplineComponent;
class USplineMeshComponent;

UCLASS(Blueprintable)
class GOATTHEMEPARK_API UGGGearAbility_RollerCoasterSpawner : public UGGGearAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGRollerCoasterSpawnedTrack> TrackActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGSplineMeshParams TrackMeshParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGGrindableSplineDataAsset* GrindableSplineDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> GrindsplineOffsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnapDistanceToCloseLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnapDistanceToConnectExistingTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistanceBetweenPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceBetweenPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxYawTurnDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPitchChangeDegrees;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformFloat MaxTotalSplineLength;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformInt MaxTracksPerPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGTraceParams TraceParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AboveGroundPlacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceHeightAdjustment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TangentMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPlacementDistanceFromPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookingUpMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HapticsStrengthDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HapticsStrengthCloseLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* PreviewMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* PreviewDisabledMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SoundTrackPlacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* LoopSound;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AGGRollerCoasterSpawnedTrack* CurrentTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlacementActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlacementRestricted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCurrentTrackWasAdopted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PlacementLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* PreviewActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* PreviewSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USplineMeshComponent*> PreviewMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStaticMeshActor* StartPointPreviewActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer EffectSources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponent;
    
public:
    UGGGearAbility_RollerCoasterSpawner();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_AddPointToSpline(FVector WorldLocation);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatHeadbutt(AGGPlayerController* GoatPlayerController);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastPlayHaptics(bool CloseSpline);
    
};

