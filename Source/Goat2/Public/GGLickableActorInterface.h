#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GGLickableActorInterface.generated.h"

class AGGGoat;
class UMeshComponent;

UINTERFACE(Blueprintable)
class GOAT2_API UGGLickableActorInterface : public UInterface {
    GENERATED_BODY()
};

class GOAT2_API IGGLickableActorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool PrepareForLick();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsActorLickedByLocalPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsActorLicked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetLickInfo(FVector LickLocation, FName& BoneName, FRotator& MeshLickRotation, FVector& RelativeLickLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UMeshComponent* GetLickableActorMeshComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeLicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActorWasLicked(AGGGoat* LickingGoat);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActorStoppedBeingLicked(AGGGoat* LickingGoat);
    
};

