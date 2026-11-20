#pragma once
#include "CoreMinimal.h"
#include "EControllerState.generated.h"

UENUM(BlueprintType)
enum class EControllerState : uint8 {
    CS_None,
    CS_Gameplay,
    CS_Interact,
    CS_Vehicle,
    CS_VehicleInteract,
    CS_Tow,
    CS_Bike,
    CS_UFO,
    CS_Crane,
    CS_Broom,
    CS_MotorBike,
    CS_Helicopter,
    CS_SandWorm,
    CS_Intro,
    CS_Cinematic,
    CS_Minigames,
    CS_Minigames_Join,
    CS_Menu_Join,
    CS_MainMenu,
    CS_Menu,
    CS_Menu_Castle,
    CS_Menu_Collectibles,
    CS_Menu_Minigames,
    CS_Menu_Wardrobe,
    CS_Menu_Map,
    CS_Menu_Map_Tower,
    CS_Menu_Quests_Events,
    CS_Menu_Quests_Instincts,
    CS_Menu_Options,
    CS_Menu_Pause,
    CS_Menu_Help,
    CS_Menu_Loading,
    CS_Menu_WaitingForHost,
    CS_Menu_Inventory,
    CS_Menu_Switch,
    CS_Menu_BrokenRelics,
};

