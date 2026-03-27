#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PrefsEvents.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UPrefsEvents : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPrefValueChanged, FName, Name);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPrefStringChanged, FName, Name);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPrefFloatChanged, FName, Name);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPrefBoolChanged, FName, Name);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrefBoolChanged BoolChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrefFloatChanged FloatChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrefStringChanged StringChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrefStringChanged ValueChanged;
    
    UPrefsEvents();

    UFUNCTION(BlueprintCallable, Exec)
    void Prefs(const FString& Cmd);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Pref(const FString& Cmd);
    
};

