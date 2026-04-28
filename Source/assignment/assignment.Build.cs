// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class assignment : ModuleRules
{
	public assignment(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"assignment",
			"assignment/Variant_Platforming",
			"assignment/Variant_Platforming/Animation",
			"assignment/Variant_Combat",
			"assignment/Variant_Combat/AI",
			"assignment/Variant_Combat/Animation",
			"assignment/Variant_Combat/Gameplay",
			"assignment/Variant_Combat/Interfaces",
			"assignment/Variant_Combat/UI",
			"assignment/Variant_SideScrolling",
			"assignment/Variant_SideScrolling/AI",
			"assignment/Variant_SideScrolling/Gameplay",
			"assignment/Variant_SideScrolling/Interfaces",
			"assignment/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
