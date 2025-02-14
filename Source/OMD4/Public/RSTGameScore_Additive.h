#pragma once
#include "CoreMinimal.h"
#include "RSTGameScoreBase.h"
#include "RSTGameScore_Additive.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class URSTGameScore_Additive : public URSTGameScoreBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditiveScore;
    
    URSTGameScore_Additive();

};

