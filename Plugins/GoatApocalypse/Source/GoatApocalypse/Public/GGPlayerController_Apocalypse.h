#pragma once
#include "CoreMinimal.h"
#include "GGGoatPlayerController.h"
#include "GGPlayerController_Apocalypse.generated.h"

class UGGCustomCheatManagerApocalypse;

UCLASS(Blueprintable)
class GOATAPOCALYPSE_API AGGPlayerController_Apocalypse : public AGGGoatPlayerController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGCustomCheatManagerApocalypse* CustomCheatManager_Apocalypse;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MotorcycleDistanceForAchievement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AchievementID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TimeForInstinct;
    
    AGGPlayerController_Apocalypse(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistanceTraveledWithMotorcycle() const;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCompletedCourse(int32 CourseIndex, int32 Time);
    
};

