#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GGRespawnReferenceHandler.generated.h"

class AGGCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGRespawnReferenceHandler : public UActorComponent {
    GENERATED_BODY()
public:
    UGGRespawnReferenceHandler(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveMultipleCharacterRefs(UPARAM(Ref) TArray<AGGCharacter*>& CharacterRefsToRemove);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveCharacterRef(UPARAM(Ref) AGGCharacter*& CharacterRefToRemove);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllCharacterRefs();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTrackedCharacterRespawned(AGGCharacter* OldCharacter, AGGCharacter* NewCharacter);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGGCharacter*> GetCharacters() const;
    
    UFUNCTION(BlueprintCallable)
    void AddMultipleCharacterRefs(UPARAM(Ref) TArray<AGGCharacter*>& CharacterRefsToAdd);
    
    UFUNCTION(BlueprintCallable)
    bool AddCharacterRef(UPARAM(Ref) AGGCharacter*& CharacterRefToAdd);
    
};

