#pragma once
#include "CoreMinimal.h"
#include "RSTGameScoreBase.h"
#include "RSTGameScore_Curve.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class URSTGameScore_Curve : public URSTGameScoreBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* Curve;
    
    URSTGameScore_Curve();

};

