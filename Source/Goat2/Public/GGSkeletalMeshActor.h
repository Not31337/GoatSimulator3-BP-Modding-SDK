#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/SkeletalMeshActor.h"
#include "GGSignificanceInterface.h"
#include "GGSkeletalMeshActor.generated.h"

UCLASS(Blueprintable)
class GOAT2_API AGGSkeletalMeshActor : public ASkeletalMeshActor, public IGGSignificanceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeOptimized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SignificanceRange;
    
    AGGSkeletalMeshActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LostSignificance();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetSignificanceRange();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetSignificanceLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GainedSignificance();
    

    // Fix for true pure virtual functions not being implemented
};

