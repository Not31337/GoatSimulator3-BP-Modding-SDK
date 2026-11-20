#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LoadedAppearancePart.h"
#include "GGRideTrackDestroyedSectionReplication.h"
#include "GGRideTrackDestroyedSection.generated.h"

class UBoxComponent;
class UGGLoadNPCAppearance;
class UGGProxyNpcComponent;
class UMaterialInterface;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class GOATTHEMEPARK_API AGGRideTrackDestroyedSection : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGProxyNpcComponent* ProxyNpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* CollisionRepaired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsRepaired, meta=(AllowPrivateAccess=true))
    FGGRideTrackDestroyedSectionReplication ReplicatedVariables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGLoadNPCAppearance* LoadNPCAppearance;
    
    AGGRideTrackDestroyedSection(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_IsRepaired();
    
    UFUNCTION(BlueprintCallable)
    void OnNpcAppearanceLoaded(const TArray<FLoadedAppearancePart>& AppearanceParts, UMaterialInterface* SkinMaterial);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSectionRepaired() const;
    
};

