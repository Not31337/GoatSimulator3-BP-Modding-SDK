#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GGSkyLightSettings.h"
#include "GGSkyLightManager.generated.h"

class ADirectionalLight;
class AExponentialHeightFog;
class ASkyLight;

UCLASS(Blueprintable)
class GOAT2_API AGGSkyLightManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ASkyLight> SkyLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ADirectionalLight> WorldLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ADirectionalLight> MobileWorldLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AExponentialHeightFog> HeightFog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> SkySphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGSkyLightSettings OverriddenSkyLightSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGSkyLightSettings CachedSkyLightSettings;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SunState, meta=(AllowPrivateAccess=true))
    bool bSunState;
    
public:
    AGGSkyLightManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void TurnOnSun();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void TurnOffSun();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTurnedOnSun(FGGSkyLightSettings Settings);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTurnedOffSun(FGGSkyLightSettings Settings);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SunState();
    
};

