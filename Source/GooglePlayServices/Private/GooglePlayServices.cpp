//
//  Created by Robert Segal on 2016-11-07.
//  Copyright (c) 2016 Get Set Games Inc. All rights reserved.
//

#include "GooglePlayServicesPrivatePCH.h"
#include "GooglePlayServicesSettings.h"
#include "ISettingsModule.h"

DEFINE_LOG_CATEGORY(LogGooglePlayServices);

#define LOCTEXT_NAMESPACE "GooglePlayServices"

class FGooglePlayServices : public IGooglePlayServices
{
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

IMPLEMENT_MODULE( FGooglePlayServices, GooglePlayServices )

void FGooglePlayServices::StartupModule()
{
	// register settings
	if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		SettingsModule->RegisterSettings("Project", "Plugins", "GooglePlayServices",
										 LOCTEXT("RuntimeSettingsName", "GooglePlayServices"),
										 LOCTEXT("RuntimeSettingsDescription", "Configure the GooglePlayServices plugin"),
										 GetMutableDefault<UGooglePlayServicesSettings>()
										 );
	}
}


void FGooglePlayServices::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
