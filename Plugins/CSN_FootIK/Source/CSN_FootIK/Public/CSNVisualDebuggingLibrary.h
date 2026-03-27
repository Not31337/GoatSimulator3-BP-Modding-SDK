#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CSNVisualDebugInfo.h"
#include "CSNVisualDebuggingLibrary.generated.h"

class AHUD;

UCLASS(Blueprintable)
class CSN_FOOTIK_API UCSNVisualDebuggingLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCSNVisualDebuggingLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetHUD(AHUD* TheHUD);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveDebugInfo(int32 Key);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNewVisualDebugStringKey();
    
    UFUNCTION(BlueprintCallable)
    static void AddOrReplaceDebugInfo(int32 Key, const FCSNVisualDebugInfo& DebugInfo, bool bAppendToText);
    
};

