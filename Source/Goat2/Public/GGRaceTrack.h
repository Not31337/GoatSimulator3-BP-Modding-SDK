#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GGRaceTrack.generated.h"

class AActor;
class UPrimitiveComponent;
class USplineComponent;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class GOAT2_API UGGRaceTrack : public UInterface {
    GENERATED_BODY()
};

class GOAT2_API IGGRaceTrack : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual void SpawnCheckpoints() PURE_VIRTUAL(SpawnCheckpoints,);
    
    UFUNCTION(BlueprintCallable)
    virtual void ResetCheckpoints() PURE_VIRTUAL(ResetCheckpoints,);
    
protected:
    UFUNCTION()
    virtual void OnCheckpointCrossed(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) PURE_VIRTUAL(OnCheckpointCrossed,);
    
public:
    UFUNCTION(BlueprintCallable)
    virtual bool IsTrackFullySetup() const PURE_VIRTUAL(IsTrackFullySetup, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual USplineComponent* GetTrackSpline() const PURE_VIRTUAL(GetTrackSpline, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual TArray<FVector> GetCheckpointLocations() const PURE_VIRTUAL(GetCheckpointLocations, return TArray<FVector>(););
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetCheckpointIndex(const AActor* CheckPoint) const PURE_VIRTUAL(GetCheckpointIndex, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual AActor* GetCheckpoint(int32 Index) const PURE_VIRTUAL(GetCheckpoint, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual TArray<AActor*> GetAllCheckpoints() const PURE_VIRTUAL(GetAllCheckpoints, return TArray<AActor*>(););
    
    UFUNCTION(BlueprintCallable)
    virtual void GenerateTrack() PURE_VIRTUAL(GenerateTrack,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual void ClearTrackSpline() PURE_VIRTUAL(ClearTrackSpline,);
    
};

