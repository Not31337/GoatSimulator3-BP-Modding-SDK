#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GGDestructibleInfo.h"
#include "OnDestructibleInfoFullyLoadedDelegate.h"
#include "GGDestructibleInfoObject.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UGGDestructibleInfoObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGDestructibleInfo DestructibleInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDestructibleInfoFullyLoaded OnDestructibleInfoFullyLoaded;
    
    UGGDestructibleInfoObject();

    UFUNCTION(BlueprintCallable)
    void LoadMeshes();
    
    UFUNCTION(BlueprintCallable)
    void ClearLoadedMeshes();
    
};

