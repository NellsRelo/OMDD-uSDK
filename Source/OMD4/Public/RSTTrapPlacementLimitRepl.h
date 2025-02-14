#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTTrapPlacementLimitRepl.generated.h"

USTRUCT(BlueprintType)
struct FRSTTrapPlacementLimitRepl {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Group;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    OMD4_API FRSTTrapPlacementLimitRepl();
};

