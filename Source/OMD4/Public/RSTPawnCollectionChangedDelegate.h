#pragma once
#include "CoreMinimal.h"
#include "RSTPawnCollectionChangedDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRSTPawnCollectionChanged, const TArray<APawn*>&, ChangedPawns);

