#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AccessoryElement.h"
#include "EGender.h"
#include "GGWorldSubsystem.h"
#include "GGNPCAppearanceSubsystem.generated.h"

class UDataTable;
class UObject;

UCLASS(Blueprintable, Config=Game)
class GOAT2_API UGGNPCAppearanceSubsystem : public UGGWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* HeadsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* HairsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* UpperBodiesTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LowerBodiesTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AccessoriesTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AppearanceSetTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AdditionalHeadTables;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AdditionalHairTables;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AdditionalUpperBodyTables;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AdditionalLowerBodyTables;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AdditionalAccessoriesTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> AdditionalDataTables;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AdditionalSetTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> AdditionalSetsDataTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* NPCNameDataTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AdditionalNameDataTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> AdditionalNameTables;
    
public:
    UGGNPCAppearanceSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<UDataTable*> GetSetTables(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static FString GetRandomUpperBody(UObject* WorldContext, EGender Gender, FGameplayTag AreaTag, TArray<FString> CurrentAppearance, bool bForceAreaTag, bool bExcludeCurrent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static FString GetRandomLowerBody(UObject* WorldContext, EGender Gender, FGameplayTag AreaTag, TArray<FString> CurrentAppearance, bool bForceAreaTag, bool bExcludeCurrent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static FString GetRandomHead(UObject* WorldContext, EGender Gender, FGameplayTag AreaTag, TArray<FString> CurrentAppearance, bool bForceAreaTag, bool bExcludeCurrent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static FString GetRandomHair(UObject* WorldContext, EGender Gender, FGameplayTag AreaTag, TArray<FString> CurrentAppearance, bool bForceAreaTag, bool bExcludeCurrent, bool bFindHatFriendly);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static FString GetRandomAccessory(UObject* WorldContext, EGender Gender, FGameplayTag AccessoryType, FGameplayTag AreaTag, const TArray<FAccessoryElement>& CurrentAccessories, bool bForceAreaTag, bool bExcludeCurrent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<FString> GetRandomAccessories(UObject* WorldContext, EGender Gender, FGameplayTag AreaTag, const TArray<FAccessoryElement>& CurrentAccessories, int32 AccessoryAmount, bool bForceAreaTag, bool bExcludeCurrent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static TArray<FText> GetNPCNamesForRow(UObject* WorldContext, const FName& RowName);
    
};

