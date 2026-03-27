#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OnTeleportProgressUpdatedDelegate.h"
#include "GGMapDetailsPanelUserWidget.generated.h"

class AActor;
class UGGMapMarkerUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGMapDetailsPanelUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTeleportProgressUpdated OnTeleportProgressUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentTimeHeld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToFinish;
    
public:
    UGGMapDetailsPanelUserWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateSelectedActor(AActor* InActor, UGGMapMarkerUserWidget* MapMarkerUserWidget);
    
};

