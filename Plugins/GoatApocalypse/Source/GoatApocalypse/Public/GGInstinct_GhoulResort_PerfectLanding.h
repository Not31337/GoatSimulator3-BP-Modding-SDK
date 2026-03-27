#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GGInstinct.h"
#include "GGInstinct_GhoulResort_PerfectLanding.generated.h"

class AActor;
class AGGGoat;
class UBoxComponent;
class UPrimitiveComponent;

UCLASS(Abstract, Blueprintable)
class GOATAPOCALYPSE_API AGGInstinct_GhoulResort_PerfectLanding : public AGGInstinct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinAirTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* OverlapVolumeTopOfTheHead;
    
    AGGInstinct_GhoulResort_PerfectLanding(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveOverlapVolume();
    
    UFUNCTION(BlueprintCallable)
    void OnGoatPerfectLanding(AGGGoat* Goat, FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void AsignOverlapVolume(UBoxComponent* InVolume);
    
};

