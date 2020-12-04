// Copyright © 2020 LocalizeDirect AB

#pragma once

#include "CoreMinimal.h"

#include "Framework/Commands/Commands.h"

class FGridlyCommands final : public TCommands<FGridlyCommands>
{
public:
	FGridlyCommands();

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr<FUICommandInfo> PluginAction;

public:
	static void LaunchBrowser();
};
