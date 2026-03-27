#pragma once
#include "CoreMinimal.h"
#include "DownloadedImage.h"
#include "DownloadImagesDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDownloadImagesDelegate, TArray<FDownloadedImage>, DownloadedImages);

