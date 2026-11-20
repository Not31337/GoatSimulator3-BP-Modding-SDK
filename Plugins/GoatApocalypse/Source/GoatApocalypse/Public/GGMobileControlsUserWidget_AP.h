#pragma once
#include "CoreMinimal.h"
#include "GGMobileControlsUserWidget.h"
#include "GGMobileControlsUserWidget_AP.generated.h"

class AGGTutorial;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class GOATAPOCALYPSE_API UGGMobileControlsUserWidget_AP : public UGGMobileControlsUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ApocalypseIntroTutorialID;
    
public:
    UGGMobileControlsUserWidget_AP();

private:
    UFUNCTION(BlueprintCallable)
    void OnTutorialCreated(AGGTutorial* Tutorial);
    
    UFUNCTION(BlueprintCallable)
    void OnObjectControlStarted(UObject* ControlledObject);
    
};

