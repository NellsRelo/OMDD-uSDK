#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTTransitionFinishedMessage.generated.h"

USTRUCT(BlueprintType)
struct FRSTTransitionFinishedMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCancelled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AdditionalTags;
    
    OMD4_API FRSTTransitionFinishedMessage();
};

