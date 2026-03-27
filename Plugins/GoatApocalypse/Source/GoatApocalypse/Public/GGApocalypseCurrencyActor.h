#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/StaticMeshActor.h"
#include "Engine/EngineTypes.h"
#include "CurrencyType.h"
#include "GGApocalypseCurrencyActor.generated.h"

class AGGGoat;
class UCurveVector;
class UGGEffectsSpawnResult;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class GOATAPOCALYPSE_API AGGApocalypseCurrencyActor : public AStaticMeshActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle ImportantAbsorbTimerHandle;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CollectingGoat, meta=(AllowPrivateAccess=true))
    AGGGoat* CollectingGoat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsImportantCurrency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AbsorbStartLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AbsorbStartTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitTimestamp;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCurrencyType> CurrencyTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImportantCurrencyAbsorbFallbackDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTimeBeforeAbsorbtion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AbsorbVelocityInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MinSpawnImpulseVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MaxSpawnImpulseVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SpawnTorqueRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* AbsorbCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AbsorbDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RandomAbsorbRotatorRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrencyTypeIndex, meta=(AllowPrivateAccess=true))
    int32 CurrencyTypeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bIsPooled, meta=(AllowPrivateAccess=true))
    bool bIsPooled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* OngoingParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGEffectsSpawnResult* CurrentOngoingEffects;
    
    AGGApocalypseCurrencyActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool UpdateMovementToGoat(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void Tick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void SetCollectingGoat(AGGGoat* NewCollectingGoat);
    
    UFUNCTION(BlueprintCallable)
    void PoolCurrencyActor();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrencyTypeIndex();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CollectingGoat();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bIsPooled();
    
    UFUNCTION(BlueprintCallable)
    void InitCurrencyActor(FVector NewLocation, int32 NewCurrencyTypeIndex, bool IsImportantCurrency);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrencyAwardSource() const;
    
};

