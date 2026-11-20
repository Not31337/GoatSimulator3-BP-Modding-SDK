#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "GGBalloonVariation.h"
#include "Templates/SubclassOf.h"
#include "GGBalloonMakerMachine.generated.h"

class AGGGoat;
class AGGPhysicsActor_BalloonHolder;
class AGGPhysicsActor_HeldBalloon;
class UGGDiegeticMusicComponent;
class UMaterialInterface;
class UParticleSystem;
class UPrimitiveComponent;
class USceneComponent;
class USoundCue;
class USphereComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GOATTHEMEPARK_API AGGBalloonMakerMachine : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBalloonCreated, AActor*, SourceActor, const TArray<AGGGoat*>&, Goats);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* RecieverPad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* OverlapVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BalloonSpawnPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGDiegeticMusicComponent* AmbientAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* AmbientSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AmbientSoundIsActiveParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGPhysicsActor_BalloonHolder> BalloonHolderBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BalloonInflateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BalloonSpawnDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BalloonSpawnTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BalloonFloatDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterialInterface>> PActorMaterialVariations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGGBalloonVariation> GoatBalloonVariations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGGBalloonVariation> NpcBalloonVariations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGGBalloonVariation> VehicleBalloonVariations;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBalloonCreated OnBalloonCreated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* InputVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* OutputVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NPCReactionRadius;
    
    AGGBalloonMakerMachine(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnBalloonSpawned(AGGPhysicsActor_BalloonHolder* BalloonHolder, AGGPhysicsActor_HeldBalloon* BalloonPActor);
    
    UFUNCTION(BlueprintCallable)
    void OnBalloonInflateStarted(AGGPhysicsActor_BalloonHolder* BalloonHolder, AGGPhysicsActor_HeldBalloon* BalloonPActor);
    
    UFUNCTION(BlueprintCallable)
    void OnBalloonInflateEnded(AGGPhysicsActor_BalloonHolder* BalloonHolder, AGGPhysicsActor_HeldBalloon* BalloonPActor);
    
    UFUNCTION(BlueprintCallable)
    void OnBalloonHolderEndPlay(AActor* BalloonHolder, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PlayOutputVFX();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PlayInputVFX();
    
};

