#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RSTTargetingRule.h"
#include "RSTTargetingData.generated.h"

UCLASS(Blueprintable)
class OMD4_API URSTTargetingData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTTargetingRule> TargetingRules;
    
public:
    URSTTargetingData();

};

