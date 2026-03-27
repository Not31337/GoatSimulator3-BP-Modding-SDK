#pragma once
#include "CoreMinimal.h"
#include "SavedGearPreset.h"
#include "PersonalGearPreset.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FPersonalGearPreset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedGearPreset SavedGearPreset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 CreationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AssignedIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SetNickname;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFavorite;
    
public:
    FPersonalGearPreset();
};

