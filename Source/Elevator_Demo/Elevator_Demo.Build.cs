// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Elevator_Demo : ModuleRules
{
	public Elevator_Demo(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
