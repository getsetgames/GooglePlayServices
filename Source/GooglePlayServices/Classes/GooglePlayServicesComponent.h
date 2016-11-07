//
//  Created by Robert Segal on 2016-11-07.
//  Copyright (c) 2016 Get Set Games Inc. All rights reserved.
//

#pragma once

#include "GooglePlayServicesFunctions.h"
#include "GooglePlayServicesComponent.generated.h"

UCLASS(ClassGroup=Advertising, HideCategories=(Activation, "Components|Activation", Collision), meta=(BlueprintSpawnableComponent))
class UGooglePlayServicesComponent : public UActorComponent
{
	GENERATED_BODY()
	
public:	
	void OnRegister() override;
	void OnUnregister() override;
	
private:	
	
};
