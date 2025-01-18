// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UntitledRougelike : ModuleRules
{
	public UntitledRougelike(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
		DynamicallyLoadedModuleNames.Add("OnlineSubsystemSteam");
	}
}
