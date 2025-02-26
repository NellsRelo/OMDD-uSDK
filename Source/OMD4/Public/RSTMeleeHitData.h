#pragma once
#include "CoreMinimal.h"
#include "RSTHitData.h"
#include "RSTMeleeHitData.generated.h"

class URSTAdvanceData;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OMD4_API URSTMeleeHitData : public URSTHitData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSTAdvanceData* AdvanceData;
    
    URSTMeleeHitData();

};

