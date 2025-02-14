#pragma once
#include "CoreMinimal.h"
#include "TargetingSortTask_Base.h"
#include "TargetingFilterTask_SortByDistance.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTargetingFilterTask_SortByDistance : public UTargetingSortTask_Base {
    GENERATED_BODY()
public:
    UTargetingFilterTask_SortByDistance();

};

