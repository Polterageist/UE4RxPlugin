// Copyright (c) 2019 Aleksandr Rybalka. All Rights Reserved

#pragma once

#include "Modules/ModuleManager.h"

class FUE4RxPluginModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
