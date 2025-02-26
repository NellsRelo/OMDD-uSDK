using UnrealBuildTool;

public class OMDDGameTarget : TargetRules {
	public OMDDGameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		ExtraModuleNames.AddRange(new string[] {
			"OMD4"
		});
	}
}
