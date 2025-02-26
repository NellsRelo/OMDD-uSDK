#pragma once
#include "CoreMinimal.h"
#include "ERSTMilestoneComparisonMethod.h"
#include "ERSTStatType.h"
#include "RSTMilestoneOperationBase.h"
#include "RSTMilestoneStatEntry.h"
#include "RSTMilestoneOperationStat.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OMD4_API URSTMilestoneOperationStat : public URSTMilestoneOperationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTMilestoneStatEntry> StatEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCumulative;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSTStatType StatType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSTMilestoneComparisonMethod ComparisonMethod;
    
    URSTMilestoneOperationStat();

};

