#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TargetingTask.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class TARGETINGSYSTEM_API UTargetingTask : public UObject {
    GENERATED_BODY()
public:
    UTargetingTask();

};

