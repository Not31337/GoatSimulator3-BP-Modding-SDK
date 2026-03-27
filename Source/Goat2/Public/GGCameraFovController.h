#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "GGCameraFovController.generated.h"

class UCameraComponent;
class UGGFovAnimData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGCameraFovController : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* TargetCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGFovAnimData* FovAnimData;
    
public:
    UGGCameraFovController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SetTargetFov(float TargetFov, float FovAnimLength, float FovAnimStartDelay, TEnumAsByte<EEasingFunc::Type> FovAnimEaseCurve, bool bDoInterrupt);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetCamera(UCameraComponent* NewTargetCamera);
    
    UFUNCTION(BlueprintCallable)
    void ResetTargetFov(float FovAnimLength, float FovAnimStartDelay, TEnumAsByte<EEasingFunc::Type> FovAnimEaseCurve);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInitialFov() const;
    
};

