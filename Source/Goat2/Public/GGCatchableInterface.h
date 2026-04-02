#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "GGCatchOptions.h"
#include "GGReleaseOptions.h"
#include "GGCatchableInterface.generated.h"

class AActor;
class USceneComponent;

UINTERFACE(Blueprintable)
class GOAT2_API UGGCatchableInterface : public UInterface {
    GENERATED_BODY()
};

class GOAT2_API IGGCatchableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ScaleActorWithOptions(const FGGReleaseOptions& Options);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReleaseCatchedActorWithOptions(const FVector& ReleaseLocation, const FGGReleaseOptions& Options);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReleaseCatchedActor(const FVector& ReleaseLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsCatched() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsCatchableByActor(const AActor* InActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsCatchable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsBeingScaled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleMulticastScaleActor(const FGGReleaseOptions& Options);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleMulticastReleaseCatchedActor(const FVector& ReleaseLocation, const FGGReleaseOptions& Options);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleMulticastCatchActor(AActor* Catcher, const FGGCatchOptions& Options);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USceneComponent* GetComponentToScale() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ForceReleaseCatchedActor();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CatchActorWithOptions(AActor* Catcher, const FGGCatchOptions& Options);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CatchActor(AActor* Catcher);
    
};

