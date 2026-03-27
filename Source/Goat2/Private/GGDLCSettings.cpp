#include "GGDLCSettings.h"

UGGDLCSettings::UGGDLCSettings() {
    this->DLCEntitlements.AddDefaulted(5);
    this->DLCDataAssets.AddDefaulted(6);
    this->OST_QRCode_URL = TEXT("https://goatsimulator3.com/qr.png");
    this->LevelData.AddDefaulted(3);
    this->DLCOffers.AddDefaulted(5);
    this->bEditorDefaultOwnership_GoatMultiverse = true;
    this->bEditorDefaultOwnership_GoatApocalypse = true;
    this->bEditorDefaultOwnership_MagicPack = true;
    this->bEditorDefaultOwnership_SuperPack = true;
    this->bEditorDefaultOwnership_PreUdder = true;
    this->bEditorDefaultOwnership_DigitalDowngrade = true;
    this->bSupportLegacyDLCOwnershipPopups = false;
    this->bDLCPurchasePopupOrder_NewestFirst = true;
}


