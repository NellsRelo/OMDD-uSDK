using UnrealBuildTool;

public class OMD4 : ModuleRules {
    public OMD4(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AnimationBudgetAllocator",
            "AudioMixer",
            "AudioModulation",
            "BinkMediaPlayer",
            "CommonGame",
            "CommonInput",
            "CommonLoadingScreen",
            "CommonUI",
            "CommonUser",
            "Core",
            "CoreUObject",
            "DLSSBlueprint",
            "DeveloperSettings",
            "Engine",
            "EnhancedInput",
            "Foliage",
            "GameFeatures",
            "GameSubtitles",
            "GameplayAbilities",
            "GameplayTags",
            "GameplayTasks",
            "Gauntlet",
            "GeometryFramework",
            "InputCore",
            "LevelSequence",
            "ModularGameplay",
            "ModularGameplayActors",
            "MovieScene",
            "NavPower",
            "NavigationSystem",
            "NetCore",
            "Niagara",
            "NiagaraAnimNotifies",
            "PhysicsCore",
            "Rejoin",
            "RobotDialogueSystem",
            "RobotNetworkProxyActor",
            "RobotOnlineShared",
            "RobotVoice",
            "Slate",
            "SlateCore",
            "TargetingSystem",
            "UMG",
            "OnlineSubsystem"
        });
    }
}
