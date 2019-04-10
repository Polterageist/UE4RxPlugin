// Copyright 2019 Aleksandr Rybalka. All Rights Reserved.

#include "UE4RxPluginModule.h"
#include "CoreMinimal.h"  

#define LOCTEXT_NAMESPACE "FUE4RxPluginModule"

void FUE4RxPluginModule::StartupModule()
{                                                                                                                                         
}

void FUE4RxPluginModule::ShutdownModule()
{

}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FUE4RxPluginModule, UE4RxPlugin)
