#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GGInstinct.h"
#include "GGInstinct_HotDogBounce.generated.h"

class AActor;
class UGGBouncyStaticMeshComponent;
class ULSCharacterMovementComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class GOATMULTIVERSE_API AGGInstinct_HotDogBounce : public AGGInstinct {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> BouncableHotDogClass;
    
public:
    AGGInstinct_HotDogBounce(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnGoatChangedMovementMode(TEnumAsByte<EMovementMode> NewMode, TEnumAsByte<EMovementMode> PrevMode, uint8 NewCustomMode, uint8 PrevCustomMode, ULSCharacterMovementComponent* MovementComp);
    
    UFUNCTION(BlueprintCallable)
    void OnAnyBouncableBounced(UGGBouncyStaticMeshComponent* BouncyMesh, AActor* BouncedActor, UPrimitiveComponent* BouncedComponent, FVector BouncedVelocity);
    
};

