#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CableAttachLocation.h"
#include "GGGoatGear_Static_Base.h"
#include "Templates/SubclassOf.h"
#include "GGGoatGear_Static_Architect.generated.h"

class AActor;
class UGGDistanceTextWidget;
class UMaterialInterface;
class UParticleSystem;
class UParticleSystemComponent;
class USoundBase;
class UUserWidget;
class UWidgetComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGGoatGear_Static_Architect : public UGGGoatGear_Static_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* TextMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor TextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RollupSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RagdollAtDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* HitEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* HitSoundEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> DistanceWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* TapeBeamParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InstinctMaxCableLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> TapeBeamEndActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RollupLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrentDistanceString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CableAttachInfo, meta=(AllowPrivateAccess=true))
    FCableAttachLocation CableAttachInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RollUp, meta=(AllowPrivateAccess=true))
    bool bRollUp;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* DistanceWidgetComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWidgetComponent*> DistanceWidgetComps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGDistanceTextWidget* DistanceTextWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* BeamPArticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* StartPointActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* EndPointActor;
    
public:
    UGGGoatGear_Static_Architect(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RollUpChange(bool RollingUp);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAttachSound(bool bForAttach);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RollUp();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CableAttachInfo();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayHit();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayAttachSound(bool bForAttach);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCableLength() const;
    
};

