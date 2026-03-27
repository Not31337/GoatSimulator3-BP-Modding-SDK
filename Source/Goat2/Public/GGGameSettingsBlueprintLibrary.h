#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GGGameSetting.h"
#include "GGGameSettingsBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UGGGameSettingsBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGGGameSettingsBlueprintLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float SettingToFloat(const FGGGameSetting& InSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SettingToBool(const FGGGameSetting& InSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSettingValueAsString(FName SettingName, FName SettingCategory, int32 OwningPlayerID, bool bIncludeValueTextFactor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSettingValueAsInt(FName SettingName, FName SettingCategory, int32 OwningPlayerID, bool bIncludeValueTextFactor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetSettingValueAsFloat(FName SettingName, FName SettingCategory, int32 OwningPlayerID, bool bIncludeValueTextFactor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetSettingValueAsBool(FName SettingName, FName SettingCategory, int32 OwningPlayerID);
    
};

