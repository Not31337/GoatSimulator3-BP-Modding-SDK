#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "WallrunModifierEffectSettings.h"
#include "WallrunModifierSettings.h"
#include "GGWallrunModifierAssetUserData.generated.h"

class UGGWallrunModifierDataAsset;
class UStaticMeshComponent;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGWallrunModifierAssetUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGWallrunModifierDataAsset* DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideGameplayDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWallrunModifierSettings OverriddenModifierSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideEffectsDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWallrunModifierEffectSettings OverriddenModifierEffectSettings;
    
    UGGWallrunModifierAssetUserData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetModifierSettingsFromSMActor(UStaticMeshComponent* SMComp, FWallrunModifierSettings& OutWallrunModifierSettings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetModifierSettings(FWallrunModifierSettings& OutWallrunModifierSettings) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetModifierEffectSettingsFromSMActor(UStaticMeshComponent* SMComp, FWallrunModifierEffectSettings& OutWallrunModifierEffectSettings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetModifierEffectSettings(FWallrunModifierEffectSettings& OutWallrunModifierEffectSettings) const;
    
};

