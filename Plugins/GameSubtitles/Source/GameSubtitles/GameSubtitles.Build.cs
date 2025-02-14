using UnrealBuildTool;

public class GameSubtitles : ModuleRules {
    public GameSubtitles(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "MediaAssets",
            "Overlay",
            "SlateCore",
            "UMG",
        });
    }
}
