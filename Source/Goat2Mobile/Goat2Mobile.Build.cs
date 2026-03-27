using UnrealBuildTool;

public class Goat2Mobile : ModuleRules {
    public Goat2Mobile(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CableComponent",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "GameplayTags",
            "Goat2",
            "GoatPlatformHelpers",
            "SlateCore",
            "UMG",
        });
    }
}
