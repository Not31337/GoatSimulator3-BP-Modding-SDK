#pragma once
#include "CoreMinimal.h"
#include "OnCommittedPreviewGearDelegate.generated.h"

class UGGGoatGearInfoDataAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCommittedPreviewGear, UGGGoatGearInfoDataAsset*, DataAsset);

