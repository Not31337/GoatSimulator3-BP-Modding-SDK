#pragma once
#include "CoreMinimal.h"
#include "DLCLevelData.h"
#include "GGButtonUserWidget.h"
#include "InitializeSaveButtonDelegate.h"
#include "LevelSaveDeleteRequestedDelegate.h"
#include "GGLevelSelectSaveUserWidget.generated.h"

class UGGButton;
class UOverlay;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGLevelSelectSaveUserWidget : public UGGButtonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInitializeSaveButton OnInitializeSaveButton;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelSaveDeleteRequested OnLevelSaveDeleteRequested;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* OverlaySave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* OverlayNoSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGButton* DeleteButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Description_LastPlayedDate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Description_Playtime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Description_Chaos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Description_Quests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Description_Towers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDLCLevelData LevelData;
    
    UGGLevelSelectSaveUserWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnDeleteButtonPressed();
    
};

