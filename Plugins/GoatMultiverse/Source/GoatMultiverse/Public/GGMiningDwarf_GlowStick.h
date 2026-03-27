#pragma once
#include "CoreMinimal.h"
#include "GGPhysicsActor.h"
#include "GGMiningDwarf_GlowStick.generated.h"

class UCurveFloat;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UPointLightComponent;

UCLASS(Blueprintable)
class GOATMULTIVERSE_API AGGMiningDwarf_GlowStick : public AGGPhysicsActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPointLightComponent* PointLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* GlowMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MobileGlowMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlayerColorMaterialParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GlowStrengthMaterialParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* LifetimeLightStrength;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MaterialInstanceDynamic;
    
public:
    AGGMiningDwarf_GlowStick(const FObjectInitializer& ObjectInitializer);

};

