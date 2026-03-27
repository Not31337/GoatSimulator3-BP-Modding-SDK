#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GGGoatGearPreviewInterface.h"
#include "GGGoatVisualizer.generated.h"

class USkeletalMeshComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGGoatVisualizer : public AActor, public IGGGoatGearPreviewInterface {
    GENERATED_BODY()
public:
    AGGGoatVisualizer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetSkelMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStaticMeshComponent* GetHorn() const;
    

    // Fix for true pure virtual functions not being implemented
};

