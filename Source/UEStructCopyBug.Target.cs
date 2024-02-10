// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class UEStructCopyBugTarget : TargetRules
{
	public UEStructCopyBugTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("UEStructCopyBug");
	}
}
