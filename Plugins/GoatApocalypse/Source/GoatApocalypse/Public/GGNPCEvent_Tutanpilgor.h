#pragma once
#include "CoreMinimal.h"
#include "GGNPCEvent.h"
#include "Templates/SubclassOf.h"
#include "GGNPCEvent_Tutanpilgor.generated.h"

class AGGGoat;
class UAnimInstance;
class UAnimMontage;
class UGGGoatEmote;
class USkeleton;

UCLASS(Blueprintable)
class GOATAPOCALYPSE_API AGGNPCEvent_Tutanpilgor : public AGGNPCEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpreadRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OrphanTimeUntilAbort;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> HumanPetAnimBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeleton* TargetSkeleton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* HeadbuttMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NPCCountForInstinct;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGGoat* TutanpilgorGoat;
    
public:
    AGGNPCEvent_Tutanpilgor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpreadEventInRadius();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGoatBaaing(AGGGoat* GoatBaaing);
    
    UFUNCTION(BlueprintCallable)
    void OnEmotingEnd(AGGGoat* EmotingGoat, UGGGoatEmote* Emote, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnEmoting(AGGGoat* EmotingGoat, UGGGoatEmote* Emote);
    
};

