using UnrealBuildTool;

public class GoatMultiverse : ModuleRules {
    public GoatMultiverse(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "CableComponent",
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayAbilities",
            "GameplayTags",
            "Goat2",
            "Goat2Mobile",
            "UMG",

            "GameplayTasks",
            "InputCore"
        });
    }
}
