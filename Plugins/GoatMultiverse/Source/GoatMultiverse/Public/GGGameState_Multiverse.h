#pragma once
#include "CoreMinimal.h"
#include "GGGoatGameState.h"
#include "GGGameState_Multiverse.generated.h"

class AGGPlayerState;
class AGGQuestBase;
class UGGRiftDataAsset;

UCLASS(Blueprintable)
class GOATMULTIVERSE_API AGGGameState_Multiverse : public AGGGoatGameState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGRiftDataAsset* IntroRiftAsset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bShouldPlayMultiverseIntro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bShouldForceManualLoadingScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bKidneyStoneEventCompleted;
    
public:
    AGGGameState_Multiverse(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetShouldPlayIntro();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetShouldForceManualLoadScreen();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnKidneyStoneQuestCompleted(AGGQuestBase* Quest, AGGPlayerState* OptionalPlayerState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPlayedMultiverseIntro() const;
    
};

