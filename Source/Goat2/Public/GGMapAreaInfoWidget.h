#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MapAreaStat.h"
#include "GGMapAreaInfoWidget.generated.h"

class AActor;
class UGGMapAreaInfoEntryUserWidget;
class UGGMapUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGMapAreaInfoWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGMapUserWidget* MapWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMapAreaStat> CurrentAreaInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCountRampsNative;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGGMapAreaInfoEntryUserWidget*> AreaInfoEntries;
    
public:
    UGGMapAreaInfoWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateMapAreaStatsForContextActor(AActor* AreaInfoContextActor);
    
    UFUNCTION(BlueprintCallable)
    void UpdateAreaInfo();
    
    UFUNCTION(BlueprintCallable)
    void SetMapWidget(UGGMapUserWidget* InMapWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGetMapAreaStatsForContextActor(AActor* AreaInfoContextActor, const TArray<AActor*>& RadarActors);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFogOverlayHovered(AActor* AreaInfoContextActor);
    
    UFUNCTION(BlueprintCallable)
    void AppendCurrentAreaInfo(const FString& Key, FMapAreaStat AreaStat);
    
};

