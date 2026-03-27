#pragma once
#include "CoreMinimal.h"
#include "Engine/CullDistanceVolume.h"
#include "Engine/CullDistanceVolume.h"
#include "MobileCullDistanceOverride.h"
#include "GGPerPlatformCullDistanceVolume.generated.h"

class UMovieSceneSequencePlayer;

UCLASS(Blueprintable)
class GOAT2_API AGGPerPlatformCullDistanceVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCullDistanceSizePair> MobileCullDistances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCullDistanceSizePair> OriginalMobileCullDistances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCullDistanceSizePair> MobileCinematicCullDistances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> MobileCinematicCullDistanceMultiplierLarge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> MobileCinematicCullDistanceMultiplierSmall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MobileLargeObjectSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MobileCinematicStaticLODMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MobileExcludeLandscapeSplines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMobileCullDistanceOverride> MobileExcludedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMovieSceneSequencePlayer* CurrentMoviePlayer;
    
    AGGPerPlatformCullDistanceVolume(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void RevertMobileCinematicDrawDistance();
    
    UFUNCTION(BlueprintCallable)
    void IncreaseMobileCinematicDrawDistance(UMovieSceneSequencePlayer* NewMoivePlayer);
    
    UFUNCTION(BlueprintCallable)
    void ChangeCullingForSmallerObjects(bool bIncrease);
    
};

