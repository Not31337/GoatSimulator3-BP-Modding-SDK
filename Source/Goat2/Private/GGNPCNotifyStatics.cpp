#include "GGNPCNotifyStatics.h"

UGGNPCNotifyStatics::UGGNPCNotifyStatics() {
}

void UGGNPCNotifyStatics::StartleNPC_BP(AGGNPC* NPC, FVector Location, EStartleVariations Type, AActor* NotifyAboutActor, ELineOfSightSetting LineOfSightSetting, FStartleParameters StartleParams, FNotifyParameters NotifyParams) {
}

void UGGNPCNotifyStatics::ProximityStartle_BP(const UObject* WorldContextObject, FVector Location, float Radius, EStartleVariations Type, AActor* NotifyAboutActor, ELineOfSightSetting LineOfSightSetting, FStartleParameters StartleParams, FNotifyParameters NotifyParams) {
}

void UGGNPCNotifyStatics::ProximitySetNPCMood_BP(const UObject* WorldContextObject, FVector Location, float Radius, EMoods Mood, TArray<EMoods> SkipMoods, TArray<AGGNPC*> IgnoredNPCs, AActor* NotifyAboutActor, FVector NotifyAboutLocation, bool bSkipNoneMoods) {
}

void UGGNPCNotifyStatics::ProximityNotify_BP(const UObject* WorldContextObject, FVector Location, float Radius, FGameplayTag Type, AActor* NotifyAbout, TArray<EMoods> SkipMoods, TArray<AGGNPC*> IgnoredNPCs, bool SkipRagdolls, bool SkipPanicking, bool SkipCannotChangeMood, bool SkipMatchingReactType, ELineOfSightSetting LineOfSightSetting, bool bNonStartleCanBypassStartle, int32 ChanceToNotify, float PutOnCooldownFor, bool bSkipStumbling) {
}

void UGGNPCNotifyStatics::ProximityMoodChangeStruct(const UObject* WorldContextObject, FVector Location, FMoodChangeAreaElement MoodChangeElement, TArray<AGGNPC*> IgnoredNPCs, AActor* NotifyAboutActor) {
}

void UGGNPCNotifyStatics::ProximityMoodChange(const UObject* WorldContextObject, FVector Location, float Radius, EMoodChange Direction, int32 ChanceToChange, TArray<EMoods> SkipMoods, TArray<AGGNPC*> IgnoredNPCs, AActor* NotifyAboutActor, bool bSkipRagdolls) {
}

void UGGNPCNotifyStatics::NotifyNPC_BP(AGGNPC* NPC, FGameplayTag Type, AActor* NotifyAbout, FVector Location, TArray<EMoods> SkipMoods, bool SkipRagdolls, bool SkipPanicking, bool SkipCannotChangeMood, bool SkipMatchingReactType, ELineOfSightSetting LineOfSightSetting, bool bNonStartleCanBypassStartle, int32 ChanceToNotify, float PutOnCooldownFor, bool bSkipStumbling) {
}


