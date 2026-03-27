#include "GGNPCSpawner_Environment.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "ENPCType.h"

AGGNPCSpawner_Environment::AGGNPCSpawner_Environment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NPCType = ENPCType::NT_Environmental;
    this->PreviewSkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PreviewSkeletalMeshComponent"));
    this->HairMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HairMeshComponent"));
    this->UpperBodyMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("UpperBodyMeshComponent"));
    this->LowerBodyMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("LowerBodyMeshMeshComponent"));
    this->bCanEditAnimations = true;
    this->bOnlyPickOneAnimation = false;
    this->AnimStartWait = 0.50f;
    this->AnimStartWaitDeviation = 0.50f;
    this->PlayPreviewAnimation = true;
    this->bRandomizeAppearance = true;
    this->bLockAppearanceAfterGeneration = true;
    this->RandomizeWithGender = EGender::G_None;
    this->bPrioritizeAreaParts = true;
    this->bHasLockedAppearance = false;
    this->LockedGender = EGender::G_None;
    this->StartMoods.AddDefaulted(1);
    this->RoamAfterDisturbed = true;
    this->ValidRoamingSwitchReasons.AddDefaulted(6);
    this->CanChangeMood = true;
    this->bKeepClaimedByWhenRoam = true;
    this->bCanStumble = true;
    this->CanProximityReact = true;
    this->bUpperBodyReactionsWhenStationary = false;
    this->bCanPanic = true;
    this->bUpperBodyPanicWhenStationary = false;
    this->bOverrideValidReactions = false;
    this->bOverrideIgnoredReactions = false;
    this->bOverrideIgnoredStartleContexts = false;
    this->bCanBeAnnoyedByGoat = false;
    this->bOverrideCanPlayAnnoyanceAnimations = false;
    this->bCanPlayAnnoyanceAnimations = true;
    this->bOverrideChanceToBecomeAngry = false;
    this->ChanceToBecomeAngry = 0;
    this->AnnoyanceDistanceOverride = 0.00f;
    this->CloseDistanceOverride = 0.00f;
    this->MildlyAnnoyanceThresholdTimeOverride = 0.00f;
    this->SeriouslyAnnoyanceThresholdTimeOverride = 0.00f;
    this->bCanRandomlyLookAtNPC = true;
    this->ChanceToLookAtNPC = 25;
    this->bCanRandomlyLookAtGoat = true;
    this->ChanceToLookAtGoat = 75;
    this->bOnlyRelevantWhenPActorIsUnmoved = true;
    this->PActorUnmovedLocDelta = 30.00f;
    this->PActorUnmovedRotDelta = 30.00f;
    this->bSetPActorsDefaultToNoSimulation = true;
    this->bIsImportantSpawner = false;
    this->bPreventSpawnUntilNextLoad = false;
    this->StationaryTree = NULL;
    this->BehaviorOverride = NULL;
    this->bShouldDefaultToIdleNPC = false;
    this->Radius = 500.00f;
    this->bDrawPreviewRadius = false;
    this->Duration = 5.00f;
    this->DurationDeviation = 0.00f;
    this->bInOrder = false;
    this->bSkipTakenWaypoint = true;
    this->bCanEditSets = false;
    this->bCanEditBehaviorOverride = true;
    this->bManuallySetEditRules = false;
    this->bCanEditShouldDefaultIdleNPC = false;
    this->bCanEditActorA = false;
    this->bCanEditActorB = false;
    this->bCanEditActorArrayA = false;
    this->bCanEditActorArrayB = false;
    this->bCanEditRadius = false;
    this->bCanEditDuration = false;
    this->bCanEditDurationDeviation = false;
    this->bCanEditInOrder = false;
    this->bCanEditSkipTaken = false;
    this->ClaimedBy = NULL;
    this->HairMeshComponent->SetupAttachment(PreviewSkeletalMeshComponent);
    this->LowerBodyMeshComponent->SetupAttachment(PreviewSkeletalMeshComponent);
    this->PreviewSkeletalMeshComponent->SetupAttachment(RootComponent);
    this->UpperBodyMeshComponent->SetupAttachment(PreviewSkeletalMeshComponent);
}

void AGGNPCSpawner_Environment::ResetLockedAppearance() {
}

bool AGGNPCSpawner_Environment::IsPActorsUnmoved() {
    return false;
}

bool AGGNPCSpawner_Environment::IsClaimedByNPCAtSpawner(float DistanceCheck, bool CheckCustomAnimMode) {
    return false;
}

FAppearanceSetRow AGGNPCSpawner_Environment::GetSetRow(const FString& RowName, bool& FoundRow) {
    return FAppearanceSetRow{};
}

USkeletalMeshComponent* AGGNPCSpawner_Environment::GetPreviewMeshComp() const {
    return NULL;
}

AGGNPC* AGGNPCSpawner_Environment::GetClaimedBy(bool bEvenIfNotInitialized) const {
    return NULL;
}


