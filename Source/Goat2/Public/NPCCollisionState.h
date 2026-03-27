#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CharacterCollisionState.h"
#include "NPCCollisionState.generated.h"

USTRUCT(BlueprintType)
struct FNPCCollisionState : public FCharacterCollisionState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag OverlapCapsuleProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FGameplayTag DefaultOverlapCapsuleProfile;
    
    GOAT2_API FNPCCollisionState();
};

