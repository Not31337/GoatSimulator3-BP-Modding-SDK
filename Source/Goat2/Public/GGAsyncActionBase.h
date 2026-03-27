#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnEaseCompletionDelegate.h"
#include "OnEaseUpdateDelegate.h"
#include "GGAsyncActionBase.generated.h"

class UObject;

UCLASS(Blueprintable)
class GOAT2_API UGGAsyncActionBase : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEaseUpdate OnUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEaseCompletion OnCompletion;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> WorldContextObject;
    
public:
    UGGAsyncActionBase();

    UFUNCTION(BlueprintCallable)
    static bool DestroyNamedActions(UObject* ActionOwner, FName ActionName);
    
    UFUNCTION(BlueprintCallable)
    static bool DestroyAllActions(UObject* ActionOwner);
    
};

