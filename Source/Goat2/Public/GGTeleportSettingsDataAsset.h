#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LoadingScreenParameters.h"
#include "SpecialLocationAdjust.h"
#include "TeleportParameters.h"
#include "GGTeleportSettingsDataAsset.generated.h"

class AActor;
class AGGVehicle;
class UGGTeleportSettingsDataAsset;

UCLASS(Blueprintable)
class GOAT2_API UGGTeleportSettingsDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTeleportParameters TeleportParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadingScreenParameters LoadingScreenParameters;
    
    UGGTeleportSettingsDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTeleportParameters MakeTeleportParameters(FTeleportParameters BaseParameters, int32 Priority, AGGVehicle* TeleportIntoVehicle, AActor* LocationRelativeToActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTeleportParameters GetTeleportParameters() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTeleportParameters GetTeleportAssetParameters(UGGTeleportSettingsDataAsset* SettingAsset, int32 Priority, AGGVehicle* TeleportIntoVehicle, AActor* LocationRelativeToActor, FSpecialLocationAdjust SpecialAdjust, FLoadingScreenParameters& LoadingScreenParams);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLoadingScreenParameters GetLoadingScreenParameters() const;
    
};

