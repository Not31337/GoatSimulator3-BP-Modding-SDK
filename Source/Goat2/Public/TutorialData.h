#pragma once
#include "CoreMinimal.h"
#include "ETutorialPersistence.h"
#include "ETutorialSplitScreenBehaviour.h"
#include "TutorialActionInputStruct.h"
#include "TutorialData.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FTutorialData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETutorialPersistence::Type> Persistence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ActionKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTutorialActionInputStruct> Actions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETutorialSplitScreenBehaviour SplitScreenBehaviour;
    
    FTutorialData();
};

