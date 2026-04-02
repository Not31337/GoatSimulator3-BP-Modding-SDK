#pragma once
#include "CoreMinimal.h"
#include "GGGoatGear_Skel_Base.h"
#include "GGGoatGear_Static_Cybergoth.generated.h"

class UAudioComponent;
class USoundCue;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GEARPACK_FUTURE_API UGGGoatGear_Static_Cybergoth : public UGGGoatGear_Skel_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* AmbientMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayMusic, meta=(AllowPrivateAccess=true))
    bool bPlayMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* MusicComponent;
    
public:
    UGGGoatGear_Static_Cybergoth(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetPlayMusic(bool bPlay);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayMusic();
    
};

