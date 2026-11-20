#include "GGDLCSettings.h"

UGGDLCSettings::UGGDLCSettings() {
    this->DLCEntitlements.AddDefaulted(6);
    this->DLCDataAssets.AddDefaulted(8);
    this->OST_QRCode_URL = TEXT("https:");
    this->LevelData.AddDefaulted(4);
    this->DLCOffers.AddDefaulted(6);
    this->bEditorDefaultOwnership_GoatMultiverse = true;
    this->bEditorDefaultOwnership_GoatApocalypse = true;
    this->bEditorDefaultOwnership_GoatThemePark = true;
    this->bEditorDefaultOwnership_MagicPack = true;
    this->bEditorDefaultOwnership_SuperPack = true;
    this->bEditorDefaultOwnership_PreUdder = true;
    this->bEditorDefaultOwnership_DigitalDowngrade = true;
    this->bEditorDefaultOwnership_FuturePack = true;
    this->bSupportLegacyDLCOwnershipPopups = false;
    this->bDLCPurchasePopupOrder_NewestFirst = true;
}


