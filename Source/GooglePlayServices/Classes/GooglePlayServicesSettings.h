//
//  Created by Robert Segal on 2016-11-07.
//  Copyright (c) 2016 Get Set Games Inc. All rights reserved.
//

#pragma once

#include "GooglePlayServicesSettings.generated.h"

UCLASS(config = Engine, defaultconfig)
class UGooglePlayServicesSettings : public UObject
{
	GENERATED_BODY()
	
public:
	UGooglePlayServicesSettings(const FObjectInitializer& ObjectInitializer);
};
