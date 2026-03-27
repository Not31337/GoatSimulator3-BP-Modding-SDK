#pragma once
#include "CoreMinimal.h"
#include "BeatInfo.h"
#include "GGGoatGear_Skel_Base.h"
#include "GGGoatGear_Skel_DrumKit.generated.h"

class UAnimMontage;
class USoundBase;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGGoatGear_Skel_DrumKit : public UGGGoatGear_Skel_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> DrumMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBeatInfo> BeatInfos;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* KickSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SnareSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* HiHatSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DrumMontage, meta=(AllowPrivateAccess=true))
    UAnimMontage* CurrentDrumMontage;
    
public:
    UGGGoatGear_Skel_DrumKit(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StartDrumMontage();
    
    UFUNCTION(BlueprintCallable)
    void Snare();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_DrumMontage();
    
public:
    UFUNCTION(BlueprintCallable)
    void KickDrum();
    
    UFUNCTION(BlueprintCallable)
    void HiHat();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetRandomMontage();
    
};

