#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EStiffBodypart.h"
#include "GGStiffBodyPartBoneArray.h"
#include "GGStiffBonesComponent.generated.h"

class AGGGoat;
class AGGNPC;
class UGGAlternativeGoatDataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, Within=GGCharacter, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGStiffBonesComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EStiffBodypart, FGGStiffBodyPartBoneArray> StiffBodyPartToBonesMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CurrentStiffBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<EStiffBodypart> StiffBodyParts;
    
public:
    UGGStiffBonesComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void RemoveCurrentStiffBone(const FName& Bone);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnNPCOwnerPooled(AGGNPC* NPC, bool bWasPooled);
    
    UFUNCTION(BlueprintCallable)
    void OnAltGoatChanged(AGGGoat* Goat, UGGAlternativeGoatDataAsset* NewAltGoat);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddCurrentStiffBone(const FName& Bone);
    
};

