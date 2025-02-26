#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTTransitionState.generated.h"

USTRUCT(BlueprintType)
struct FRSTTransitionState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TransitionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    OMD4_API FRSTTransitionState();
};

