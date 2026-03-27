#pragma once
#include "CoreMinimal.h"
#include "GGUserWidget.h"
#include "GGMapAreaInfoEntryUserWidget.generated.h"

class UBorder;
class UImage;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGMapAreaInfoEntryUserWidget : public UGGUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTotalIsSecretUntilCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* EntryCountTextBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* EntryStrikeBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* EntryBorder;
    
    UGGMapAreaInfoEntryUserWidget();

    UFUNCTION(BlueprintCallable)
    void SetCountAndTotal(int32 InCount, int32 InTotal);
    
};

