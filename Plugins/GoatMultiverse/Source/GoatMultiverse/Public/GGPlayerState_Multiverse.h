#pragma once
#include "CoreMinimal.h"
#include "GGGoatPlayerState.h"
#include "GGPlayerState_Multiverse.generated.h"

class UGGRiftUserComponent;

UCLASS(Blueprintable)
class GOATMULTIVERSE_API AGGPlayerState_Multiverse : public AGGGoatPlayerState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGRiftUserComponent* RiftUserComponent;
    
public:
    AGGPlayerState_Multiverse(const FObjectInitializer& ObjectInitializer);

};

