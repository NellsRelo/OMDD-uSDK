#pragma once
#include "CoreMinimal.h"
#include "RSTTransitionStep.generated.h"

class URSTTransitionAction;

USTRUCT(BlueprintType)
struct FRSTTransitionStep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTTransitionAction* Action;
    
    OMD4_API FRSTTransitionStep();
};

