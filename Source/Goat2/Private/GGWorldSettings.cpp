#include "GGWorldSettings.h"

AGGWorldSettings::AGGWorldSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = false;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_None;
    this->bUsePActorManager = true;
    this->bShowTutorialsInEditorPlay = false;
    this->bShowSaveNotificationInEditorPlay = true;
    this->bUseRadarComponent = true;
    this->bAutoEquipSavedGoatGear = true;
    this->bAllowRestart = false;
    this->bUseNPCAndVehicleManager = false;
    this->bIsMenuLevel = false;
    this->bDisableAreaNotificationInIntro = false;
    this->bIntroIgnorePIE = false;
    this->bIntroIgnoreSaveFile = false;
    this->bSkipGameUpdateNotificationsIfIntroHasNotPlayed = false;
    this->bDisableSoundTrack = false;
    this->bSaveGameStartLocation = true;
}


