#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GGLoadNPCAppearanceOutputPinDelegate.h"
#include "GGLoadNPCAppearance.generated.h"

class UGGLoadNPCAppearance;
class UObject;

UCLASS(Blueprintable)
class GOAT2_API UGGLoadNPCAppearance : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGLoadNPCAppearanceOutputPin Finished;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> TemporaryReferences;
    
public:
    UGGLoadNPCAppearance();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UGGLoadNPCAppearance* LoadNPCAppearance(const UObject* NewWorldContextObject, const TArray<FString>& NPCAppearance);
    
    UFUNCTION(BlueprintCallable)
    void AppearanceLoaded();
    
};

