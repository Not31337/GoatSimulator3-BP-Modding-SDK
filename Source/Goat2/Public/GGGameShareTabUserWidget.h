#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Input/Events.h"
#include "Input/Events.h"
#include "GGMenuTabUserWidget.h"
#include "GGGameShareTabUserWidget.generated.h"

class UGGButtonUserWidget;
class UGGUserWidget;
class UVerticalBox;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGGameShareTabUserWidget : public UGGMenuTabUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGButtonUserWidget* LocalCommunicationButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGButtonUserWidget* CampusButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGButtonUserWidget* EndButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* ButtonsBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGameShareActive;
    
    UGGGameShareTabUserWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnLocalCommunicationButtonInteracted(UGGUserWidget* Widget, FPointerEvent PointerEvent, FKeyEvent KeyEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnEndButtonInteracted(UGGUserWidget* Widget, FPointerEvent PointerEvent, FKeyEvent KeyEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnCampusButtonInteracted(UGGUserWidget* Widget, FPointerEvent PointerEvent, FKeyEvent KeyEvent);
    
    UFUNCTION(BlueprintCallable)
    UWidget* HandleListNavigation(EUINavigation NavigationDir);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGameSharePossible();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGameShareOngoing();
    
};

