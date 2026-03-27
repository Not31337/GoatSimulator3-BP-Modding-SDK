#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GGSpawnerWrapper.h"
#include "GGSplineToolActor.generated.h"

class UGGSpawnerModifierInterface;
class USceneComponent;
class USplineComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGSplineToolActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* Spline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGGSpawnerWrapper> Spawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGGSpawnerModifierInterface*> Modifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowBoundingBoxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReGenerateAfterMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReGenerateWhileDragging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> OtherSplineToFollow;
    
public:
    AGGSplineToolActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetupBasicSpawner();
    
    UFUNCTION(BlueprintCallable)
    void ReGenerate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBoxSphereBounds GetSplineBounds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USplineComponent* GetSpline() const;
    
};

