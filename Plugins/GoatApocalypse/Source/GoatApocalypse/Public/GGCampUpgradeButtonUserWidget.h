#pragma once
#include "CoreMinimal.h"
#include "GGButtonUserWidget.h"
#include "GGCampUpgradeButtonUserWidget.generated.h"

class AGGCastleStretchGoal_Apocalypse;
class UGGGoatCastleSubsystem;
class UImage;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class GOATAPOCALYPSE_API UGGCampUpgradeButtonUserWidget : public UGGButtonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreConstructIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> PreConstructIconMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGCastleStretchGoal_Apocalypse* StretchGoal;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGGoatCastleSubsystem* GoatCastleSubsystem;
    
public:
    UGGCampUpgradeButtonUserWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateGoalIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateStretchGoalProgress(bool bIsUnlocked, bool bIsUnlockable);
    
};

