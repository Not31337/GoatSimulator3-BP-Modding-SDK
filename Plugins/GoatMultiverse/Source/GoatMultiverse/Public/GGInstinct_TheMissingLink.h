#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GGInstinct.h"
#include "GGInstinct_TheMissingLink.generated.h"

class AActor;
class AGGGoat;
class AGGNPC;
class UGGAlternativeGoatDataAsset;
class UGGGoatEmote;

UCLASS(Blueprintable)
class GOATMULTIVERSE_API AGGInstinct_TheMissingLink : public AGGInstinct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGGoatEmote* DanceEmote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag NPCPartyReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGAlternativeGoatDataAsset* MissingLinkAltGoat;
    
    AGGInstinct_TheMissingLink(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnNPCReacted(AGGNPC* NPC, FGameplayTag Reaction, AActor* CausedBy, FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void OnMissingLinkEmoted(AGGGoat* EmotingGoat, UGGGoatEmote* Emote);
    
    UFUNCTION(BlueprintCallable)
    void OnInstinctTriggered(AGGGoat* Goat, FGameplayTag InstinctTag);
    
    UFUNCTION(BlueprintCallable)
    void OnAltGoatChanged(AGGGoat* Goat, UGGAlternativeGoatDataAsset* NewAltGoat);
    
};

