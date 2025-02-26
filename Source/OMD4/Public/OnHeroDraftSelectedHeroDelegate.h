#pragma once
#include "CoreMinimal.h"
#include "OnHeroDraftSelectedHeroDelegate.generated.h"

class URSTPawnDefinitionHero;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHeroDraftSelectedHero, const URSTPawnDefinitionHero*, SelectedHero, int32, PlayerIndex);

