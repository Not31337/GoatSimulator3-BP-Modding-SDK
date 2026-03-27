#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "OnCheckpointCrossedDelegate.h"
#include "Templates/SubclassOf.h"
#include "GGPlayerGame_Race_CheckpointPath.generated.h"

class AGGVehicle;
class UParticleSystemComponent;
class USplineComponent;
class UTextRenderComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGPlayerGame_Race_CheckpointPath : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCheckpointCrossed OnCheckpointCrossed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* Spline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> CheckpointClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CheckpointInstanceModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSnapSplineToGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D GroundCheckVerticalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> GroundTestChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator PreviewRotationOffset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Checkpoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystemComponent*> PreviewCheckpoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTextRenderComponent*> PreviewTextRenders;
    
public:
    AGGPlayerGame_Race_CheckpointPath(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SpawnCheckpoints();
    
    UFUNCTION(BlueprintCallable)
    void ResetCheckpointOverlaps(const AGGVehicle* Vehicle, bool bUnHideCheckpoints);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCheckpointBeginOverlap(AActor* OverlappedCheckpoint, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSpawnCheckpoints();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastDestroyCheckpoints();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DestroyCheckpoints();
    
};

