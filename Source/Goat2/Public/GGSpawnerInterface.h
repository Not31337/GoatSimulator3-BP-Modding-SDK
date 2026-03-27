#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GGSpawnTransform.h"
#include "GGSpawnerInterface.generated.h"

class AGGSplineToolActor;
class UGGSpawnerModifierInterface;
class USplineComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew, Within=GGSplineToolActor)
class GOAT2_API UGGSpawnerInterface : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InstancesToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyGlobalModifiers;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator StartRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGGSpawnerModifierInterface*> Modifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UniformScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseUniformScale;
    
public:
    UGGSpawnerInterface();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpawnEntities(const TArray<FGGSpawnTransform>& InTransforms);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitSpawner();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UGGSpawnerModifierInterface*> GetValidModifiers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGSplineToolActor* GetSplineOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USplineComponent* GetSplineComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FBoxSphereBounds GetLocalBounds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGGSpawnTransform> GetInitialSpawnTransforms() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearSpawnedEntities();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool CanEditNumberOfSpawnedInstanced() const;
    
};

