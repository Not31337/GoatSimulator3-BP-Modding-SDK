#pragma once
#include "CoreMinimal.h"
#include "AppearanceRepElement.generated.h"

USTRUCT(BlueprintType)
struct FAppearanceRepElement {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 AppearanceInt;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint16> AttachmentInts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValid;
    
    GOAT2_API FAppearanceRepElement();
};

