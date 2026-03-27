#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RelicThing.h"
#include "GGRelicSpot.generated.h"

class AGGGoat;
class UGGStaticMeshComponent;
class UParticleSystem;
class USceneComponent;
class USoundBase;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GOATMULTIVERSE_API AGGRelicSpot : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGStaticMeshComponent* DirtMoundMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RelicLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* RelicMesh;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaleIncreaseWhenHeadbutted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HeadbuttsRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* HitParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* HitSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RelicMeshAdjustPerHeadbutt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRelicThing> Relics;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SelectedRelic, meta=(AllowPrivateAccess=true))
    FRelicThing SelectedRelic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TimesHeadbutted, meta=(AllowPrivateAccess=true))
    int32 TimesHeadbutted;
    
public:
    AGGRelicSpot(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TimesHeadbutted();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SelectedRelic();
    
    UFUNCTION(BlueprintCallable)
    void OnGGStaticMeshHeadbutted(UGGStaticMeshComponent* GGMeshComponent, AGGGoat* HeadbuttingGoat);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayHit();
    
};

