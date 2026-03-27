using UnrealBuildTool;

public class Goat2GameTarget : TargetRules {
	public Goat2GameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"Goat2",
			"Goat2AnimNodes",
			"Goat2Mobile",
		});
	}
}
