#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnHeroDraftSelectedHeroesDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHeroDraftSelectedHeroes, const TArray<FGameplayTag>&, SelectedHeroes);

