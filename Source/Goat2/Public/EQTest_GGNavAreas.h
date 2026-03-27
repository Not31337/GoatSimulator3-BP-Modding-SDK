#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "EQTest_GGNavAreas.generated.h"

class UNavArea;

UCLASS(Blueprintable)
class GOAT2_API UEQTest_GGNavAreas : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UNavArea>> NavAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Extent;
    
    UEQTest_GGNavAreas();

};

