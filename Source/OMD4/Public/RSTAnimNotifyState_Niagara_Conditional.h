#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_TimedNiagaraEffect.h"
#include "RSTConditionalNiagaraAnimData.h"
#include "RSTAnimNotifyState_Niagara_Conditional.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OMD4_API URSTAnimNotifyState_Niagara_Conditional : public UAnimNotifyState_TimedNiagaraEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTConditionalNiagaraAnimData ConditionalTemplates;
    
    URSTAnimNotifyState_Niagara_Conditional();

};

