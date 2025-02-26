#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ERSTInputState.h"
#include "RSTDeferredInputState.generated.h"

USTRUCT(BlueprintType)
struct FRSTDeferredInputState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSTInputState State;
    
    OMD4_API FRSTDeferredInputState();
};

