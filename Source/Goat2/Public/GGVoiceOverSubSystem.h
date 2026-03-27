#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "AreasToConsider.h"
#include "EGender.h"
#include "VoiceLine.h"
#include "GGVoiceOverSubSystem.generated.h"

class UDataTable;

UCLASS(Blueprintable, Config=Game)
class GOAT2_API UGGVoiceOverSubSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UDataTable>> VoiceLineTableAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> VoiceLineTables;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UDataTable>> VoiceIdentityTableAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> NpcVoiceIdentityTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDidCacheTable;
    
public:
    UGGVoiceOverSubSystem();

    UFUNCTION(BlueprintCallable)
    FVoiceLine PickRandomWeightedCandidate(TArray<FDataTableRowHandle> Candidates);
    
    UFUNCTION(BlueprintCallable)
    FVoiceLine GetVoiceLineBlueprint(bool& bOutSuccess, FGameplayTag LineTag, FGameplayTag Identity, const TSet<FGameplayTag> MoodsToConsider, FAreasToConsider AreasToConsider, const bool bIgnoreWeights);
    
    UFUNCTION(BlueprintCallable)
    FVoiceLine GetVoiceLine(FGameplayTag LineTag, FGameplayTag Identity, const TSet<FGameplayTag> MoodsToConsider, FAreasToConsider AreasToConsider, const bool bIgnoreWeights);
    
    UFUNCTION(BlueprintCallable)
    EGender GetVoiceGender(FGameplayTag IdentityTag);
    
    UFUNCTION(BlueprintCallable)
    FVoiceLine GetRandomVoiceLineWithSubtitle(FGameplayTag Identity, const FText& Subtitle);
    
    UFUNCTION(BlueprintCallable)
    FGameplayTag GetRandomVoiceIdentityTag();
    
    UFUNCTION(BlueprintCallable)
    TSet<FGameplayTag> GetAllVoiceIdentityTags();
    
    UFUNCTION(BlueprintCallable)
    bool DoesVoiceIdentityExist(FGameplayTag IdentityTag);
    
    UFUNCTION(BlueprintCallable)
    bool CanVoiceBeRandomlySelected(FGameplayTag IdentityTag);
    
private:
    UFUNCTION(BlueprintCallable)
    void CacheVoiceLineTable();
    
};

