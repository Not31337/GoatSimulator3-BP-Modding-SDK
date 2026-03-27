#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GGGearSetSlot.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UGGGearSetSlot : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
public:
    UGGGearSetSlot();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSlotIndex() const;
    
};

