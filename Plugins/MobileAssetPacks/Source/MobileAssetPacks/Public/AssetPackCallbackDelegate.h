#pragma once
#include "CoreMinimal.h"
#include "EAssetPackState.h"
#include "AssetPackCallbackDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_FourParams(FAssetPackCallback, const FString&, AssetPack, EAssetPackState, Status, int64, DownloadedBytes, int64, TotalBytes);

