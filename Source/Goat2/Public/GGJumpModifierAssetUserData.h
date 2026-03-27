#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "JumpModifierEffectSettings.h"
#include "JumpModifierSettings.h"
#include "GGJumpModifierAssetUserData.generated.h"

class UGGJumpModifierDataAsset;
class UStaticMeshComponent;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGJumpModifierAssetUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGJumpModifierDataAsset* DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideGameplayDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJumpModifierSettings OverriddenModifierSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideEffectsDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJumpModifierEffectSettings OverriddenModifierEffectSettings;
    
    UGGJumpModifierAssetUserData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetModifierSettingsFromSMActor(UStaticMeshComponent* SMComp, FJumpModifierSettings& OutJumpModifierSettings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetModifierSettings(FJumpModifierSettings& OutJumpModifierSettings) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetModifierEffectSettingsFromSMActor(UStaticMeshComponent* SMComp, FJumpModifierEffectSettings& OutJumpModifierEffectSettings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetModifierEffectSettings(FJumpModifierEffectSettings& OutJumpModifierEffectSettings) const;
    
};

