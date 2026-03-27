#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GGPhysicsProjectile.h"
#include "Templates/SubclassOf.h"
#include "GGNPCHandcuffs.generated.h"

class UGGHandcuffedComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGNPCHandcuffs : public AGGPhysicsProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGHandcuffedComponent> HandcuffedComponentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PoliceHandcuffPlayerTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PoliceHandcuffColleagueTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PoliceOfficerIdentifierTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScanGoatRadius;
    
public:
    AGGNPCHandcuffs(const FObjectInitializer& ObjectInitializer);

};

