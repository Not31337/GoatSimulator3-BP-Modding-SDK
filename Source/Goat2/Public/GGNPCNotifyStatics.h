#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "ELineOfSightSetting.h"
#include "EMoodChange.h"
#include "EMoods.h"
#include "EStartleVariations.h"
#include "MoodChangeAreaElement.h"
#include "NotifyParameters.h"
#include "StartleParameters.h"
#include "GGNPCNotifyStatics.generated.h"

class AActor;
class AGGNPC;

UCLASS(Blueprintable)
class GOAT2_API UGGNPCNotifyStatics : public UObject {
    GENERATED_BODY()
public:
    UGGNPCNotifyStatics();

    UFUNCTION(BlueprintCallable)
    static void StartleNPC_BP(AGGNPC* NPC, FVector Location, EStartleVariations Type, AActor* NotifyAboutActor, ELineOfSightSetting LineOfSightSetting, FStartleParameters StartleParams, FNotifyParameters NotifyParams);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ProximityStartle_BP(const UObject* WorldContextObject, FVector Location, float Radius, EStartleVariations Type, AActor* NotifyAboutActor, ELineOfSightSetting LineOfSightSetting, FStartleParameters StartleParams, FNotifyParameters NotifyParams);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ProximitySetNPCMood_BP(const UObject* WorldContextObject, FVector Location, float Radius, EMoods Mood, TArray<EMoods> SkipMoods, TArray<AGGNPC*> IgnoredNPCs, AActor* NotifyAboutActor, FVector NotifyAboutLocation, bool bSkipNoneMoods);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ProximityNotify_BP(const UObject* WorldContextObject, FVector Location, float Radius, FGameplayTag Type, AActor* NotifyAbout, TArray<EMoods> SkipMoods, TArray<AGGNPC*> IgnoredNPCs, bool SkipRagdolls, bool SkipPanicking, bool SkipCannotChangeMood, bool SkipMatchingReactType, ELineOfSightSetting LineOfSightSetting, bool bNonStartleCanBypassStartle, int32 ChanceToNotify, float PutOnCooldownFor, bool bSkipStumbling);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ProximityMoodChangeStruct(const UObject* WorldContextObject, FVector Location, FMoodChangeAreaElement MoodChangeElement, TArray<AGGNPC*> IgnoredNPCs, AActor* NotifyAboutActor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ProximityMoodChange(const UObject* WorldContextObject, FVector Location, float Radius, EMoodChange Direction, int32 ChanceToChange, TArray<EMoods> SkipMoods, TArray<AGGNPC*> IgnoredNPCs, AActor* NotifyAboutActor, bool bSkipRagdolls);
    
    UFUNCTION(BlueprintCallable)
    static void NotifyNPC_BP(AGGNPC* NPC, FGameplayTag Type, AActor* NotifyAbout, FVector Location, TArray<EMoods> SkipMoods, bool SkipRagdolls, bool SkipPanicking, bool SkipCannotChangeMood, bool SkipMatchingReactType, ELineOfSightSetting LineOfSightSetting, bool bNonStartleCanBypassStartle, int32 ChanceToNotify, float PutOnCooldownFor, bool bSkipStumbling);
    
};

