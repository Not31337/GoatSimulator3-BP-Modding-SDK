#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GGNPCEvent.h"
#include "GGNPCEvent_AdmireGoat.generated.h"

class AGGGoat;
class UGGGoatEmote;

UCLASS(Blueprintable)
class GOAT2_API AGGNPCEvent_AdmireGoat : public AGGNPCEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpreadRadiusInitial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpreadRadiusMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpreadRadiusIncrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurationMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurationIncrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChanceToJoinEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer IgnoredReactions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReactionCooldownWhenLeaving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebug;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGGoat* TargetGoat;
    
public:
    AGGNPCEvent_AdmireGoat(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void SpreadEventInRadius();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnTrickCompleted(AGGGoat* Goat, const FString& TrickName);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatEmoteStarted(AGGGoat* Goat, UGGGoatEmote* Emote);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatBaa(AGGGoat* GoatBaaing);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    AGGGoat* GetAdmireGoat() const;
    
};

