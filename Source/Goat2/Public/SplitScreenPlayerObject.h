#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SplitScreenPlayerData.h"
#include "SplitScreenPlayerObject.generated.h"

UCLASS(Blueprintable)
class GOAT2_API USplitScreenPlayerObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSplitScreenPlayerData SplitScreenPlayer;
    
    USplitScreenPlayerObject();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPrimaryPlayer() const;
    
};

