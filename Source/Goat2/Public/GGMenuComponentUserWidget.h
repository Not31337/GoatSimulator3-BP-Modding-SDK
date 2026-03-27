#pragma once
#include "CoreMinimal.h"
#include "GGUserWidget.h"
#include "GGMenuComponentUserWidget.generated.h"

class UGGMenuUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGMenuComponentUserWidget : public UGGUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGiveFocusOnSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGMenuUserWidget* OwningTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGUserWidget* SpawningWidget;
    
    UGGMenuComponentUserWidget();

    UFUNCTION(BlueprintCallable)
    bool RemoveWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAssignedParentView(UGGMenuUserWidget* InTab, UGGUserWidget* InSpawningWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGMenuUserWidget* GetOwningTab();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGMenuUserWidget* GetOwningMenu();
    
};

