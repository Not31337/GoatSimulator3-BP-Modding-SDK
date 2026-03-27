#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "Chaos/ChaosEngineInterface.h"
#include "SurfaceSounds.h"
#include "GGFootstepComponent.generated.h"

class USoundBase;
class USoundCue;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGFootstepComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckSurfaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* FoleySound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSurfaceSounds FootstepSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSurfaceSounds JumpingSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSurfaceSounds LandingSounds;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D FootStepVolumeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D JumpLandVolumeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTimeBetweenFootsteps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETraceTypeQuery> TraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TraceStartLocationOffset;
    
public:
    UGGFootstepComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSoundOverride(USoundCue* Override);
    
    UFUNCTION(BlueprintCallable)
    void SetLandSoundOverride(USoundCue* Override);
    
    UFUNCTION(BlueprintCallable)
    void SetJumpSoundOverride(USoundCue* Override);
    
    UFUNCTION(BlueprintCallable)
    void SetFootstepSoundOverride(USoundCue* Override);
    
    UFUNCTION(BlueprintCallable)
    void PlayLandSound(const FVector& BoneLocation, const FVector& TraceDirection);
    
    UFUNCTION(BlueprintCallable)
    void PlayJumpSound(const FVector& BoneLocation, const FVector& TraceDirection);
    
    UFUNCTION(BlueprintCallable)
    void PlayFootstepSound(const FVector& BoneLocation, const FVector& TraceDirection);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    USoundBase* GetSoundForSurface(EPhysicalSurface SurfaceType, const FSurfaceSounds& Sounds) const;
    
};

