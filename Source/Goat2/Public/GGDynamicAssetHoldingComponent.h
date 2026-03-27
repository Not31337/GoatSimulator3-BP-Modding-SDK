#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "OnDynamicLoadingFinishedDelegate.h"
#include "OnGainedSignificanceDelegate.h"
#include "OnLostSignificanceDelegate.h"
#include "GGDynamicAssetHoldingComponent.generated.h"

class UGGEffectsSpawnHolderSoftPtrs;
class UGGEffectsSpawnResult;
class UObject;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGDynamicAssetHoldingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* LocationSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldHandleSignificance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoadOnSignificance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SignificanceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, TSoftObjectPtr<UObject>> AssetsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UObject*> Assets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FString, UGGEffectsSpawnHolderSoftPtrs*> SoftEffectSpawners;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDynamicLoadingFinished OnDynamicLoadingFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGainedSignificance OnGainedSignificance;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLostSignificance OnLostSignificance;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CachedLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLoaded;
    
public:
    UGGDynamicAssetHoldingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnloadAssets();
    
    UFUNCTION(BlueprintCallable)
    void StartLoadingAssets();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UGGEffectsSpawnResult* SpawnEffectsHolder(const UObject* WorldContextObject, const FString& EffectsKey, FVector SpawnLocation, FRotator SpawnRotator, USceneComponent* AttachToComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LostSignificance();
    
    UFUNCTION(BlueprintCallable)
    float GetSignificanceRange();
    
    UFUNCTION(BlueprintCallable)
    FVector GetSignificanceLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UObject*> GetLoadedAssets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetLoadedAsset(UClass* AssetClass, const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsLoaded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GainedSignificance();
    
};

