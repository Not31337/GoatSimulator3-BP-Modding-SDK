#pragma once
#include "CoreMinimal.h"
#include "GGButtonUserWidget.h"
#include "QuickCommandDelegateDelegate.h"
#include "GGQuickCommandButton.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGQuickCommandButton : public UGGButtonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuickCommandDelegate QuickCommandDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OverrideLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NotificationText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText AssetText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* CommandLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* NotificationLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* AssetLabel;
    
    UGGQuickCommandButton();

    UFUNCTION(BlueprintCallable)
    void RunDelegateCommand();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasNativeDelegateBound();
    
};

