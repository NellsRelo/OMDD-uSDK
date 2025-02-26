#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "RSTForceFeedbackParams.h"
#include "RSTAnimNotifyState_ForceFeedback.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OMD4_API URSTAnimNotifyState_ForceFeedback : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTForceFeedbackParams ForceFeedbackParams;
    
    URSTAnimNotifyState_ForceFeedback();

};

