#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GGSpawnTransform.h"
#include "GGSpawnerModifierInterface.generated.h"

class AGGSplineToolActor;
class UGGSpawnerInterface;
class USplineComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GOAT2_API UGGSpawnerModifierInterface : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayDebug;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsModifierEnabled;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CachedSplineWidth;
    
public:
    UGGSpawnerModifierInterface();

    UFUNCTION(BlueprintCallable)
    void SetModifierEnabled(bool bShouldBeEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ModifySpawnTransforms(TArray<FGGSpawnTransform>& SpawnTransforms, const USplineComponent* Spline) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ModifySingleSpawnTransform(FGGSpawnTransform& InTransform, const USplineComponent* Spline) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsModifierEnabled() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGlobalModifier() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitModifier();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSplineWidth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGSplineToolActor* GetSplineOwner() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGSpawnerInterface* GetOwningSpawner_K2() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, meta=(WorldContext="WorldContext"))
    void DisplayDebug(AGGSplineToolActor* WorldContext);
    
};

