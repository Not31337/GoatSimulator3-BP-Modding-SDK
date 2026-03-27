#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Prefs.generated.h"

class UPrefsEvents;

UCLASS(Blueprintable)
class GOAT2_API UPrefs : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPrefs();

    UFUNCTION(BlueprintCallable)
    static void SetString(FName Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetInt(FName Key, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetFloat(FName Key, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetBool(FName Key, bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TMap<FName, FString> GetStringMap();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetString(FName Key, const FString& Default);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TMap<FName, float> GetNumberMap();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetInt(FName Key, int32 Default);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFloat(FName Key, float Default);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPrefsEvents* GetEvents();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TMap<FName, bool> GetBoolMap();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetBool(FName Key, bool Default);
    
    UFUNCTION(BlueprintCallable)
    static void Del(FName Key);
    
};

