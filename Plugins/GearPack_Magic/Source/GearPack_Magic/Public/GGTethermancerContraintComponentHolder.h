#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GGTethermancerContraintComponentHolder.generated.h"

class AGGGoat;
class UGGTethermancerContraintComponent;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GEARPACK_MAGIC_API UGGTethermancerContraintComponentHolder : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGGTethermancerContraintComponent*> ConstraintComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConstraitMaxDistanceSquared;
    
public:
    UGGTethermancerContraintComponentHolder(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnLocalGoatJumpPressed(AGGGoat* Goat);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatRequestContraintBreak(AGGGoat* Goat);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<UGGTethermancerContraintComponent*> GetTethermancerConstraintComponents(const UObject* WorldContextObject);
    
};

