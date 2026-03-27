# GoatSimulator3 Blueprint Modding SDK
Blueprint modding environment for Goat Simulator 3.  
It provides access to Goat Simulator 3–specific features such as GGGoat.

It also includes the source code for the RickLick Mod.  
Creating the logic to bind to events one by one took a lot of work, so I hope you’ll take a look.

## Requirement
・UnrealEngine 4.27.2

・[gFurPro](https://github.com/GiM-GamesInMotion/gFurPro/tree/4.27)

・[Sentry](https://github.com/getsentry/sentry-unreal/releases)

To run the mods you create, you will need the following:

・[UE4SS experimental-latest](https://github.com/UE4SS-RE/RE-UE4SS/releases/tag/experimental-latest)

・[UE4SS GOAT Patch](https://www.nexusmods.com/goatsimulator3/mods/42)

・[BPModLoader GOAT Patch](https://www.nexusmods.com/goatsimulator3/mods/43)

## Usage
1. Install Unreal Engine 4.27.2.

2. Download [gFurPro](https://github.com/GiM-GamesInMotion/gFurPro/tree/4.27)

3. Unzip gFurPro-4.27.zip and place it in the Plugins folder

4. Download [Sentry](https://github.com/getsentry/sentry-unreal/releases)

5. Unzip sentry-unreal-version-engine4.27.zip and place it in the Plugins folder

6. Open Goat2.uproject in Unreal Engine.  
When the message "The following modules are missing ~ Would you like to rebuild them now?" appears, click Yes.

7. Wait for the build to finish.

8. Watch as the build completes and Unreal Editor fails to load FractureEditor.  
Most likely, the load fails because UE4Editor-PlanarCut.dll cannot be found.

9. Copy UE4Editor-PlanarCut.dll to a location where Unreal Engine can recognize it.  
By default, UE4Editor-PlanarCut.dll is located at:  
C:\Program Files\Epic Games\UE_4.27\Engine\Plugins\Experimental\PlanarCutPlugin\Binaries\Win64  
Copy it to the SDK’s Binaries/Win64 folder.  
Make sure to do this after the build finishes; if you do it before, it will be deleted for some reason.

10. Now, let your creativity explode!

## How to create Blueprint Mod
I think the following websites and videos will be helpful references.

[Unreal Mod Loader Tutorials: Creating A Blueprint Mod](https://www.youtube.com/watch?v=fB3yT85XhVA)

[UE4/5 Modding Guides](https://github.com/Dmgvol/UE_Modding/blob/main/BPModding/WorkingWithML.md)

[Palworld Modding Docs](https://web.archive.org/web/20241213065222/https://pwmodding.wiki/docs/category/creating-a-blueprint-mod)

## Please Note
When generating the project base with UE4GameProjectGenerator, I encountered many errors, so I made some fixes that may be incorrect or somewhat forceful.

For example, I changed the base class of AGGPerPlatformCullDistanceVolume from ACullDistanceVolume to AVolume due to errors with ACullDistanceVolume,  
removed PURE_VIRTUAL from several functions in GGCompanion_Owl,  
and commented out and disabled things like the HornComponent in AGGGoat because the editor was crashing during startup.

These changes may cause unintended issues.


The RickLick Mod uses chunk 1, and TestBPMod uses chunk 2.  
Please use a different chunk, or remove those mods.

## Credits
[Coffe Stain North](https://coffeestain.com/studio/coffee-stain-north/)

[UE4SS](https://github.com/UE4SS-RE/RE-UE4SS)

[UE4GameProjectGenerator](https://github.com/Buckminsterfullerene02/UE4GameProjectGenerator)

[GiM](https://github.com/GiM-GamesInMotion)

[Sentry](https://sentry.io)