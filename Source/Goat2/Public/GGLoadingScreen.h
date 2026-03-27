#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GGMenuUserWidget.h"
#include "LoadingScreenHint.h"
#include "GGLoadingScreen.generated.h"

class UDataTable;
class UWorld;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGLoadingScreen : public UGGMenuUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LoadingScreenHintDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> DefaultLoadingScreenHintRows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bListenToPostLoadMapCallback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MobileRoundedEdgePaddingPercentage;
    
    UGGLoadingScreen();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPostLoadMapWithWorld(UWorld* World);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostLoadMap(UWorld* World);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLoadingScreenHint GetRandomLoadingScreenHintFromRows(const TArray<FDataTableRowHandle>& Hints);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLoadingScreenHint GetRandomDefaultLoadingScreenHint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetHintDescriptionFromHint(const FLoadingScreenHint& Hint) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalculateMobilePadding() const;
    
};

