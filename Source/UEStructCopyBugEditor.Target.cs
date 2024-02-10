// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class UEStructCopyBugEditorTarget : TargetRules
{
	public UEStructCopyBugEditorTarget( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("UEStructCopyBug");
	}
}
