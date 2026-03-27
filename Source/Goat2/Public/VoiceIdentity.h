#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EGender.h"
#include "VoiceIdentity.generated.h"

USTRUCT(BlueprintType)
struct FVoiceIdentity : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGender Gender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeRandomlySelected;
    
    GOAT2_API FVoiceIdentity();
};

