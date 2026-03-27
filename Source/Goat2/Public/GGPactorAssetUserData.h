#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "GameplayTagContainer.h"
#include "GGNamedActorInfo.h"
#include "PhysicsActorImpactSettings.h"
#include "GGPactorAssetUserData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGPactorAssetUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGNamedActorInfo NameInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhysicsActorImpactSettings ImpactSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PActorIdentifierTags;
    
    UGGPactorAssetUserData();

};

