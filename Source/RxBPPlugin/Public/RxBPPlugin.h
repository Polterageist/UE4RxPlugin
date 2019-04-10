// Copyright (c) 2019 Aleksandr Rybalka. All Rights Reserved

#pragma once

#include "Modules/ModuleManager.h"

class FRxBPPluginModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
