#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GGGoatGearPreviewInterface.generated.h"

class USkeletalMeshComponent;

UINTERFACE(Blueprintable)
class GOAT2_API UGGGoatGearPreviewInterface : public UInterface {
    GENERATED_BODY()
};

class GOAT2_API IGGGoatGearPreviewInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USkeletalMeshComponent* GetPreviewSkelMesh();
    
};

