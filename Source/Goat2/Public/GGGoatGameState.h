#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AreaTrackMapping.h"
#include "EGoatDLC.h"
#include "GGGameState.h"
#include "GGGoatGameState.generated.h"

class UGGQuestManager;
class UGGRadarSystem;
class USoundBase;

UCLASS(Blueprintable)
class GOAT2_API AGGGoatGameState : public AGGGameState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGoatDLC AssociatedDLC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GearDLCDescriptorTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGQuestManager* QuestManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGRadarSystem* RadarSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAreaTrackMapping> AreaMusicMap;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SoundStartDialogue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SoundStartDialogueLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SoundEndDialogue;
    
    AGGGoatGameState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInAssociatedDLCLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetGearDLCDescriptorTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGoatDLC GetAssociatedDLC() const;
    
};

