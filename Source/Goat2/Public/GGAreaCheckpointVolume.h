#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "GGAreaCheckpointVolume.generated.h"

class AActor;
class AGGTeleportAreaLogic;

UCLASS(Blueprintable)
class GOAT2_API AGGAreaCheckpointVolume : public ATriggerVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AGGTeleportAreaLogic> AreaLogic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CheckpointToSet;
    
    AGGAreaCheckpointVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
};

