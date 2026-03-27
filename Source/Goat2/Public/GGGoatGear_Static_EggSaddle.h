#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GGGoatGear_Static_Base.h"
#include "Templates/SubclassOf.h"
#include "GGGoatGear_Static_EggSaddle.generated.h"

class AActor;
class AGGEggSaddleEgg;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGGoatGear_Static_EggSaddle : public UGGGoatGear_Static_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxEggs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Eggs, meta=(AllowPrivateAccess=true))
    TArray<AGGEggSaddleEgg*> Eggs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_EggLocations, meta=(AllowPrivateAccess=true))
    TArray<FVector> EggLocations;
    
public:
    UGGGoatGear_Static_EggSaddle(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool ShouldSpawnFollowingEgg(const AActor* EatenActor) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_Eggs(const TArray<AGGEggSaddleEgg*>& PreviousEggs);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_EggLocations(const TArray<FVector>& PreviousEggLocations);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastEatenActor(AActor* EatenActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_ThrowEgg(AGGEggSaddleEgg* ThrownEgg);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_EatenEgg(AActor* EatenActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasMaxEggs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FTransform GetSpawnTransformForEgg();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGEggSaddleEgg* GetLastEgg(bool& OutSuccess) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TSubclassOf<AGGEggSaddleEgg> GetEggClassForEatenActor(const AActor* EatenActor) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EatActor(AActor* EatenActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanEatActor(const AActor* EatenActor) const;
    
};

