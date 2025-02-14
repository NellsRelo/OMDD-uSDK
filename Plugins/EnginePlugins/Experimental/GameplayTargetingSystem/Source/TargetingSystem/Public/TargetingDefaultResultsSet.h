#pragma once
#include "CoreMinimal.h"
#include "TargetingDefaultResultData.h"
#include "TargetingDefaultResultsSet.generated.h"

USTRUCT(BlueprintType)
struct FTargetingDefaultResultsSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTargetingDefaultResultData> TargetResults;
    
    TARGETINGSYSTEM_API FTargetingDefaultResultsSet();
};

