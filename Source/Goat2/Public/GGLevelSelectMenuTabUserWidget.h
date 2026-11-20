#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "DLCLevelData.h"
#include "EGGLobbyUpdateType.h"
#include "GGMenuTabUserWidget.h"
#include "LevelFocusedDelegate.h"
#include "Templates/SubclassOf.h"
#include "GGLevelSelectMenuTabUserWidget.generated.h"

class UGGLevelSelectUserWidget;
class UGGScrollBox;
class USizeBox;
class USpacer;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGLevelSelectMenuTabUserWidget : public UGGMenuTabUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGLevelSelectUserWidget> LevelSelectWidgetClass;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelFocused OnLevelFocused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGScrollBox* WorldScrollbox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* WorldSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpacer* WorldAutoSizer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpacer* SpacerAutoSizeMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGGLevelSelectUserWidget*> LevelSelectWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDLCLevelData> DLCLevelData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGLevelSelectUserWidget* CachedFocusedLevelSelect;
    
public:
    UGGLevelSelectMenuTabUserWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnLobbyUpdated(TEnumAsByte<EGGLobbyUpdateType> LobbyUpdateType);
    
    UFUNCTION(BlueprintCallable)
    void OnLevelSelectFocused(UGGLevelSelectUserWidget* InLevelSelectWidget);
    
    UFUNCTION(BlueprintCallable)
    void OnLevelSelectExpanded(UGGLevelSelectUserWidget* InLevelSelectWidget);
    
    UFUNCTION(BlueprintCallable)
    void OnLeftLobby();
    
    UFUNCTION(BlueprintCallable)
    void OnJoinedLobby(bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void OnCreatedLobby(bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    UWidget* HandleLevelWidgetNavigation(EUINavigation InNavigation);
    
    UFUNCTION(BlueprintCallable)
    void ForceMaintainFocus();
    
};

