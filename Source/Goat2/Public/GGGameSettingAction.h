#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EGGGameSettingChangeContext.h"
#include "GGGameSetting.h"
#include "GGGameSettingAction.generated.h"

class AGGPlayerController;

UCLASS(Abstract, Blueprintable)
class GOAT2_API UGGGameSettingAction : public UObject {
    GENERATED_BODY()
public:
    UGGGameSettingAction();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString SetValue(const FString& InNewValue, const FGGGameSetting& InSetting, EGGGameSettingChangeContext InContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RunAction(const FGGGameSetting& InSetting) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString LoadValue(const FString& InValue, const FGGGameSetting& InSetting) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetValue(const FString& CurrentValue, const FGGGameSetting& InSetting) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AGGPlayerController* GetPrimaryPlayerController(const FGGGameSetting& InSetting);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetDefault(const FString& CurrentDefault, const FGGGameSetting& InSetting) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyValue(const FString& InCurrentValue, const FGGGameSetting& InSetting) const;
    
};

