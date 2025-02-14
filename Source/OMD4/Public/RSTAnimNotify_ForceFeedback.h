#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "RSTForceFeedbackParams.h"
#include "RSTAnimNotify_ForceFeedback.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OMD4_API URSTAnimNotify_ForceFeedback : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTForceFeedbackParams ForceFeedbackParams;
    
    URSTAnimNotify_ForceFeedback();

};

